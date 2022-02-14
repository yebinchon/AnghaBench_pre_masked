
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {scalar_t__ so_error; } ;
struct icl_pdu {scalar_t__ ip_ahs_len; TYPE_1__* ip_bhs; } ;
struct icl_conn {size_t ic_receive_len; int (* ic_receive ) (struct icl_pdu*) ;scalar_t__ ic_disconnecting; struct socket* ic_socket; } ;
struct TYPE_2__ {int bhs_opcode; } ;


 int FUNC_0 (char*,size_t,...) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct icl_conn*) ;
 struct icl_pdu* FUNC_4 (struct icl_conn*,size_t*) ;
 int FUNC_5 (struct icl_conn*,struct icl_pdu*) ;
 int FUNC_6 (struct icl_pdu*) ;

__attribute__((used)) static void
FUNC_7(struct icl_conn *VAR_0, size_t VAR_1)
{
 struct icl_pdu *VAR_2;
 struct socket *VAR_3;

 VAR_3 = VAR_0->ic_socket;





 FUNC_2(VAR_3 != ((void*)0), ("NULL socket"));

 for (;;) {
  if (VAR_0->ic_disconnecting)
   return;

  if (VAR_3->so_error != 0) {
   FUNC_0("connection error %d; "
       "dropping connection", VAR_3->so_error);
   FUNC_3(VAR_0);
   return;
  }





  if (VAR_1 < VAR_0->ic_receive_len) {





   return;
  }

  VAR_2 = FUNC_4(VAR_0, &VAR_1);
  if (VAR_2 == ((void*)0))
   continue;

  if (VAR_2->ip_ahs_len > 0) {
   FUNC_1("received PDU with unsupported "
       "AHS; opcode 0x%x; dropping connection",
       VAR_2->ip_bhs->bhs_opcode);
   FUNC_5(VAR_0, VAR_2);
   FUNC_3(VAR_0);
   return;
  }

  (VAR_0->ic_receive)(VAR_2);
 }
}

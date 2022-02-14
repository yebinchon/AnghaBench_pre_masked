
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct icl_pdu {struct icl_conn* ip_conn; } ;
struct icl_conn {int ic_send_cv; int ic_to_send; int * ic_socket; scalar_t__ ic_disconnecting; } ;


 int FUNC_0 (struct icl_conn*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct icl_pdu*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct icl_conn*,struct icl_pdu*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_6(struct icl_pdu *VAR_1)
{
 struct icl_conn *VAR_2;

 VAR_2 = VAR_1->ip_conn;

 FUNC_0(VAR_2);

 if (VAR_2->ic_disconnecting || VAR_2->ic_socket == ((void*)0)) {
  FUNC_1("icl_pdu_queue on closed connection");
  FUNC_5(VAR_2, VAR_1);
  return;
 }

 if (!FUNC_2(&VAR_2->ic_to_send)) {
  FUNC_3(&VAR_2->ic_to_send, VAR_1, VAR_0);





  return;
 }

 FUNC_3(&VAR_2->ic_to_send, VAR_1, VAR_0);
 FUNC_4(&VAR_2->ic_send_cv);
}

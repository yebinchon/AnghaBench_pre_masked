
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int sk_state; int sk_type; int sk_sndtimeo; int sk_socket; } ;
struct l2cap_conn_rsp {void* status; void* result; void* dcid; void* scid; } ;
struct l2cap_conn {int dummy; } ;
typedef int rsp ;
typedef int __u16 ;
struct TYPE_4__ {int defer_setup; } ;
struct TYPE_3__ {int ident; int scid; int dcid; struct l2cap_conn* conn; } ;






 int FUNC_0 (char*,struct sock*,int,int ) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* FUNC_1 (struct sock*) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct sock*,int) ;
 TYPE_1__* FUNC_4 (struct sock*) ;
 int FUNC_5 (struct l2cap_conn*,int ,int ,int,struct l2cap_conn_rsp*) ;
 int FUNC_6 (struct l2cap_conn*,struct sock*) ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*,int ) ;
 int FUNC_9 (struct sock*,int ) ;

__attribute__((used)) static void FUNC_10(struct sock *VAR_6, int VAR_7)
{
 FUNC_0("sk %p state %d socket %p", VAR_6, VAR_6->sk_state, VAR_6->sk_socket);

 switch (VAR_6->sk_state) {
 case 128:
  FUNC_7(VAR_6);
  break;

 case 130:
 case 133:
  if (VAR_6->sk_type == VAR_4) {
   struct l2cap_conn *VAR_8 = FUNC_4(VAR_6)->conn;

   VAR_6->sk_state = 129;
   FUNC_8(VAR_6, VAR_6->sk_sndtimeo);
   FUNC_6(VAR_8, VAR_6);
  } else
   FUNC_3(VAR_6, VAR_7);
  break;

 case 131:
  if (VAR_6->sk_type == VAR_4) {
   struct l2cap_conn *VAR_9 = FUNC_4(VAR_6)->conn;
   struct l2cap_conn_rsp VAR_10;
   __u16 VAR_11;

   if (FUNC_1(VAR_6)->defer_setup)
    VAR_11 = VAR_2;
   else
    VAR_11 = VAR_1;

   VAR_10.scid = FUNC_2(FUNC_4(VAR_6)->dcid);
   VAR_10.dcid = FUNC_2(FUNC_4(VAR_6)->scid);
   VAR_10.result = FUNC_2(VAR_11);
   VAR_10.status = FUNC_2(VAR_3);
   FUNC_5(VAR_9, FUNC_4(VAR_6)->ident,
     VAR_0, sizeof(VAR_10), &VAR_10);
  } else
   FUNC_3(VAR_6, VAR_7);
  break;

 case 132:
 case 129:
  FUNC_3(VAR_6, VAR_7);
  break;

 default:
  FUNC_9(VAR_6, VAR_5);
  break;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sock {scalar_t__ sk_state; } ;
struct msghdr {scalar_t__ msg_namelen; } ;
struct l2cap_conn_rsp {void* status; void* result; void* dcid; void* scid; } ;
struct kiocb {int dummy; } ;
typedef int rsp ;
struct TYPE_4__ {scalar_t__ defer_setup; } ;
struct TYPE_3__ {int ident; int conn; int scid; int dcid; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct kiocb*,struct socket*,struct msghdr*,size_t,int) ;
 void* FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (struct sock*) ;
 int FUNC_4 (int ,int ,int ,int,struct l2cap_conn_rsp*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;

__attribute__((used)) static int FUNC_7(struct kiocb *VAR_5, struct socket *VAR_6, struct msghdr *VAR_7, size_t VAR_8, int VAR_9)
{
 struct sock *VAR_10 = VAR_6->sk;

 FUNC_5(VAR_10);

 VAR_7->msg_namelen = 0;

 if (VAR_10->sk_state == VAR_1 && FUNC_0(VAR_10)->defer_setup) {
  struct l2cap_conn_rsp VAR_11;

  VAR_10->sk_state = VAR_0;

  VAR_11.scid = FUNC_2(FUNC_3(VAR_10)->dcid);
  VAR_11.dcid = FUNC_2(FUNC_3(VAR_10)->scid);
  VAR_11.result = FUNC_2(VAR_3);
  VAR_11.status = FUNC_2(VAR_4);
  FUNC_4(FUNC_3(VAR_10)->conn, FUNC_3(VAR_10)->ident,
     VAR_2, sizeof(VAR_11), &VAR_11);

  FUNC_6(VAR_10);
  return 0;
 }

 FUNC_6(VAR_10);

 return FUNC_1(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int xpt_flags; } ;
struct svc_sock {TYPE_1__ sk_xprt; } ;
struct sock {scalar_t__ sk_sleep; scalar_t__ sk_user_data; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct svc_sock*,...) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct sock *VAR_1)
{
 struct svc_sock *VAR_2 = (struct svc_sock *)(VAR_1->sk_user_data);

 if (VAR_2) {
  FUNC_0("svc: socket %p(inet %p), write_space busy=%d\n",
   VAR_2, VAR_1, FUNC_2(VAR_0, &VAR_2->sk_xprt.xpt_flags));
  FUNC_1(&VAR_2->sk_xprt);
 }

 if (VAR_1->sk_sleep && FUNC_3(VAR_1->sk_sleep)) {
  FUNC_0("RPC svc_write_space: someone sleeping on %p\n",
         VAR_2);
  FUNC_4(VAR_1->sk_sleep);
 }
}

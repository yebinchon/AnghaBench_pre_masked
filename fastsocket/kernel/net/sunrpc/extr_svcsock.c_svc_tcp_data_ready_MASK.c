
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int xpt_flags; } ;
struct svc_sock {TYPE_1__ sk_xprt; } ;
struct sock {scalar_t__ sk_sleep; scalar_t__ sk_user_data; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct sock*,scalar_t__) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct sock *VAR_1, int VAR_2)
{
 struct svc_sock *VAR_3 = (struct svc_sock *)VAR_1->sk_user_data;

 FUNC_0("svc: socket %p TCP data ready (svsk %p)\n",
  VAR_1, VAR_1->sk_user_data);
 if (VAR_3) {
  FUNC_1(VAR_0, &VAR_3->sk_xprt.xpt_flags);
  FUNC_2(&VAR_3->sk_xprt);
 }
 if (VAR_1->sk_sleep && FUNC_3(VAR_1->sk_sleep))
  FUNC_4(VAR_1->sk_sleep);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int xpt_flags; } ;
struct svc_sock {TYPE_1__ sk_xprt; } ;
struct sock {scalar_t__ sk_sleep; scalar_t__ sk_user_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,struct svc_sock*,struct sock*,int,int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct sock *VAR_2, int VAR_3)
{
 struct svc_sock *VAR_4 = (struct svc_sock *)VAR_2->sk_user_data;

 if (VAR_4) {
  FUNC_0("svc: socket %p(inet %p), count=%d, busy=%d\n",
   VAR_4, VAR_2, VAR_3,
   FUNC_3(VAR_0, &VAR_4->sk_xprt.xpt_flags));
  FUNC_1(VAR_1, &VAR_4->sk_xprt.xpt_flags);
  FUNC_2(&VAR_4->sk_xprt);
 }
 if (VAR_2->sk_sleep && FUNC_4(VAR_2->sk_sleep))
  FUNC_5(VAR_2->sk_sleep);
}

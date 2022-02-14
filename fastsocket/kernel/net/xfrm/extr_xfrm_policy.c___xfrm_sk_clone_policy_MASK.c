
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_policy {int dummy; } ;
struct sock {struct xfrm_policy** sk_policy; } ;


 int VAR_0 ;
 void* FUNC_0 (struct xfrm_policy*,int) ;

int FUNC_1(struct sock *VAR_1)
{
 struct xfrm_policy *VAR_2 = VAR_1->sk_policy[0],
      *VAR_3 = VAR_1->sk_policy[1];

 VAR_1->sk_policy[0] = VAR_1->sk_policy[1] = ((void*)0);
 if (VAR_2 && (VAR_1->sk_policy[0] = FUNC_0(VAR_2, 0)) == ((void*)0))
  return -VAR_0;
 if (VAR_3 && (VAR_1->sk_policy[1] = FUNC_0(VAR_3, 1)) == ((void*)0))
  return -VAR_0;
 return 0;
}

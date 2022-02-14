
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int add_time; } ;
struct xfrm_policy {scalar_t__ type; int index; TYPE_1__ curlft; } ;
struct sock {struct xfrm_policy** sk_policy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct xfrm_policy*,scalar_t__) ;
 int FUNC_1 (struct xfrm_policy*,scalar_t__) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct net*,scalar_t__) ;
 int FUNC_6 (struct xfrm_policy*) ;
 int VAR_3 ;
 struct net* FUNC_7 (struct xfrm_policy*) ;

int FUNC_8(struct sock *VAR_4, int VAR_5, struct xfrm_policy *VAR_6)
{
 struct net *VAR_7 = FUNC_7(VAR_6);
 struct xfrm_policy *VAR_8;






 FUNC_3(&VAR_3);
 VAR_8 = VAR_4->sk_policy[VAR_5];
 VAR_4->sk_policy[VAR_5] = VAR_6;
 if (VAR_6) {
  VAR_6->curlft.add_time = FUNC_2();
  VAR_6->index = FUNC_5(VAR_7, VAR_1+VAR_5);
  FUNC_0(VAR_6, VAR_1+VAR_5);
 }
 if (VAR_8)



  FUNC_1(VAR_8, VAR_1+VAR_5);
 FUNC_4(&VAR_3);

 if (VAR_8) {
  FUNC_6(VAR_8);
 }
 return 0;
}

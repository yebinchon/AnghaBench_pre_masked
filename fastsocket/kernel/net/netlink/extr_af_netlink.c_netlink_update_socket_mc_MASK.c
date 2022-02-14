
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netlink_sock {int subscriptions; int sk; int groups; } ;


 int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (unsigned int,int ) ;

__attribute__((used)) static void FUNC_5(struct netlink_sock *VAR_0,
         unsigned int VAR_1,
         int VAR_2)
{
 int VAR_3, VAR_4 = !!VAR_2, VAR_5;

 VAR_3 = FUNC_4(VAR_1 - 1, VAR_0->groups);
 VAR_5 = VAR_0->subscriptions - VAR_3 + VAR_4;
 if (VAR_4)
  FUNC_1(VAR_1 - 1, VAR_0->groups);
 else
  FUNC_0(VAR_1 - 1, VAR_0->groups);
 FUNC_3(&VAR_0->sk, VAR_5);
 FUNC_2(&VAR_0->sk);
}

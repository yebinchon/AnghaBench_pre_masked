
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int frags; } ;
struct net {TYPE_1__ ipv6; } ;
struct inet6_dev {int dummy; } ;


 int FUNC_0 (struct net*,struct inet6_dev*,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(struct net *VAR_2, struct inet6_dev *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(&VAR_2->ipv6.frags, &VAR_1);
 if (VAR_4)
  FUNC_0(VAR_2, VAR_3, VAR_0, VAR_4);
}

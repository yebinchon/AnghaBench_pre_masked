
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inet6_ifaddr {TYPE_1__* idev; int prefix_len; int addr; } ;
struct in6_addr {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ FUNC_0 (struct in6_addr*) ;
 int FUNC_1 (struct in6_addr*,int *,int ) ;
 int FUNC_2 (int ,struct in6_addr*) ;

__attribute__((used)) static void FUNC_3(struct inet6_ifaddr *VAR_0)
{
 struct in6_addr VAR_1;
 FUNC_1(&VAR_1, &VAR_0->addr, VAR_0->prefix_len);
 if (FUNC_0(&VAR_1))
  return;
 FUNC_2(VAR_0->idev->dev, &VAR_1);
}

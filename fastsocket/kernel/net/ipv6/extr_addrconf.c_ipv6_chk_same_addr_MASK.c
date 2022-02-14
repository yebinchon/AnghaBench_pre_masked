
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct inet6_ifaddr {TYPE_1__* idev; int addr; struct inet6_ifaddr* lst_next; } ;
struct in6_addr {int dummy; } ;
struct TYPE_2__ {struct net_device* dev; } ;


 int FUNC_0 (struct net_device*) ;
 struct inet6_ifaddr** VAR_0 ;
 scalar_t__ FUNC_1 (int *,struct in6_addr const*) ;
 size_t FUNC_2 (struct in6_addr const*) ;
 int FUNC_3 (int ,struct net*) ;

__attribute__((used)) static
int FUNC_4(struct net *VAR_1, const struct in6_addr *VAR_2,
         struct net_device *VAR_3)
{
 struct inet6_ifaddr * VAR_4;
 u8 VAR_5 = FUNC_2(VAR_2);

 for(VAR_4 = VAR_0[VAR_5]; VAR_4; VAR_4=VAR_4->lst_next) {
  if (!FUNC_3(FUNC_0(VAR_4->idev->dev), VAR_1))
   continue;
  if (FUNC_1(&VAR_4->addr, VAR_2)) {
   if (VAR_3 == ((void*)0) || VAR_4->idev->dev == VAR_3)
    break;
  }
 }
 return VAR_4 != ((void*)0);
}

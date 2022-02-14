
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct inet6_ifaddr {int scope; TYPE_1__* idev; int addr; struct inet6_ifaddr* lst_next; } ;
struct in6_addr {int dummy; } ;
struct TYPE_2__ {struct net_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct inet6_ifaddr*) ;
 struct inet6_ifaddr** VAR_3 ;
 scalar_t__ FUNC_2 (int *,struct in6_addr const*) ;
 size_t FUNC_3 (struct in6_addr const*) ;
 int FUNC_4 (int ,struct net*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

struct inet6_ifaddr *FUNC_7(struct net *VAR_4, const struct in6_addr *VAR_5,
         struct net_device *VAR_6, int VAR_7)
{
 struct inet6_ifaddr * VAR_8;
 u8 VAR_9 = FUNC_3(VAR_5);

 FUNC_5(&VAR_2);
 for(VAR_8 = VAR_3[VAR_9]; VAR_8; VAR_8=VAR_8->lst_next) {
  if (!FUNC_4(FUNC_0(VAR_8->idev->dev), VAR_4))
   continue;
  if (FUNC_2(&VAR_8->addr, VAR_5)) {
   if (VAR_6 == ((void*)0) || VAR_8->idev->dev == VAR_6 ||
       !(VAR_8->scope&(VAR_1|VAR_0) || VAR_7)) {
    FUNC_1(VAR_8);
    break;
   }
  }
 }
 FUNC_6(&VAR_2);

 return VAR_8;
}

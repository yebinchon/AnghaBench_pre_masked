
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct inet6_ifaddr {int flags; int scope; TYPE_1__* idev; int addr; struct inet6_ifaddr* lst_next; } ;
struct in6_addr {int dummy; } ;
struct TYPE_2__ {struct net_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct net_device*) ;
 struct inet6_ifaddr** VAR_4 ;
 scalar_t__ FUNC_1 (int *,struct in6_addr*) ;
 size_t FUNC_2 (struct in6_addr*) ;
 int FUNC_3 (int ,struct net*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct net *VAR_5, struct in6_addr *VAR_6,
    struct net_device *VAR_7, int VAR_8)
{
 struct inet6_ifaddr * VAR_9;
 u8 VAR_10 = FUNC_2(VAR_6);

 FUNC_4(&VAR_3);
 for(VAR_9 = VAR_4[VAR_10]; VAR_9; VAR_9=VAR_9->lst_next) {
  if (!FUNC_3(FUNC_0(VAR_9->idev->dev), VAR_5))
   continue;
  if (FUNC_1(&VAR_9->addr, VAR_6) &&
      !(VAR_9->flags&VAR_0)) {
   if (VAR_7 == ((void*)0) || VAR_9->idev->dev == VAR_7 ||
       !(VAR_9->scope&(VAR_2|VAR_1) || VAR_8))
    break;
  }
 }
 FUNC_5(&VAR_3);
 return VAR_9 != ((void*)0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtable {scalar_t__ rt_gateway; } ;
struct net_device {int flags; scalar_t__ type; } ;
struct neighbour {int dummy; } ;
struct dst_entry {struct neighbour* neighbour; struct net_device* dev; } ;
typedef scalar_t__ __be32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct neighbour*) ;
 int FUNC_1 (struct neighbour*) ;
 struct neighbour* FUNC_2 (int *,scalar_t__*,struct net_device*) ;
 int VAR_4 ;
 int * VAR_5 ;

int FUNC_3(struct dst_entry *VAR_6)
{
 struct net_device *VAR_7 = VAR_6->dev;
 struct neighbour *VAR_8 = VAR_6->neighbour;

 if (VAR_7 == ((void*)0))
  return -VAR_1;
 if (VAR_8 == ((void*)0)) {
  __be32 VAR_9 = ((struct rtable *)VAR_6)->rt_gateway;
  if (VAR_7->flags&(VAR_2|VAR_3))
   VAR_9 = 0;
  VAR_8 = FUNC_2(



      &VAR_4, &VAR_9, VAR_7);
  if (FUNC_0(VAR_8))
   return FUNC_1(VAR_8);
  VAR_6->neighbour = VAR_8;
 }
 return 0;
}

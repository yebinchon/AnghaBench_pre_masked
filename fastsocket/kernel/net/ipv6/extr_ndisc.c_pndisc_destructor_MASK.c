
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pneigh_entry {struct net_device* dev; int key; } ;
struct net_device {int dummy; } ;
struct in6_addr {int dummy; } ;


 int * FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct in6_addr*,struct in6_addr*) ;
 int FUNC_2 (struct net_device*,struct in6_addr*) ;

__attribute__((used)) static void FUNC_3(struct pneigh_entry *VAR_0)
{
 struct in6_addr *VAR_1 = (struct in6_addr*)&VAR_0->key;
 struct in6_addr VAR_2;
 struct net_device *VAR_3 = VAR_0->dev;

 if (VAR_3 == ((void*)0) || FUNC_0(VAR_3) == ((void*)0))
  return;
 FUNC_1(VAR_1, &VAR_2);
 FUNC_2(VAR_3, &VAR_2);
}

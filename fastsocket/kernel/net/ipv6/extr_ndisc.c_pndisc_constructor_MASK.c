
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pneigh_entry {struct net_device* dev; int key; } ;
struct net_device {int dummy; } ;
struct in6_addr {int dummy; } ;


 int VAR_0 ;
 int * FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct in6_addr*,struct in6_addr*) ;
 int FUNC_2 (struct net_device*,struct in6_addr*) ;

__attribute__((used)) static int FUNC_3(struct pneigh_entry *VAR_1)
{
 struct in6_addr *VAR_2 = (struct in6_addr*)&VAR_1->key;
 struct in6_addr VAR_3;
 struct net_device *VAR_4 = VAR_1->dev;

 if (VAR_4 == ((void*)0) || FUNC_0(VAR_4) == ((void*)0))
  return -VAR_0;
 FUNC_1(VAR_2, &VAR_3);
 FUNC_2(VAR_4, &VAR_3);
 return 0;
}

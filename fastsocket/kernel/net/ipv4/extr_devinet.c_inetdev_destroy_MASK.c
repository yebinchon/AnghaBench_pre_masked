
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int * ip_ptr; } ;
struct in_ifaddr {int dummy; } ;
struct in_device {int dead; int rcu_head; int arp_parms; struct in_ifaddr* ifa_list; struct net_device* dev; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct net_device*) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct in_device*) ;
 int VAR_1 ;
 int FUNC_4 (struct in_device*,struct in_ifaddr**,int ) ;
 int FUNC_5 (struct in_ifaddr*) ;
 int FUNC_6 (struct in_device*) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static void FUNC_8(struct in_device *VAR_2)
{
 struct in_ifaddr *VAR_3;
 struct net_device *VAR_4;

 FUNC_0();

 VAR_4 = VAR_2->dev;

 VAR_2->dead = 1;

 FUNC_6(VAR_2);

 while ((VAR_3 = VAR_2->ifa_list) != ((void*)0)) {
  FUNC_4(VAR_2, &VAR_2->ifa_list, 0);
  FUNC_5(VAR_3);
 }

 VAR_4->ip_ptr = ((void*)0);

 FUNC_3(VAR_2);
 FUNC_7(&VAR_0, VAR_2->arp_parms);
 FUNC_1(VAR_4);

 FUNC_2(&VAR_2->rcu_head, VAR_1);
}

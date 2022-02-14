
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dev_addr; } ;
struct in_ifaddr {int ifa_local; struct in_ifaddr* ifa_next; } ;
struct in_device {struct in_ifaddr* ifa_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,struct net_device*,int ,int *,int ,int *) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_2,
     struct in_device *VAR_3)

{
 struct in_ifaddr *VAR_4;

 for (VAR_4 = VAR_3->ifa_list; VAR_4;
      VAR_4 = VAR_4->ifa_next) {
  FUNC_0(VAR_0, VAR_1,
    VAR_4->ifa_local, VAR_2,
    VAR_4->ifa_local, ((void*)0),
    VAR_2->dev_addr, ((void*)0));
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifaddrs {struct ifaddrs* ifa_next; int ifa_name; int * ifa_addr; } ;
typedef int ifconfig_handle_t ;
typedef int (* ifconfig_foreach_func_t ) (int *,struct ifaddrs*,void*) ;


 scalar_t__ FUNC_0 (int ,int ) ;

void
FUNC_1(ifconfig_handle_t *VAR_0, struct ifaddrs *VAR_1,
    ifconfig_foreach_func_t VAR_2, void *VAR_3)
{
 struct ifaddrs *VAR_4;

 for (VAR_4 = VAR_1;
     VAR_4 != ((void*)0) &&
     VAR_4->ifa_addr != ((void*)0) &&
     FUNC_0(VAR_4->ifa_name, VAR_1->ifa_name) == 0;
     VAR_4 = VAR_4->ifa_next) {
  VAR_2(VAR_0, VAR_4, VAR_3);
 }
}

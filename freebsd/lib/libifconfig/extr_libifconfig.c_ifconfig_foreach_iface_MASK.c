
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct ifaddrs {char* ifa_name; struct ifaddrs* ifa_next; } ;
struct TYPE_6__ {struct ifaddrs* ifap; } ;
typedef TYPE_1__ ifconfig_handle_t ;
typedef int (* ifconfig_foreach_func_t ) (TYPE_1__*,struct ifaddrs*,void*) ;


 int FUNC_0 (struct ifaddrs*) ;
 int FUNC_1 (TYPE_1__*) ;

int
FUNC_2(ifconfig_handle_t *VAR_0,
    ifconfig_foreach_func_t VAR_1, void *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0);
 if (VAR_3 == 0) {
  struct ifaddrs *VAR_4;
  char *VAR_5 = ((void*)0);

  for (VAR_4 = VAR_0->ifap; VAR_4; VAR_4 = VAR_4->ifa_next) {
   if (VAR_5 != VAR_4->ifa_name) {
    VAR_5 = VAR_4->ifa_name;
    VAR_1(VAR_0, VAR_4, VAR_2);
   }
  }
 }

 FUNC_0(VAR_0->ifap);
 VAR_0->ifap = ((void*)0);

 return (VAR_3);
}

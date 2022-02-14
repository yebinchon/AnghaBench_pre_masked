
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long base_addr; } ;
struct netdev_boot_setup {TYPE_1__ map; int name; } ;


 int IFNAMSIZ ;
 int NETDEV_BOOT_SETUP_MAX ;
 scalar_t__ __dev_get_by_name (int *,char*) ;
 struct netdev_boot_setup* dev_boot_setup ;
 int init_net ;
 int sprintf (char*,char*,char const*,int) ;
 int strcmp (char*,int ) ;

unsigned long netdev_boot_base(const char *prefix, int unit)
{
 const struct netdev_boot_setup *s = dev_boot_setup;
 char name[IFNAMSIZ];
 int i;

 sprintf(name, "%s%d", prefix, unit);





 if (__dev_get_by_name(&init_net, name))
  return 1;

 for (i = 0; i < NETDEV_BOOT_SETUP_MAX; i++)
  if (!strcmp(name, s[i].name))
   return s[i].map.base_addr;
 return 0;
}

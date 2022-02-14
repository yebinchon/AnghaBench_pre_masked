
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_list {int dummy; } ;
struct arm_gic_devinfo {struct resource_list rl; } ;
typedef int device_t ;


 int FUNC_0 (int ,char*) ;
 struct arm_gic_devinfo* FUNC_1 (int ) ;

__attribute__((used)) static struct resource_list *
FUNC_2(device_t VAR_0, device_t VAR_1)
{
 struct arm_gic_devinfo *VAR_2;

 VAR_2 = FUNC_1(VAR_1);
 FUNC_0(VAR_2 != ((void*)0), ("gic_fdt_get_resource_list: No devinfo"));

 return (&VAR_2->rl);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct resource_list_entry {int count; int end; int start; } ;
struct resource {int dummy; } ;
struct gic_v3_acpi_devinfo {int di_rl; } ;
typedef int rman_res_t ;
typedef int device_t ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 struct resource* FUNC_1 (int ,int ,int,int*,int ,int ,int ,int ) ;
 struct gic_v3_acpi_devinfo* FUNC_2 (int ) ;
 struct resource_list_entry* FUNC_3 (int *,int,int) ;

__attribute__((used)) static struct resource *
FUNC_4(device_t VAR_1, device_t VAR_2, int VAR_3, int *VAR_4,
    rman_res_t VAR_5, rman_res_t VAR_6, rman_res_t VAR_7, u_int VAR_8)
{
 struct gic_v3_acpi_devinfo *VAR_9;
 struct resource_list_entry *VAR_10;


 if (VAR_3 != VAR_0)
  return (((void*)0));

 if (FUNC_0(VAR_5, VAR_6)) {
  if ((VAR_9 = FUNC_2(VAR_2)) == ((void*)0))
   return (((void*)0));


  VAR_10 = FUNC_3(&VAR_9->di_rl, VAR_3, *VAR_4);
  if (VAR_10 == ((void*)0))
   return (((void*)0));

  VAR_5 = VAR_10->start;
  VAR_6 = VAR_10->end;
  VAR_7 = VAR_10->count;
 }

 return (FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
     VAR_7, VAR_8));
}

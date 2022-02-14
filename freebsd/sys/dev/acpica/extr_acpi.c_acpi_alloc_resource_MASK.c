
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct resource_list_entry {int start; int end; int count; } ;
struct resource_list {int dummy; } ;
struct resource {int dummy; } ;
struct acpi_device {struct resource_list ad_rl; } ;
typedef int rman_res_t ;
typedef int device_t ;
typedef int ACPI_RESOURCE ;


 scalar_t__ FUNC_0 (int ) ;
 struct resource* FUNC_1 (int ,int ,int,int*,int,int,int,int ) ;
 int FUNC_2 (int,int) ;
 int VAR_0 ;
 struct resource* FUNC_3 (int ,int,int*,int,int,int,int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int,struct resource*,int *) ;
 struct acpi_device* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct resource_list*,int,int,int,int,int) ;
 struct resource* FUNC_9 (struct resource_list*,int ,int ,int,int*,int,int,int,int ) ;
 struct resource_list_entry* FUNC_10 (struct resource_list*,int,int) ;

__attribute__((used)) static struct resource *
FUNC_11(device_t VAR_1, device_t VAR_2, int VAR_3, int *VAR_4,
    rman_res_t VAR_5, rman_res_t VAR_6, rman_res_t VAR_7, u_int VAR_8)
{

    ACPI_RESOURCE VAR_9;

    struct acpi_device *VAR_10;
    struct resource_list_entry *VAR_11;
    struct resource_list *VAR_12;
    struct resource *VAR_13;
    int VAR_14 = FUNC_2(VAR_5, VAR_6);






    if (VAR_1 == FUNC_7(VAR_2)) {
 VAR_10 = FUNC_6(VAR_2);
 VAR_12 = &VAR_10->ad_rl;
 if (!VAR_14 && FUNC_10(VAR_12, VAR_3, *VAR_4) == ((void*)0))
  FUNC_8(VAR_12, VAR_3, *VAR_4, VAR_5, VAR_6, VAR_7);
 VAR_13 = FUNC_9(VAR_12, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7,
     VAR_8);

 if (VAR_13 != ((void*)0) && VAR_3 == VAR_0) {
     if (FUNC_0(FUNC_5(VAR_2, *VAR_4, VAR_13, &VAR_9)))
  FUNC_4(VAR_2, &VAR_9);
 }
 if (VAR_13 == ((void*)0) && VAR_14) {
     VAR_11 = FUNC_10(VAR_12, VAR_3, *VAR_4);
     if (VAR_11 != ((void*)0)) {
  VAR_5 = VAR_11->start;
  VAR_6 = VAR_11->end;
  VAR_7 = VAR_11->count;
     }
 }
    } else
 VAR_13 = FUNC_1(FUNC_7(VAR_1), VAR_2, VAR_3, VAR_4,
     VAR_5, VAR_6, VAR_7, VAR_8);






    if (VAR_13 == ((void*)0) && VAR_5 + VAR_7 - 1 == VAR_6)
 VAR_13 = FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
    return (VAR_13);
}

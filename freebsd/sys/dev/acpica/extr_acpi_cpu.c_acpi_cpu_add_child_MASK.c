
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct acpi_cpu_device {int ad_rl; } ;
typedef int * device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int *,int ,char const*,int) ;
 int FUNC_1 (int *,struct acpi_cpu_device*) ;
 int FUNC_2 (struct acpi_cpu_device*,int ) ;
 struct acpi_cpu_device* FUNC_3 (int,int ,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static device_t
FUNC_5(device_t VAR_3, u_int VAR_4, const char *VAR_5, int VAR_6)
{
    struct acpi_cpu_device *VAR_7;
    device_t VAR_8;

    if ((VAR_7 = FUNC_3(sizeof(*VAR_7), VAR_1, VAR_0 | VAR_2)) == ((void*)0))
 return (((void*)0));

    FUNC_4(&VAR_7->ad_rl);

    VAR_8 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6);
    if (VAR_8 != ((void*)0))
 FUNC_1(VAR_8, VAR_7);
    else
 FUNC_2(VAR_7, VAR_1);
    return (VAR_8);
}

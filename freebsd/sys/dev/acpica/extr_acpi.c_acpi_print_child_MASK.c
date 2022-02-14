
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_list {int dummy; } ;
struct acpi_device {struct resource_list ad_rl; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 struct acpi_device* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (char*,int) ;
 scalar_t__ FUNC_6 (struct resource_list*,char*,int ,char*) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_4, device_t VAR_5)
{
    struct acpi_device *VAR_6 = FUNC_4(VAR_5);
    struct resource_list *VAR_7 = &VAR_6->ad_rl;
    int VAR_8 = 0;

    VAR_8 += FUNC_2(VAR_4, VAR_5);
    VAR_8 += FUNC_6(VAR_7, "port", VAR_1, "%#jx");
    VAR_8 += FUNC_6(VAR_7, "iomem", VAR_3, "%#jx");
    VAR_8 += FUNC_6(VAR_7, "irq", VAR_2, "%jd");
    VAR_8 += FUNC_6(VAR_7, "drq", VAR_0, "%jd");
    if (FUNC_3(VAR_5))
 VAR_8 += FUNC_5(" flags %#x", FUNC_3(VAR_5));
    VAR_8 += FUNC_0(VAR_4, VAR_5);
    VAR_8 += FUNC_1(VAR_4, VAR_5);

    return (VAR_8);
}

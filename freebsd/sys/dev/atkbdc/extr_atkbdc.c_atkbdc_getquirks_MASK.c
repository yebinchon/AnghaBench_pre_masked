
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ quirk; int product; int maker; int bios_vendor; } ;


 scalar_t__ FUNC_0 (int ,char*) ;
 char* FUNC_1 (char*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int
FUNC_2(void)
{
    int VAR_1;
    char* VAR_2 = FUNC_1("smbios.bios.vendor");
    char* VAR_3 = FUNC_1("smbios.system.maker");
    char* VAR_4 = FUNC_1("smbios.system.product");

    for (VAR_1=0; VAR_0[VAR_1].quirk != 0; ++VAR_1)
 if (FUNC_0(VAR_0[VAR_1].bios_vendor, VAR_2) &&
     FUNC_0(VAR_0[VAR_1].maker, VAR_3) &&
     FUNC_0(VAR_0[VAR_1].product, VAR_4))
  return (VAR_0[VAR_1].quirk);

    return (0);
}

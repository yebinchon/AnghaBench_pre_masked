
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_acpi_device {int uid; int * hid; } ;
typedef int device_t ;
typedef int ACPI_STATUS ;
typedef int ACPI_HANDLE ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,char**) ;
 int FUNC_2 (int ,char*,int*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct sdhci_acpi_device const* VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (int *,char*) ;

__attribute__((used)) static const struct sdhci_acpi_device *
FUNC_6(device_t VAR_2)
{
 char *VAR_3;
 int VAR_4, VAR_5;
 ACPI_HANDLE VAR_6;
 ACPI_STATUS VAR_7;
 int VAR_8;

 VAR_8 = FUNC_1(FUNC_4(VAR_2), VAR_2, VAR_1, &VAR_3);
 if (VAR_8 > 0)
  return (((void*)0));

 VAR_6 = FUNC_3(VAR_2);
 VAR_7 = FUNC_2(VAR_6, "_UID", &VAR_5);
 if (FUNC_0(VAR_7))
  VAR_5 = 0;

 for (VAR_4 = 0; VAR_0[VAR_4].hid != ((void*)0); VAR_4++) {
  if (FUNC_5(VAR_0[VAR_4].hid, VAR_3) != 0)
   continue;
  if ((VAR_0[VAR_4].uid != 0) &&
      (VAR_0[VAR_4].uid != VAR_5))
   continue;
  return (&VAR_0[VAR_4]);
 }

 return (((void*)0));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_acpi_device {int desc; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 struct sdhci_acpi_device* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_2)
{
 const struct sdhci_acpi_device *VAR_3;

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3 == ((void*)0))
  return (VAR_1);

 FUNC_0(VAR_2, VAR_3->desc);

 return (VAR_0);
}

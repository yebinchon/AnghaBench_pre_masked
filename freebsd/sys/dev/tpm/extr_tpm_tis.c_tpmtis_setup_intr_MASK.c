
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tpm_sc {int dev; } ;
typedef int ACPI_STATUS ;
typedef int ACPI_HANDLE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ,void*) ;
 int FUNC_2 (struct tpm_sc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct tpm_sc*,int ,int) ;
 int FUNC_4 (int ) ;
 int VAR_6 ;
 int FUNC_5 (struct tpm_sc*) ;
 int FUNC_6 (struct tpm_sc*,int ) ;

__attribute__((used)) static bool
FUNC_7(struct tpm_sc *VAR_7)
{
 ACPI_STATUS VAR_8;
 ACPI_HANDLE VAR_9;
 uint32_t VAR_10;

 VAR_9 = FUNC_4(VAR_7->dev);

 if(!FUNC_6(VAR_7, 0))
  return (0);

 VAR_10 = FUNC_2(VAR_7, VAR_0);
 VAR_10 |= VAR_3 |
     VAR_2 |
     VAR_4 |
     VAR_1 |
     VAR_5;
 FUNC_3(VAR_7, VAR_0, VAR_10);

 VAR_8 = FUNC_1(VAR_9, "_CRS",
     VAR_6, (void *)VAR_7);

 FUNC_5(VAR_7);

 return (FUNC_0(VAR_8));
}

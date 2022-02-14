
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_3__ {int Signature; } ;
typedef TYPE_1__ ACPI_TABLE_RSDP ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static ACPI_TABLE_RSDP *
FUNC_3(char *VAR_2, int VAR_3)
{
    ACPI_TABLE_RSDP *VAR_4;
    uint8_t *VAR_5, VAR_6;
    int VAR_7, VAR_8;


    for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7 += 16) {
 VAR_4 = (ACPI_TABLE_RSDP *)FUNC_0(VAR_2 + VAR_7);


 if (!FUNC_2(VAR_4->Signature, VAR_0, FUNC_1(VAR_0))) {
     VAR_5 = (uint8_t *)VAR_4;
     VAR_6 = 0;
     for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++)
  VAR_6 += *(VAR_5 + VAR_8);
     if (VAR_6 != 0)
  continue;
     return(VAR_4);
 }
    }
    return(((void*)0));
}

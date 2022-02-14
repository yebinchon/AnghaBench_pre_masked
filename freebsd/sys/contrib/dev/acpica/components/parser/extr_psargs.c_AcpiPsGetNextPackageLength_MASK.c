
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT8 ;
typedef int UINT32 ;
struct TYPE_3__ {int* Aml; } ;
typedef scalar_t__ ACPI_SIZE ;
typedef TYPE_1__ ACPI_PARSE_STATE ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;

__attribute__((used)) static UINT32
FUNC_2 (
    ACPI_PARSE_STATE *VAR_1)
{
    UINT8 *VAR_2 = VAR_1->Aml;
    UINT32 VAR_3 = 0;
    UINT32 VAR_4;
    UINT8 VAR_5 = 0x3F;


    FUNC_0 (VAR_0);






    VAR_4 = (VAR_2[0] >> 6);
    VAR_1->Aml += ((ACPI_SIZE) VAR_4 + 1);



    while (VAR_4)
    {







        VAR_3 |= (VAR_2[VAR_4] << ((VAR_4 << 3) - 4));

        VAR_5 = 0x0F;
        VAR_4--;
    }



    VAR_3 |= (VAR_2[0] & VAR_5);
    FUNC_1 (VAR_3);
}

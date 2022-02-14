
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_6__ {int size; int* p_Code; } ;
struct TYPE_7__ {TYPE_1__ firmware; scalar_t__ fwVerify; scalar_t__ baseAddr; } ;
typedef TYPE_2__ t_Fm ;
struct TYPE_8__ {int iready; int iadd; int idata; } ;
typedef TYPE_3__ t_FMIramRegs ;
typedef int t_Error ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ,int ,char*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static t_Error FUNC_7(t_Fm *VAR_7)
{
    t_FMIramRegs *VAR_8;
    int VAR_9;
    uint32_t VAR_10;
    uint8_t VAR_11;

    FUNC_0(VAR_7);
    VAR_8 = (t_FMIramRegs *)FUNC_4(VAR_7->baseAddr + VAR_2);


    FUNC_5(VAR_8->iadd, VAR_4);
    while (FUNC_2(VAR_8->iadd) != VAR_4) ;

    for (VAR_9=0; VAR_9 < (VAR_7->firmware.size / 4); VAR_9++)
        FUNC_5(VAR_8->idata, VAR_7->firmware.p_Code[VAR_9]);

    VAR_11 = (uint8_t)(VAR_7->firmware.size % 16);
    if (VAR_11)
        for (VAR_9=0; VAR_9 < ((16-VAR_11) / 4); VAR_9++)
            FUNC_5(VAR_8->idata, 0xffffffff);

    FUNC_5(VAR_8->iadd,VAR_7->firmware.size-4);
    while (FUNC_2(VAR_8->iadd) != (VAR_7->firmware.size-4)) ;


    while (FUNC_2(VAR_8->idata) != VAR_7->firmware.p_Code[(VAR_7->firmware.size / 4)-1]) ;

    if (VAR_7->fwVerify)
    {
        FUNC_5(VAR_8->iadd, VAR_4);
        while (FUNC_2(VAR_8->iadd) != VAR_4) ;
        for (VAR_9=0; VAR_9 < (VAR_7->firmware.size / 4); VAR_9++)
        {
            VAR_10 = FUNC_2(VAR_8->idata);
            if (VAR_10 != VAR_7->firmware.p_Code[VAR_9])
                FUNC_3(VAR_6, VAR_1,
                             ("UCode write error : write 0x%x, read 0x%x",
                              VAR_7->firmware.p_Code[VAR_9],VAR_10));
        }
        FUNC_5(VAR_8->iadd, 0x0);
    }


    FUNC_5(VAR_8->iready, VAR_5);
    FUNC_6(1000);

    FUNC_1(VAR_3, ("FMan-Controller code (ver %d.%d.%d) loaded to IRAM.",
               ((uint16_t *)VAR_7->firmware.p_Code)[2],
               ((uint8_t *)VAR_7->firmware.p_Code)[6],
               ((uint8_t *)VAR_7->firmware.p_Code)[7]));

    return VAR_0;
}

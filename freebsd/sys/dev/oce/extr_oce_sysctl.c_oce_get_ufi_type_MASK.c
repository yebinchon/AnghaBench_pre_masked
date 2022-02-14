
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct flash_file_hdr {char* build; int asic_type_rev; } ;
struct TYPE_6__ {int dev; } ;
typedef TYPE_1__* POCE_SOFTC ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int FUNC_4(POCE_SOFTC VAR_5,
                           const struct flash_file_hdr *VAR_6)
{
        if (VAR_6 == ((void*)0))
                goto be_get_ufi_exit;

        if (FUNC_2(VAR_5) && VAR_6->build[0] == '4') {
                if (VAR_6->asic_type_rev >= 0x10)
                        return VAR_4;
                else
                        return VAR_3;
        } else if (FUNC_1(VAR_5) && VAR_6->build[0] == '3') {
                if (VAR_6->asic_type_rev == 0x10)
                        return VAR_2;
                else
                        return VAR_1;
        } else if (FUNC_0(VAR_5) && VAR_6->build[0] == '2')
                return VAR_0;

be_get_ufi_exit:
        FUNC_3(VAR_5->dev,
                "UFI and Interface are not compatible for flashing\n");
        return -1;
}

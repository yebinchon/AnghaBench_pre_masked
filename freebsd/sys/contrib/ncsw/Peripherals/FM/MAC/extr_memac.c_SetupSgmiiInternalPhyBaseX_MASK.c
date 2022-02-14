
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_4__ {int enetMode; } ;
typedef TYPE_1__ t_Memac ;
typedef int e_EnetMode ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_3(t_Memac *VAR_5, uint8_t VAR_6)
{
    uint16_t VAR_7;
    e_EnetMode VAR_8;




    VAR_8 = VAR_5->enetMode;
    VAR_5->enetMode = FUNC_1(FUNC_0(VAR_5->enetMode), VAR_4);


    VAR_7 = VAR_3;
    FUNC_2(VAR_5, VAR_6, 0x14, VAR_7);


    VAR_7 = VAR_2;
    FUNC_2(VAR_5, VAR_6, 0x4, VAR_7);
    FUNC_2(VAR_5, VAR_6, 0x13, 0x002f);
    FUNC_2(VAR_5, VAR_6, 0x12, 0xaf08);


    VAR_7 = VAR_0 | VAR_1;
    FUNC_2(VAR_5, VAR_6, 0x0, VAR_7);


    VAR_5->enetMode = VAR_8;
}

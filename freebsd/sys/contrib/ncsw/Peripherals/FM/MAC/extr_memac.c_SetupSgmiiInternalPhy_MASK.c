
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_4__ {scalar_t__ enetMode; } ;
typedef TYPE_1__ t_Memac ;
typedef scalar_t__ e_EnetMode ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_3(t_Memac *VAR_9, uint8_t VAR_10)
{
    uint16_t VAR_11;
    e_EnetMode VAR_12;




    VAR_12 = VAR_9->enetMode;


    VAR_11 = VAR_4 | VAR_5;
    if ((VAR_9->enetMode) == VAR_7)
        VAR_11 = VAR_1 | VAR_6 | VAR_5;

    VAR_9->enetMode = FUNC_1(FUNC_0(VAR_9->enetMode), VAR_8);
    FUNC_2(VAR_9, VAR_10, 0x14, VAR_11);


    VAR_11 = VAR_3;
    FUNC_2(VAR_9, VAR_10, 0x4, VAR_11);
    FUNC_2(VAR_9, VAR_10, 0x13, 0x0007);
    FUNC_2(VAR_9, VAR_10, 0x12, 0xa120);


    VAR_11 = VAR_0 | VAR_2;
    FUNC_2(VAR_9, VAR_10, 0x0, VAR_11);


    VAR_9->enetMode = VAR_12;
}

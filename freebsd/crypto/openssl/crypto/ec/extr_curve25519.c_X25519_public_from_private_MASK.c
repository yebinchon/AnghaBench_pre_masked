
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int Y; int Z; } ;
typedef TYPE_1__ ge_p3 ;
typedef int fe ;
typedef int e ;


 int FUNC_0 (int*,int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int*,int ) ;
 int FUNC_6 (TYPE_1__*,int*) ;
 int FUNC_7 (int*,int const*,int) ;

void FUNC_8(uint8_t VAR_0[32],
                                const uint8_t VAR_1[32])
{
    uint8_t VAR_2[32];
    ge_p3 VAR_3;
    fe VAR_4, VAR_5, VAR_6;

    FUNC_7(VAR_2, VAR_1, 32);
    VAR_2[0] &= 248;
    VAR_2[31] &= 127;
    VAR_2[31] |= 64;

    FUNC_6(&VAR_3, VAR_2);






    FUNC_1(VAR_4, VAR_3.Z, VAR_3.Y);
    FUNC_4(VAR_5, VAR_3.Z, VAR_3.Y);
    FUNC_2(VAR_6, VAR_5);
    FUNC_3(VAR_4, VAR_4, VAR_6);
    FUNC_5(VAR_0, VAR_4);

    FUNC_0(VAR_2, sizeof(VAR_2));
}

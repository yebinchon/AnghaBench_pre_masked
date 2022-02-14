
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int Y; int X; int Z; } ;
typedef TYPE_1__ ge_p2 ;
typedef int fe ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int*,int ) ;

__attribute__((used)) static void FUNC_4(uint8_t *VAR_0, const ge_p2 *VAR_1)
{
    fe VAR_2;
    fe VAR_3;
    fe VAR_4;

    FUNC_0(VAR_2, VAR_1->Z);
    FUNC_2(VAR_3, VAR_1->X, VAR_2);
    FUNC_2(VAR_4, VAR_1->Y, VAR_2);
    FUNC_3(VAR_0, VAR_4);
    VAR_0[31] ^= FUNC_1(VAR_3) << 7;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int HAL_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static HAL_BOOL
FUNC_1(int VAR_2, u_int8_t VAR_3)
{
    switch (VAR_2) {
    case 0:
        return VAR_1;

    case 1:
        if ((VAR_3 < 0x80) || (VAR_3 > 0x87)) {
            return VAR_1;
        } else {
            return VAR_0;
        }

    case 2:
        if ((VAR_3 < 0x80) || (VAR_3 > 0x87)) {
            return VAR_1;
        } else {
            return VAR_0;
        }

    default:
        FUNC_0(0);
        break;
    }

    return VAR_1;
}

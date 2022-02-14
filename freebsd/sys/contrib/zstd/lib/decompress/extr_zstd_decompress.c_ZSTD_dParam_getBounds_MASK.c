
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ZSTD_dParameter ;
struct TYPE_3__ {int lowerBound; int upperBound; int error; int member_2; int member_1; int member_0; } ;
typedef TYPE_1__ ZSTD_bounds ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;


 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

ZSTD_bounds FUNC_2(ZSTD_dParameter VAR_5)
{
    ZSTD_bounds VAR_6 = { 0, 0, 0 };
    switch(VAR_5) {
        case 128:
            VAR_6.lowerBound = VAR_0;
            VAR_6.upperBound = VAR_1;
            return VAR_6;
        case 129:
            VAR_6.lowerBound = (int)VAR_2;
            VAR_6.upperBound = (int)VAR_3;
            FUNC_1(VAR_2 < VAR_3);
            return VAR_6;
        default:;
    }
    VAR_6.error = FUNC_0(VAR_4);
    return VAR_6;
}

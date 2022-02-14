
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ZSTD_cParameter ;
struct TYPE_3__ {size_t error; int lowerBound; int upperBound; } ;
typedef TYPE_1__ ZSTD_bounds ;


 TYPE_1__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (size_t) ;

__attribute__((used)) static size_t FUNC_2(ZSTD_cParameter VAR_0, int* VAR_1)
{
    ZSTD_bounds const VAR_2 = FUNC_0(VAR_0);
    if (FUNC_1(VAR_2.error)) return VAR_2.error;
    if (*VAR_1 < VAR_2.lowerBound) *VAR_1 = VAR_2.lowerBound;
    if (*VAR_1 > VAR_2.upperBound) *VAR_1 = VAR_2.upperBound;
    return 0;
}

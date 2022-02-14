
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;


 scalar_t__ const VAR_0 ;
 scalar_t__ const VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ const VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ const VAR_6 ;
 unsigned int VAR_7 ;

__attribute__((used)) static uint32_t
FUNC_0(const uint32_t *VAR_8, size_t VAR_9)
{
    if (VAR_9 < 2)
 return 0;
    if (VAR_8[0] >= VAR_0 && VAR_8[0] < VAR_0 + VAR_1) {
 unsigned VAR_10 = VAR_8[0] - VAR_0;
 unsigned VAR_11;

 if (VAR_8[1] < VAR_6 || VAR_8[1] >= VAR_6 + VAR_7)
     return 0;
 VAR_11 = VAR_8[1] - VAR_6;
 return (VAR_10 * VAR_7 + VAR_11) * VAR_5 + VAR_2;
    } else if (VAR_8[0] >= VAR_2 && VAR_8[0] < VAR_2 + VAR_3) {
 unsigned VAR_12 = VAR_8[0] - VAR_2;
 unsigned VAR_13;

 if (VAR_12 % VAR_5 != 0)
     return 0;
 if (VAR_8[1] < VAR_4 || VAR_8[1] >= VAR_4 + VAR_5)
     return 0;
 VAR_13 = VAR_8[1] - VAR_4;
 return VAR_8[0] + VAR_13;
    }
    return 0;
}

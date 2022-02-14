
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;

__attribute__((used)) static int
FUNC_0(const uint32_t *VAR_8, size_t VAR_9,
       uint32_t *VAR_10, size_t *VAR_11)
{
    uint32_t VAR_12 = *VAR_8;
    unsigned VAR_13;
    unsigned VAR_14, VAR_15, VAR_16;
    unsigned VAR_17;

    if (VAR_12 < VAR_3 || VAR_12 >= VAR_3 + VAR_4)
 return 0;
    VAR_13 = VAR_12 - VAR_3;
    VAR_14 = VAR_1 + VAR_13 / VAR_2;
    VAR_15 = VAR_7 + (VAR_13 % VAR_2) / VAR_6;
    VAR_16 = VAR_5 + VAR_13 % VAR_6;
    VAR_17 = 2;
    if (VAR_16 != VAR_5)
 ++VAR_17;
    if (*VAR_11 < VAR_17)
 return VAR_0;
    VAR_10[0] = VAR_14;
    VAR_10[1] = VAR_15;
    if (VAR_16 != VAR_5)
 VAR_10[2] = VAR_16;
    *VAR_11 = VAR_17;
    return 1;
}

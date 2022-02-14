
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int8_t ;
typedef size_t u_int32_t ;


 size_t VAR_0 ;
 size_t* VAR_1 ;

__attribute__((used)) static u_int8_t
FUNC_0(u_int32_t VAR_2)
{
    u_int32_t VAR_3;

    for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
 if (VAR_2 == VAR_1[VAR_3]) return VAR_3;
    }

    VAR_3 = 1536000 / VAR_2;
    if (VAR_3 > 255 || VAR_3 < 32) VAR_3 = 5;
    return VAR_3;
}

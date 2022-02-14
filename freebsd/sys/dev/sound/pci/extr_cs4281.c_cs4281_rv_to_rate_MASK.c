
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int8_t ;
typedef int u_int32_t ;


 size_t VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static u_int32_t
FUNC_0(u_int8_t VAR_2)
{
    u_int32_t VAR_3;

    if (VAR_2 < VAR_0) return VAR_1[VAR_2];
    VAR_3 = 1536000 / VAR_2;
    return VAR_3;
}

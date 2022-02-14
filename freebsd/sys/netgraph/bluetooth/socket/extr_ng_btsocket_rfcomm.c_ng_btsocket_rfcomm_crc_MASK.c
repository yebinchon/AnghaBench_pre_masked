
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int8_t ;


 size_t* VAR_0 ;

__attribute__((used)) static u_int8_t
FUNC_0(u_int8_t *VAR_1, int VAR_2)
{
 u_int8_t VAR_3 = 0xff;

 while (VAR_2 --)
  VAR_3 = VAR_0[VAR_3 ^ *VAR_1++];

 return (VAR_3);
}

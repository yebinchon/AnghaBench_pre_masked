
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;


 int FUNC_0 (char*,int) ;
 int* VAR_0 ;

void
FUNC_1(u_int8_t VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_0[VAR_2]; ++VAR_2)
  if (VAR_1 & (1 << VAR_2))
   FUNC_0("%c", VAR_0[VAR_2]);
}

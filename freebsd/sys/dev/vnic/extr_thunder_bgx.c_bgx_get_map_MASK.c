
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;


 int VAR_0 ;
 scalar_t__* VAR_1 ;

u_int
FUNC_0(int VAR_2)
{
 int VAR_3;
 u_int VAR_4 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_1[(VAR_2 * VAR_0) + VAR_3])
   VAR_4 |= (1 << VAR_3);
 }

 return (VAR_4);
}

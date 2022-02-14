
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int,float) ;
 int FUNC_1 (float,int) ;
 float FUNC_2 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static float
FUNC_3(float VAR_2, int *VAR_3)
{
 float VAR_4;
 uint32_t VAR_5;

 VAR_4 = FUNC_2(VAR_2 - VAR_1);
 FUNC_0(VAR_5, VAR_4);
 *VAR_3 = (VAR_5 >> 23) - (0x7f + 127) + VAR_0;
 FUNC_1(VAR_4, (VAR_5 & 0x7fffff) | ((0x7f + 127) << 23));
 return (VAR_4);
}

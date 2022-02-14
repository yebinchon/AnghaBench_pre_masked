
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int,double) ;
 int FUNC_1 (double,int) ;
 double FUNC_2 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static double
FUNC_3(double VAR_2, int *VAR_3)
{
 double VAR_4;
 uint32_t VAR_5;







 VAR_4 = FUNC_2(VAR_2 - VAR_1);
 FUNC_0(VAR_5, VAR_4);
 *VAR_3 = (VAR_5 >> 20) - (0x3ff + 1023) + VAR_0;
 FUNC_1(VAR_4, (VAR_5 & 0xfffff) | ((0x3ff + 1023) << 20));
 return (VAR_4);
}

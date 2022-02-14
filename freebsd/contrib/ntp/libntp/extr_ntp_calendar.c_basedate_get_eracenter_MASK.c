
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;

time_t
FUNC_1(void)
{
 time_t VAR_3;
 VAR_3 = (time_t)(VAR_2 - VAR_0);
 VAR_3 *= VAR_1;
 VAR_3 += (FUNC_0(1) << 31);
 return VAR_3;
}

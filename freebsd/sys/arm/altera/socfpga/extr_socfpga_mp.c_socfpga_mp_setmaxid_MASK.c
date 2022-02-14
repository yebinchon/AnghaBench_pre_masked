
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int platform_t ;


 int FUNC_0 (char*,int*) ;
 int VAR_0 ;
 int VAR_1 ;

void
FUNC_1(platform_t VAR_2)
{
 int VAR_3, VAR_4;


 if (VAR_1 != 0)
  return;

 VAR_3 = 2;

 VAR_4 = VAR_3;
 FUNC_0("hw.ncpu", &VAR_4);
 if (VAR_4 < 1 || VAR_4 > VAR_3)
  VAR_4 = VAR_3;

 VAR_1 = VAR_4;
 VAR_0 = VAR_4 - 1;
}

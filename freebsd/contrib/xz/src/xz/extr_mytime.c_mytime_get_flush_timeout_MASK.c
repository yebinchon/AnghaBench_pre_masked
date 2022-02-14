
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;


 scalar_t__ const VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ const VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

extern int
FUNC_1(void)
{
 if (VAR_3 == 0 || VAR_4 != VAR_1)
  return -1;

 const uint64_t VAR_5 = FUNC_0();
 if (VAR_5 >= VAR_2)
  return 0;

 const uint64_t VAR_6 = VAR_2 - VAR_5;
 return VAR_6 > VAR_0 ? VAR_0 : (int)VAR_6;
}

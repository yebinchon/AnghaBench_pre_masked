
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

int FUNC_4(u32 VAR_5)
{
 u32 VAR_6 = FUNC_2(VAR_5);
 u32 VAR_7 = FUNC_1(VAR_5);
 u32 VAR_8 = FUNC_3(VAR_5);
 u32 VAR_9 = VAR_2;

 if (FUNC_0(VAR_5))
  VAR_9 = VAR_0 + VAR_3;
 if (VAR_6 > VAR_9)
  return 0;
 if (VAR_7 > VAR_1)
  return 0;
 if (VAR_8 > VAR_4)
  return 0;

 if (VAR_6 && (!VAR_8 || !VAR_7))
  return 0;
 if (VAR_7 && !VAR_8)
  return 0;
 return 1;
}

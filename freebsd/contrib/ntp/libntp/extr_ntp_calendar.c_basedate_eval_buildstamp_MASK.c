
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct calendar {int monthday; } ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct calendar*) ;
 int FUNC_1 (struct calendar*) ;

int32_t
FUNC_2(void)
{
 struct calendar VAR_2;
 int32_t VAR_3;

 if (!FUNC_1(&VAR_2))
  return VAR_1;
 VAR_2.monthday -= 1;
 VAR_3 = FUNC_0(&VAR_2) - VAR_0;
 return (VAR_3 < VAR_1) ? VAR_1 : VAR_3;
}

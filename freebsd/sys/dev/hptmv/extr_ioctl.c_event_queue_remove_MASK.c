
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * PHPT_EVENT ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int * VAR_3 ;

__attribute__((used)) static int
FUNC_0(PHPT_EVENT VAR_4)
{
 if (VAR_1 != VAR_2)
 {
  *VAR_4 = VAR_3[VAR_1];
  VAR_1++;
  VAR_1 %= VAR_0;
  return 0;
 }
 return -1;
}

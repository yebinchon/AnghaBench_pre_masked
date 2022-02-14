
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int line_t ;


 size_t VAR_0 ;
 int ** VAR_1 ;
 size_t VAR_2 ;

line_t *
FUNC_0(void)
{
 while (VAR_2 < VAR_0 && VAR_1[VAR_2] == ((void*)0))
  VAR_2++;
 return (VAR_2 < VAR_0) ? VAR_1[VAR_2++] : ((void*)0);
}

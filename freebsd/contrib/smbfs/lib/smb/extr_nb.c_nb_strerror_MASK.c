
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char const** VAR_3 ;
 char const** VAR_4 ;

const char *
FUNC_0(int VAR_5)
{
 if (VAR_5 == 0)
  return ((void*)0);
 if (VAR_5 <= VAR_0)
  return VAR_4[VAR_5 - 1];
 else if (VAR_5 >= VAR_1 && VAR_5 < VAR_2)
  return VAR_3[VAR_5 - VAR_1];
 else
  return ((void*)0);
}

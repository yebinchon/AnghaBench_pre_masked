
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char const** VAR_2 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int VAR_3 ;
 char const** VAR_4 ;

const char *
FUNC_1 (int VAR_5)
{
  if (FUNC_0 (VAR_1, VAR_5))
    return VAR_2[VAR_5 - VAR_0];

  if (VAR_5 >= 0 && VAR_5 < VAR_3)
    return VAR_4[VAR_5];

  return ((void*)0);
}

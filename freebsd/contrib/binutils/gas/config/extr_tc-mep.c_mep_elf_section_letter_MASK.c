
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (char*) ;

int
FUNC_1 (int VAR_1, char **VAR_2)
{
  if (VAR_1 == 'v')
    return VAR_0;

  *VAR_2 = FUNC_0("Bad .section directive: want a,v,w,x,M,S in string");
  return 0;
}

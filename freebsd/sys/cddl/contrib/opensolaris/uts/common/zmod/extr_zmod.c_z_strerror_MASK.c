
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char const* FUNC_0 (int) ;

const char *
FUNC_1(int VAR_2)
{
 int VAR_3 = VAR_0 - VAR_2;

 if (VAR_3 < 0 || VAR_3 > VAR_0 - VAR_1)
  return ("unknown error");

 return (FUNC_0(VAR_2));
}

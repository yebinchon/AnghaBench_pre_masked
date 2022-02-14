
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int regnames ;


 int VAR_0 ;

__attribute__((used)) static const char *
FUNC_0 (int VAR_1)
{

  static char *VAR_2[] =
  {
    "D0", "D1", "D2", "D3", "D4", "D5", "D6", "D7",
    "A0", "A1", "A2", "A3", "A4", "A5", "A6", "A7",
    "SR", "PC",
  };


  if ((VAR_1 >= (sizeof (VAR_2) / sizeof (VAR_2[0])))
       || (VAR_1 < 0) || (VAR_1 >= VAR_0))
    return ((void*)0);
  else
    return VAR_2[VAR_1];
}

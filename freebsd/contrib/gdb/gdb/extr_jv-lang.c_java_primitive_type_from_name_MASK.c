
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;


 struct type* VAR_0 ;
 struct type* VAR_1 ;
 struct type* VAR_2 ;
 struct type* VAR_3 ;
 struct type* VAR_4 ;
 struct type* VAR_5 ;
 struct type* VAR_6 ;
 struct type* VAR_7 ;
 struct type* VAR_8 ;
 int FUNC_0 (char*,char*,int) ;

struct type *
FUNC_1 (char *VAR_9, int VAR_10)
{
  switch (VAR_9[0])
    {
    case 'b':
      if (VAR_10 == 4 && FUNC_0 (VAR_9, "byte", 4) == 0)
 return VAR_1;
      if (VAR_10 == 7 && FUNC_0 (VAR_9, "boolean", 7) == 0)
 return VAR_0;
      break;
    case 'c':
      if (VAR_10 == 4 && FUNC_0 (VAR_9, "char", 4) == 0)
 return VAR_2;
    case 'd':
      if (VAR_10 == 6 && FUNC_0 (VAR_9, "double", 6) == 0)
 return VAR_3;
      break;
    case 'f':
      if (VAR_10 == 5 && FUNC_0 (VAR_9, "float", 5) == 0)
 return VAR_4;
      break;
    case 'i':
      if (VAR_10 == 3 && FUNC_0 (VAR_9, "int", 3) == 0)
 return VAR_5;
      break;
    case 'l':
      if (VAR_10 == 4 && FUNC_0 (VAR_9, "long", 4) == 0)
 return VAR_6;
      break;
    case 's':
      if (VAR_10 == 5 && FUNC_0 (VAR_9, "short", 5) == 0)
 return VAR_7;
      break;
    case 'v':
      if (VAR_10 == 4 && FUNC_0 (VAR_9, "void", 4) == 0)
 return VAR_8;
      break;
    }
  return ((void*)0);
}

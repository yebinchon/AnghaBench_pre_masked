
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;


 int FUNC_0 (char*,char) ;
 struct type* VAR_0 ;
 struct type* VAR_1 ;
 struct type* VAR_2 ;
 struct type* VAR_3 ;
 struct type* VAR_4 ;
 struct type* VAR_5 ;
 struct type* VAR_6 ;
 struct type* VAR_7 ;
 struct type* VAR_8 ;

struct type *
FUNC_1 (int VAR_9)
{
  switch (VAR_9)
    {
    case 'B':
      return VAR_1;
    case 'S':
      return VAR_7;
    case 'I':
      return VAR_5;
    case 'J':
      return VAR_6;
    case 'Z':
      return VAR_0;
    case 'C':
      return VAR_2;
    case 'F':
      return VAR_4;
    case 'D':
      return VAR_3;
    case 'V':
      return VAR_8;
    }
  FUNC_0 ("unknown signature '%c' for primitive type", (char) VAR_9);
}

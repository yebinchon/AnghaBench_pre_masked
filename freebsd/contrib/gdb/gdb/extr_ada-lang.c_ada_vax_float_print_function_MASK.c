
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct type {int dummy; } ;


 int FUNC_0 (struct type*) ;
 int FUNC_1 (char*) ;
 struct value* FUNC_2 (char*,int ) ;

struct value *
FUNC_3 (struct type *VAR_0)
{
  switch (FUNC_0 (VAR_0))
    {
    case 'F':
      return FUNC_2 ("DEBUG_STRING_F", 0);
    case 'D':
      return FUNC_2 ("DEBUG_STRING_D", 0);
    case 'G':
      return FUNC_2 ("DEBUG_STRING_G", 0);
    default:
      FUNC_1 ("invalid VAX floating-point type");
    }
}

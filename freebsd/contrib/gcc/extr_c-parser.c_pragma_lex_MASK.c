
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tree ;
typedef enum cpp_ttype { ____Placeholder_cpp_ttype } cpp_ttype ;
struct TYPE_3__ {int type; int value; } ;
typedef TYPE_1__ c_token ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ) ;
 int VAR_4 ;

enum cpp_ttype
FUNC_2 (tree *VAR_5)
{
  c_token *VAR_6 = FUNC_1 (VAR_4);
  enum cpp_ttype VAR_7 = VAR_6->type;

  *VAR_5 = VAR_6->value;
  if (VAR_7 == VAR_3 || VAR_7 == VAR_0)
    VAR_7 = VAR_0;
  else
    {
      if (VAR_7 == VAR_1)
 VAR_7 = VAR_2;
      FUNC_0 (VAR_4);
    }

  return VAR_7;
}

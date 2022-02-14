
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int tree ;
typedef enum cpp_ttype { ____Placeholder_cpp_ttype } cpp_ttype ;
struct TYPE_6__ {int value; } ;
struct TYPE_7__ {int type; TYPE_1__ u; } ;
typedef TYPE_2__ cp_token ;
struct TYPE_8__ {int lexer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*,int,int) ;
 TYPE_3__* VAR_5 ;

enum cpp_ttype
FUNC_3 (tree *VAR_6)
{
  cp_token *VAR_7;
  enum cpp_ttype VAR_8;

  VAR_7 = FUNC_1 (VAR_5->lexer);

  VAR_8 = VAR_7->type;
  *VAR_6 = VAR_7->u.value;

  if (VAR_8 == VAR_3 || VAR_8 == VAR_0)
    VAR_8 = VAR_0;
  else if (VAR_8 == VAR_4)
    *VAR_6 = FUNC_2 (VAR_5, 0, 0);
  else
    {
      FUNC_0 (VAR_5->lexer);
      if (VAR_8 == VAR_1)
 VAR_8 = VAR_2;
    }

  return VAR_8;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int tree ;
typedef int cp_parameter_declarator ;
struct TYPE_7__ {int exception_specification; int qualifiers; int * parameters; } ;
struct TYPE_8__ {TYPE_1__ function; } ;
struct TYPE_9__ {TYPE_2__ u; struct TYPE_9__* declarator; } ;
typedef TYPE_3__ cp_declarator ;
typedef int cp_cv_quals ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int ) ;

cp_declarator *
FUNC_1 (cp_declarator *VAR_1,
        cp_parameter_declarator *VAR_2,
        cp_cv_quals VAR_3,
        tree VAR_4)
{
  cp_declarator *VAR_5;

  VAR_5 = FUNC_0 (VAR_0);
  VAR_5->declarator = VAR_1;
  VAR_5->u.function.parameters = VAR_2;
  VAR_5->u.function.qualifiers = VAR_3;
  VAR_5->u.function.exception_specification = VAR_4;

  return VAR_5;
}

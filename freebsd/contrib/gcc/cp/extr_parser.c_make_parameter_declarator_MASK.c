
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tree ;
struct TYPE_3__ {int ellipsis_p; int default_argument; int * declarator; int decl_specifiers; int * next; } ;
typedef TYPE_1__ cp_parameter_declarator ;
typedef int cp_declarator ;
typedef int cp_decl_specifier_seq ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;

cp_parameter_declarator *
FUNC_2 (cp_decl_specifier_seq *VAR_0,
      cp_declarator *VAR_1,
      tree VAR_2)
{
  cp_parameter_declarator *VAR_3;

  VAR_3 = ((cp_parameter_declarator *)
        FUNC_0 (sizeof (cp_parameter_declarator)));
  VAR_3->next = ((void*)0);
  if (VAR_0)
    VAR_3->decl_specifiers = *VAR_0;
  else
    FUNC_1 (&VAR_3->decl_specifiers);
  VAR_3->declarator = VAR_1;
  VAR_3->default_argument = VAR_2;
  VAR_3->ellipsis_p = 0;

  return VAR_3;
}

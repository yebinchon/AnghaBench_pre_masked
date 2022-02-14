
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tree ;
struct TYPE_3__ {scalar_t__ kind; struct TYPE_3__* declarator; } ;
typedef TYPE_1__ cp_declarator ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static void
FUNC_2 (cp_declarator *VAR_4,
            tree VAR_5)
{



  while (VAR_4
  && (VAR_4->kind == VAR_1
      || VAR_4->kind == VAR_3
      || VAR_4->kind == VAR_2))
    VAR_4 = VAR_4->declarator;
  if (VAR_4
      && VAR_4->kind == VAR_0)
    {
      FUNC_0 ("new types may not be defined in a return type");
      FUNC_1 ("(perhaps a semicolon is missing after the definition of %qT)",
       VAR_5);
    }
}

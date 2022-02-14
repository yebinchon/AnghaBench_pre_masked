
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_10__ {scalar_t__ keyword; scalar_t__ type; } ;
typedef TYPE_1__ cp_token ;
struct TYPE_11__ {int lexer; } ;
typedef TYPE_2__ cp_parser ;
struct TYPE_12__ {int default_argument; int decl_specifiers; int declarator; } ;
typedef TYPE_3__ cp_parameter_declarator ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 TYPE_1__* FUNC_1 (int ,int) ;
 TYPE_1__* FUNC_2 (int ) ;
 TYPE_3__* FUNC_3 (TYPE_2__*,int,int *) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_5 (int ,int *,int ,int ,int *) ;

__attribute__((used)) static tree
FUNC_6 (cp_parser* VAR_9, bool *VAR_10)
{
  cp_token *VAR_11;
  cp_parameter_declarator *VAR_12;
  tree VAR_13;


  *VAR_10 = 0;

  VAR_11 = FUNC_2 (VAR_9->lexer);

  if (VAR_11->keyword == VAR_6)
    return FUNC_4 (VAR_9);
  if (VAR_11->keyword == VAR_7 || VAR_11->keyword == VAR_5)
    {

      VAR_11 = FUNC_1 (VAR_9->lexer, 2);

      if (VAR_11->type == VAR_3)
 VAR_11 = FUNC_1 (VAR_9->lexer, 3);


      if (VAR_11->type == VAR_0
   || VAR_11->type == VAR_1
   || VAR_11->type == VAR_2)
 return FUNC_4 (VAR_9);
    }
  *VAR_10 = 1;
  VAR_12
     = FUNC_3 (VAR_9, 1,
                         ((void*)0));
  VAR_13 = FUNC_5 (VAR_12->declarator,
    &VAR_12->decl_specifiers,
    VAR_4, 0,
                 ((void*)0));
  if (VAR_13 == VAR_8)
    return VAR_8;
  return FUNC_0 (VAR_12->default_argument, VAR_13);
}

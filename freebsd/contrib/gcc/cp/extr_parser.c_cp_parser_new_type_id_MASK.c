
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int tree ;
struct TYPE_12__ {char* type_definition_forbidden_message; } ;
typedef TYPE_3__ cp_parser ;
struct TYPE_10__ {int bounds; } ;
struct TYPE_11__ {TYPE_1__ array; } ;
struct TYPE_13__ {scalar_t__ kind; struct TYPE_13__* declarator; TYPE_2__ u; } ;
typedef TYPE_4__ cp_declarator ;
typedef int cp_decl_specifier_seq ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_4__* FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int,int *) ;
 int VAR_5 ;
 int FUNC_5 (int *,TYPE_4__*) ;
 int VAR_6 ;

__attribute__((used)) static tree
FUNC_6 (cp_parser* VAR_7, tree *VAR_8)
{
  cp_decl_specifier_seq VAR_9;
  cp_declarator *VAR_10;
  cp_declarator *VAR_11;
  cp_declarator *VAR_12;
  const char *VAR_13;
  tree VAR_14;





  VAR_13 = VAR_7->type_definition_forbidden_message;
  VAR_7->type_definition_forbidden_message
    = "types may not be defined in a new-type-id";

  FUNC_4 (VAR_7, 0,
    &VAR_9);

  VAR_7->type_definition_forbidden_message = VAR_13;

  VAR_10 = FUNC_3 (VAR_7);



  *VAR_8 = VAR_1;

  VAR_11 = VAR_10;
  VAR_12 = ((void*)0);
  while (VAR_11 && (VAR_11->kind == VAR_3
   || VAR_11->kind == VAR_4))
    {
      VAR_12 = VAR_11;
      VAR_11 = VAR_11->declarator;
    }
  while (VAR_11
  && VAR_11->kind == VAR_2
  && VAR_11->declarator
  && VAR_11->declarator->kind == VAR_2)
    {
      VAR_12 = VAR_11;
      VAR_11 = VAR_11->declarator;
    }

  if (VAR_11 && VAR_11->kind == VAR_2)
    {
      *VAR_8 = VAR_11->u.array.bounds;
      if (*VAR_8 == VAR_5)
 *VAR_8 = VAR_6;

      if (VAR_12)
 VAR_12->declarator = VAR_11->declarator;
      else
 VAR_10 = ((void*)0);
    }

  VAR_14 = FUNC_5 (&VAR_9, VAR_10);
  if (FUNC_0 (VAR_14) == VAR_0 && *VAR_8 == VAR_1)
    {
      *VAR_8 = FUNC_2 (VAR_14);
      VAR_14 = FUNC_1 (VAR_14);
    }
  return VAR_14;
}

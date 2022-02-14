
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_6__ {scalar_t__ type; } ;
typedef TYPE_1__ cp_token ;
struct TYPE_7__ {int lexer; } ;
typedef TYPE_2__ cp_parser ;
typedef int cp_declarator ;
typedef int cp_decl_specifier_seq ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_2__*,int ,int *,int*) ;
 int * FUNC_4 (TYPE_2__*,int ,int *,int *,int) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_5 (int *,int *,int ,int ,int *) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7 (cp_parser *VAR_8)
{
  int VAR_9;
  cp_decl_specifier_seq VAR_10;

  FUNC_3 (VAR_8,
        VAR_4,
        &VAR_10,
        &VAR_9);

  while (FUNC_2 (VAR_8->lexer, VAR_2))
    {
      tree VAR_11;
      cp_token *VAR_12;
      cp_declarator *VAR_13
      = FUNC_4 (VAR_8, VAR_3,
      ((void*)0), ((void*)0), 0);
      VAR_11 = FUNC_5 (VAR_13, &VAR_10, VAR_5,0, ((void*)0));

      if (VAR_11 == VAR_7 || VAR_11 == VAR_6)
 return;

      FUNC_6 (FUNC_0 (VAR_11));
      if (VAR_12->type == VAR_0)
      {
 FUNC_1 (VAR_8->lexer);
 continue;
      }
      else if (VAR_12->type == VAR_1)
 return;
    }
    FUNC_1 (VAR_8->lexer);
}

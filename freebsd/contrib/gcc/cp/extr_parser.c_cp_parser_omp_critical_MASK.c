
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int * tree ;
typedef int cp_token ;
struct TYPE_8__ {int lexer; } ;
typedef TYPE_1__ cp_parser ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int * FUNC_3 (TYPE_1__*) ;
 int * FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int ,char*) ;
 int FUNC_6 (TYPE_1__*,int *) ;
 int FUNC_7 (TYPE_1__*,int,int,int) ;
 int * VAR_2 ;

__attribute__((used)) static tree
FUNC_8 (cp_parser *VAR_3, cp_token *VAR_4)
{
  tree VAR_5, VAR_6 = ((void*)0);

  if (FUNC_2 (VAR_3->lexer, VAR_1))
    {
      FUNC_1 (VAR_3->lexer);

      VAR_6 = FUNC_3 (VAR_3);

      if (VAR_6 == VAR_2
   || !FUNC_5 (VAR_3, VAR_0, "`)'"))
 FUNC_7 (VAR_3, 1,
                         0,
                              1);
      if (VAR_6 == VAR_2)
 VAR_6 = ((void*)0);
    }
  FUNC_6 (VAR_3, VAR_4);

  VAR_5 = FUNC_4 (VAR_3);
  return FUNC_0 (VAR_5, VAR_6);
}

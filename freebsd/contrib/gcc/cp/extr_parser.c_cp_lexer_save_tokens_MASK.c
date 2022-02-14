
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int next_token; int saved_tokens; } ;
typedef TYPE_1__ cp_lexer ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_2 (int ,char*) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_3 (cp_lexer* VAR_3)
{

  if (FUNC_1 (VAR_3))
    FUNC_2 (VAR_0, "cp_lexer: saving tokens\n");

  FUNC_0 (VAR_1, VAR_2,
   VAR_3->saved_tokens, VAR_3->next_token);
}

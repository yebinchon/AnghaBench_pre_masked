
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int saved_tokens; int next_token; } ;
typedef TYPE_1__ cp_lexer ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static void
FUNC_3 (cp_lexer* VAR_2)
{

  if (FUNC_1 (VAR_2))
    FUNC_2 (VAR_0, "cp_lexer: restoring tokens\n");

  VAR_2->next_token = FUNC_0 (VAR_1, VAR_2->saved_tokens);
}

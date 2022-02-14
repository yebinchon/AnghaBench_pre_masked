
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int cp_token_cache ;
struct TYPE_5__ {TYPE_2__* lexer; } ;
typedef TYPE_1__ cp_parser ;
struct TYPE_6__ {int next_token; struct TYPE_6__* next; } ;
typedef TYPE_2__ cp_lexer ;


 TYPE_2__* FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2 (cp_parser *VAR_0, cp_token_cache *VAR_1)
{
  cp_lexer *VAR_2 = FUNC_0 (VAR_1);
  VAR_2->next = VAR_0->lexer;
  VAR_0->lexer = VAR_2;



  FUNC_1 (VAR_2->next_token);
}

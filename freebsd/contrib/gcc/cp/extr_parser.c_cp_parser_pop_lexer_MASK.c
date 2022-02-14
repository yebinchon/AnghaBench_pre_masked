
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* lexer; } ;
typedef TYPE_1__ cp_parser ;
struct TYPE_6__ {int next_token; struct TYPE_6__* next; } ;
typedef TYPE_2__ cp_lexer ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2 (cp_parser *VAR_0)
{
  cp_lexer *VAR_1 = VAR_0->lexer;
  VAR_0->lexer = VAR_1->next;
  FUNC_0 (VAR_1);



  FUNC_1 (VAR_0->lexer->next_token);
}

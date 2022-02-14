
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ type; } ;
typedef TYPE_1__ cp_token ;
struct TYPE_10__ {TYPE_5__* lexer; } ;
typedef TYPE_2__ cp_parser ;
struct TYPE_11__ {int in_pragma; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_5__*,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2 (cp_parser* VAR_2, cp_token *VAR_3)
{
  cp_token *VAR_4;

  VAR_2->lexer->in_pragma = 0;

  do
    VAR_4 = FUNC_0 (VAR_2->lexer);
  while (VAR_4->type != VAR_1 && VAR_4->type != VAR_0);


  FUNC_1 (VAR_2->lexer, VAR_3);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ type; } ;
typedef TYPE_1__ c_token ;
struct TYPE_8__ {int tokens_avail; TYPE_1__* tokens; } ;
typedef TYPE_2__ c_parser ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static c_token *
FUNC_2 (c_parser *VAR_2)
{
  if (VAR_2->tokens_avail >= 2)
    return &VAR_2->tokens[1];
  FUNC_1 (VAR_2->tokens_avail == 1);
  FUNC_1 (VAR_2->tokens[0].type != VAR_0);
  FUNC_1 (VAR_2->tokens[0].type != VAR_1);

  VAR_2->tokens_avail = 2;

  FUNC_0 (&VAR_2->tokens[1], VAR_2);

  return &VAR_2->tokens[1];
}

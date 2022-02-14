
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int in_pragma; int tokens_avail; TYPE_1__* tokens; } ;
typedef TYPE_2__ c_parser ;
struct TYPE_4__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1 (c_parser *VAR_1)
{
  FUNC_0 (!VAR_1->in_pragma);
  FUNC_0 (VAR_1->tokens_avail >= 1);
  FUNC_0 (VAR_1->tokens[0].type == VAR_0);
  if (VAR_1->tokens_avail == 2)
    VAR_1->tokens[0] = VAR_1->tokens[1];
  VAR_1->tokens_avail--;
  VAR_1->in_pragma = 1;
}

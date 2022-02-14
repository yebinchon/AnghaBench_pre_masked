
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int tokens_avail; TYPE_1__* tokens; scalar_t__ error; int in_pragma; } ;
typedef TYPE_2__ c_parser ;
struct TYPE_4__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1 (c_parser *VAR_3)
{
  FUNC_0 (VAR_3->tokens_avail >= 1);
  FUNC_0 (VAR_3->tokens[0].type != VAR_0);
  FUNC_0 (!VAR_3->in_pragma || VAR_3->tokens[0].type != VAR_2);
  FUNC_0 (VAR_3->error || VAR_3->tokens[0].type != VAR_1);
  if (VAR_3->tokens_avail == 2)
    VAR_3->tokens[0] = VAR_3->tokens[1];
  VAR_3->tokens_avail--;
}

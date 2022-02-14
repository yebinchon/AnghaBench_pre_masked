
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int c_token ;
struct TYPE_4__ {int tokens_avail; int * tokens; } ;
typedef TYPE_1__ c_parser ;


 int FUNC_0 (int *,TYPE_1__*) ;

__attribute__((used)) static inline c_token *
FUNC_1 (c_parser *VAR_0)
{
  if (VAR_0->tokens_avail == 0)
    {

      VAR_0->tokens_avail = 1;

      FUNC_0 (&VAR_0->tokens[0], VAR_0);

    }
  return &VAR_0->tokens[0];
}

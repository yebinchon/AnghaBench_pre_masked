
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ssh {TYPE_1__* state; } ;
struct TYPE_2__ {int output; scalar_t__ interactive_mode; } ;


 int FUNC_0 (int ) ;

int
FUNC_1(struct ssh *VAR_0)
{
 if (VAR_0->state->interactive_mode)
  return FUNC_0(VAR_0->state->output) < 16384;
 else
  return FUNC_0(VAR_0->state->output) < 128 * 1024;
}

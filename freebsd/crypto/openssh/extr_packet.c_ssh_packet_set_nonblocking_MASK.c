
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ssh {TYPE_1__* state; } ;
struct TYPE_2__ {scalar_t__ connection_in; scalar_t__ connection_out; } ;


 int FUNC_0 (scalar_t__) ;

void
FUNC_1(struct ssh *VAR_0)
{

 FUNC_0(VAR_0->state->connection_in);

 if (VAR_0->state->connection_out != VAR_0->state->connection_in)
  FUNC_0(VAR_0->state->connection_out);
}

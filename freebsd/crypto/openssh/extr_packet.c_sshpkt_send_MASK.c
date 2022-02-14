
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ssh {TYPE_1__* state; } ;
struct TYPE_2__ {scalar_t__ mux; } ;


 int FUNC_0 (struct ssh*) ;
 int FUNC_1 (struct ssh*) ;

int
FUNC_2(struct ssh *VAR_0)
{
 if (VAR_0->state && VAR_0->state->mux)
  return FUNC_1(VAR_0);
 return FUNC_0(VAR_0);
}

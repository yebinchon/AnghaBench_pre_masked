
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ssh {TYPE_1__* state; } ;
struct TYPE_2__ {int incoming_packet; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

int
FUNC_1(struct ssh *VAR_1)
{
 if (FUNC_0(VAR_1->state->incoming_packet) > 0)
  return VAR_0;
 return 0;
}

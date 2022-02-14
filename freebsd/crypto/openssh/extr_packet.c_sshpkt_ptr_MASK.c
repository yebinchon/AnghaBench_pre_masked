
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct ssh {TYPE_1__* state; } ;
struct TYPE_2__ {int incoming_packet; } ;


 size_t FUNC_0 (int ) ;
 int const* FUNC_1 (int ) ;

const u_char *
FUNC_2(struct ssh *VAR_0, size_t *VAR_1)
{
 if (VAR_1 != ((void*)0))
  *VAR_1 = FUNC_0(VAR_0->state->incoming_packet);
 return FUNC_1(VAR_0->state->incoming_packet);
}

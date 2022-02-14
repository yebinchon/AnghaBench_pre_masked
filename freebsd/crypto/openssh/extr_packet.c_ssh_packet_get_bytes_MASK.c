
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int64_t ;
struct ssh {TYPE_3__* state; } ;
struct TYPE_5__ {int bytes; } ;
struct TYPE_4__ {int bytes; } ;
struct TYPE_6__ {TYPE_2__ p_send; TYPE_1__ p_read; } ;



void
FUNC_0(struct ssh *VAR_0, u_int64_t *VAR_1, u_int64_t *VAR_2)
{
 if (VAR_1)
  *VAR_1 = VAR_0->state->p_read.bytes;
 if (VAR_2)
  *VAR_2 = VAR_0->state->p_send.bytes;
}

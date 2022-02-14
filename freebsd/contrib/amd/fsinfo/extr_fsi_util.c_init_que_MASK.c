
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* q_back; struct TYPE_3__* q_forw; } ;
typedef TYPE_1__ qelem ;



void
FUNC_0(qelem *VAR_0)
{
  VAR_0->q_forw = VAR_0->q_back = VAR_0;
}

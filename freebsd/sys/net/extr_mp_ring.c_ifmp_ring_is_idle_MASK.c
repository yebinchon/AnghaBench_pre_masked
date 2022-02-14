
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ring_state {scalar_t__ pidx_head; scalar_t__ pidx_tail; scalar_t__ cidx; scalar_t__ flags; int state; } ;
struct ifmp_ring {int state; } ;


 scalar_t__ VAR_0 ;

int
FUNC_0(struct ifmp_ring *VAR_1)
{
 union ring_state VAR_2;

 VAR_2.state = VAR_1->state;
 if (VAR_2.pidx_head == VAR_2.pidx_tail && VAR_2.pidx_tail == VAR_2.cidx &&
     VAR_2.flags == VAR_0)
  return (1);

 return (0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ring_state {scalar_t__ flags; scalar_t__ pidx_head; scalar_t__ pidx_tail; scalar_t__ cidx; int state; } ;
struct mp_ring {scalar_t__ (* can_drain ) (struct mp_ring*) ;int state; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (struct mp_ring*,union ring_state,scalar_t__,int) ;
 scalar_t__ FUNC_3 (struct mp_ring*) ;

void
FUNC_4(struct mp_ring *VAR_2, int VAR_3)
{
 union ring_state VAR_4, VAR_5;

 VAR_4.state = VAR_2->state;
 if (VAR_4.flags != VAR_1 || VAR_4.pidx_head != VAR_4.pidx_tail ||
     VAR_2->can_drain(VAR_2) == 0)
  return;

 FUNC_0(VAR_4.cidx != VAR_4.pidx_tail);
 VAR_5.state = VAR_4.state;
 VAR_5.flags = VAR_0;





 if (!FUNC_1(&VAR_2->state, VAR_4.state, VAR_5.state))
  return;

 FUNC_2(VAR_2, VAR_5, VAR_4.flags, VAR_3);
}

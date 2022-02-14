
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ring_state {scalar_t__ state; scalar_t__ flags; scalar_t__ pidx_head; scalar_t__ pidx_tail; scalar_t__ cidx; } ;
struct ifmp_ring {scalar_t__ state; scalar_t__ (* can_drain ) (struct ifmp_ring*) ;int lock; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (scalar_t__*,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct ifmp_ring*,union ring_state,scalar_t__,int) ;
 int FUNC_3 (struct ifmp_ring*,union ring_state,scalar_t__,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct ifmp_ring*) ;

void
FUNC_7(struct ifmp_ring *VAR_3, int VAR_4)
{
 union ring_state VAR_5, VAR_6;

 VAR_5.state = VAR_3->state;
 if ((VAR_5.flags != VAR_2 && VAR_5.flags != VAR_0) ||
     VAR_5.pidx_head != VAR_5.pidx_tail ||
     (VAR_5.flags != VAR_0 && VAR_3->can_drain(VAR_3) == 0))
  return;

 FUNC_0(VAR_5.cidx != VAR_5.pidx_tail);
 VAR_6.state = VAR_5.state;
 VAR_6.flags = VAR_1;
 if (!FUNC_1(&VAR_3->state, VAR_5.state, VAR_6.state))
  return;


 FUNC_3(VAR_3, VAR_6, VAR_5.flags, VAR_4);

}

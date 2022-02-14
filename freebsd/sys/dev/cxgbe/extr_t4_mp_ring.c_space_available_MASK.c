
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ring_state {scalar_t__ cidx; scalar_t__ pidx_head; } ;
typedef scalar_t__ uint16_t ;
struct mp_ring {scalar_t__ size; } ;



__attribute__((used)) static inline uint16_t
FUNC_0(struct mp_ring *VAR_0, union ring_state VAR_1)
{
 uint16_t VAR_2 = VAR_0->size - 1;

 if (VAR_1.cidx == VAR_1.pidx_head)
  return (VAR_2);
 else if (VAR_1.cidx > VAR_1.pidx_head)
  return (VAR_1.cidx - VAR_1.pidx_head - 1);
 else
  return (VAR_2 - VAR_1.pidx_head + VAR_1.cidx);
}

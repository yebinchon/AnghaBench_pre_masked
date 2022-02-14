
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ring_state {scalar_t__ cidx; scalar_t__ pidx_tail; scalar_t__ pidx_head; } ;
typedef int uint16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline uint16_t
FUNC_0(union ring_state VAR_3, int VAR_4)
{

 if (VAR_3.cidx == VAR_3.pidx_tail)
  return (VAR_2);
 else if (VAR_4 && VAR_3.pidx_tail != VAR_3.pidx_head)
  return (VAR_0);

 return (VAR_1);
}

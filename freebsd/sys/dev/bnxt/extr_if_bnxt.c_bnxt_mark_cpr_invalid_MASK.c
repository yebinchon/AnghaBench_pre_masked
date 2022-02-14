
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cmpl_base {int info3_v; } ;
struct TYPE_2__ {int ring_size; scalar_t__ vaddr; } ;
struct bnxt_cp_ring {int v_bit; TYPE_1__ ring; } ;



__attribute__((used)) static void
FUNC_0(struct bnxt_cp_ring *VAR_0)
{
 struct cmpl_base *VAR_1 = (void *)VAR_0->ring.vaddr;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->ring.ring_size; VAR_2++)
  VAR_1[VAR_2].info3_v = !VAR_0->v_bit;
}

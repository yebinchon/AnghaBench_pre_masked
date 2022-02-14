
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* reclaim_state; } ;
struct TYPE_3__ {int reclaimed_slab; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (unsigned long,int) ;

__attribute__((used)) static void FUNC_1(void *VAR_1, int VAR_2)
{
 if (VAR_0->reclaim_state)
  VAR_0->reclaim_state->reclaimed_slab += 1 << VAR_2;
 FUNC_0((unsigned long)VAR_1, VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
typedef TYPE_1__* pmap_t ;
struct TYPE_9__ {int resident_count; } ;
struct TYPE_8__ {int pv_pa; } ;
struct TYPE_7__ {TYPE_6__ pm_stats; int pm_pvlist; int pm_active; TYPE_6__* pm_l2; } ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int FUNC_4 (TYPE_6__*,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,scalar_t__,int ,int,int,int ) ;
 int FUNC_7 (char*,int) ;
 TYPE_2__ VAR_3 ;
 scalar_t__ VAR_4 ;

int
FUNC_8(pmap_t VAR_5)
{
 FUNC_1(1, FUNC_7("pmap_pinit: pmap = %08x\n", (uint32_t) VAR_5));

 FUNC_5(VAR_5);
 FUNC_4(VAR_5->pm_l2, sizeof(VAR_5->pm_l2));

 FUNC_0(&VAR_5->pm_active);

 FUNC_3(&VAR_5->pm_pvlist);
 FUNC_4(&VAR_5->pm_stats, sizeof VAR_5->pm_stats);
 VAR_5->pm_stats.resident_count = 1;
 if (VAR_4 < VAR_0) {
  FUNC_6(VAR_5, VAR_4, FUNC_2(VAR_3.pv_pa),
      VAR_2, VAR_1 | VAR_2, 0);
 }
 return (1);
}

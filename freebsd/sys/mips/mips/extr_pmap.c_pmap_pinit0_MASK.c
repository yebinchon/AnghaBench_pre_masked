
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* pmap_t ;
struct TYPE_7__ {int pm_stats; int pm_pvchunk; TYPE_1__* pm_asid; int pm_active; int pm_segtab; } ;
struct TYPE_6__ {scalar_t__ gen; int asid; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int VAR_2 ;
 int VAR_3 ;

void
FUNC_5(pmap_t VAR_4)
{
 int VAR_5;

 FUNC_2(VAR_4);
 VAR_4->pm_segtab = VAR_3;
 FUNC_0(&VAR_4->pm_active);
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_4->pm_asid[VAR_5].asid = VAR_1;
  VAR_4->pm_asid[VAR_5].gen = 0;
 }
 FUNC_1(VAR_2, VAR_4);
 FUNC_3(&VAR_4->pm_pvchunk);
 FUNC_4(&VAR_4->pm_stats, sizeof VAR_4->pm_stats);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_2__* vm_page_t ;
struct spglist {int dummy; } ;
typedef TYPE_3__* pmap_t ;
struct TYPE_8__ {int resident_count; } ;
struct TYPE_10__ {TYPE_1__ pm_stats; scalar_t__* pm_pdir; } ;
struct TYPE_9__ {size_t pindex; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_1 (TYPE_2__*,struct spglist*,int ) ;

__attribute__((used)) static void
FUNC_2(pmap_t VAR_2, vm_page_t VAR_3, struct spglist *VAR_4)
{




 VAR_2->pm_pdir[VAR_3->pindex] = 0;
 --VAR_2->pm_stats.resident_count;
 FUNC_0(VAR_2 != VAR_1);
 FUNC_1(VAR_3, VAR_4, VAR_0);
}

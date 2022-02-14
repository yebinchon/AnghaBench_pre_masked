
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef TYPE_2__* vm_page_t ;
typedef int vm_offset_t ;
typedef TYPE_3__* pmap_t ;
typedef scalar_t__ pd_entry_t ;
struct TYPE_13__ {int resident_count; } ;
struct TYPE_15__ {TYPE_1__ pm_stats; } ;
struct TYPE_14__ {scalar_t__ pindex; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__*) ;
 scalar_t__ VAR_1 ;
 TYPE_2__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 scalar_t__* FUNC_3 (TYPE_3__*,int ) ;
 scalar_t__* FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (TYPE_3__*,int ,TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int) ;

__attribute__((used)) static void
FUNC_8(pmap_t VAR_2, vm_offset_t VAR_3, vm_page_t VAR_4)
{
 pd_entry_t *VAR_5;

 FUNC_2(VAR_2, VAR_0);
 VAR_5 = FUNC_3(VAR_2, VAR_3);

 *VAR_5 = 0;
 VAR_2->pm_stats.resident_count--;
 FUNC_6(VAR_4);
 FUNC_7(1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_page_t ;
typedef scalar_t__ vm_offset_t ;
typedef TYPE_2__* pmap_t ;
struct TYPE_4__ {scalar_t__ resident_count; } ;
struct TYPE_5__ {scalar_t__ pm_segtab; TYPE_1__ pm_stats; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

void
FUNC_5(pmap_t VAR_0)
{
 vm_offset_t VAR_1;
 vm_page_t VAR_2;

 FUNC_0(VAR_0->pm_stats.resident_count == 0,
     ("pmap_release: pmap resident count %ld != 0",
     VAR_0->pm_stats.resident_count));

 VAR_1 = (vm_offset_t)VAR_0->pm_segtab;
 VAR_2 = FUNC_2(FUNC_1(VAR_1));

 FUNC_4(VAR_2);
 FUNC_3(VAR_2);
}

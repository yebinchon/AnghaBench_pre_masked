
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_page_t ;
typedef TYPE_2__* pmap_t ;
struct TYPE_4__ {scalar_t__ resident_count; } ;
struct TYPE_5__ {int pm_l0_paddr; int pm_cookie; int pm_root; TYPE_1__ pm_stats; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;

void
FUNC_10(pmap_t VAR_5)
{
 vm_page_t VAR_6;
 int VAR_7;

 FUNC_2(VAR_5->pm_stats.resident_count == 0,
     ("pmap_release: pmap resident count %ld != 0",
     VAR_5->pm_stats.resident_count));
 FUNC_2(FUNC_9(&VAR_5->pm_root),
     ("pmap_release: pmap has reserved page table page(s)"));

 FUNC_5(&VAR_3);
 if (FUNC_1(VAR_5->pm_cookie) == VAR_1) {
  VAR_7 = FUNC_0(VAR_5->pm_cookie);
  FUNC_2(VAR_7 >= VAR_0 && VAR_7 < VAR_4,
      ("pmap_release: pmap cookie has out-of-range asid"));
  FUNC_4(VAR_2, VAR_7);
 }
 FUNC_6(&VAR_3);

 VAR_6 = FUNC_3(VAR_5->pm_l0_paddr);
 FUNC_8(VAR_6);
 FUNC_7(VAR_6);
}

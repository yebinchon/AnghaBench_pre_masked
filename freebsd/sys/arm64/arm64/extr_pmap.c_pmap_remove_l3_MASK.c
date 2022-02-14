
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_10__ ;


typedef TYPE_2__* vm_page_t ;
typedef int vm_offset_t ;
struct spglist {int dummy; } ;
struct rwlock {int dummy; } ;
struct md_page {int pv_list; } ;
typedef int pt_entry_t ;
typedef TYPE_3__* pmap_t ;
typedef int pd_entry_t ;
struct TYPE_18__ {int wired_count; } ;
struct TYPE_20__ {TYPE_1__ pm_stats; } ;
struct TYPE_17__ {int pv_list; } ;
struct TYPE_19__ {int flags; TYPE_10__ md; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rwlock**,TYPE_2__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_2__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*) ;
 struct md_page* FUNC_5 (int ) ;
 int FUNC_6 (TYPE_3__*,int ) ;
 int FUNC_7 (int*) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (TYPE_10__*,TYPE_3__*,int ) ;
 int FUNC_10 (TYPE_3__*,int) ;
 int FUNC_11 (TYPE_3__*,int ,int ,struct spglist*) ;
 int FUNC_12 (TYPE_2__*,int ) ;
 int FUNC_13 (TYPE_2__*,int ) ;
 int FUNC_14 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_15(pmap_t VAR_8, pt_entry_t *VAR_9, vm_offset_t VAR_10,
    pd_entry_t VAR_11, struct spglist *VAR_12, struct rwlock **VAR_13)
{
 struct md_page *VAR_14;
 pt_entry_t VAR_15;
 vm_page_t VAR_16;

 FUNC_2(VAR_8, VAR_4);
 VAR_15 = FUNC_7(VAR_9);
 FUNC_6(VAR_8, VAR_10);
 if (VAR_15 & VAR_3)
  VAR_8->pm_stats.wired_count -= 1;
 FUNC_10(VAR_8, 1);
 if (VAR_15 & VAR_2) {
  VAR_16 = FUNC_1(VAR_15 & ~VAR_1);
  if (FUNC_8(VAR_15))
   FUNC_14(VAR_16);
  if (VAR_15 & VAR_0)
   FUNC_13(VAR_16, VAR_5);
  FUNC_0(VAR_13, VAR_16);
  FUNC_9(&VAR_16->md, VAR_8, VAR_10);
  if (FUNC_3(&VAR_16->md.pv_list) &&
      (VAR_16->flags & VAR_7) == 0) {
   VAR_14 = FUNC_5(FUNC_4(VAR_16));
   if (FUNC_3(&VAR_14->pv_list))
    FUNC_12(VAR_16, VAR_6);
  }
 }
 return (FUNC_11(VAR_8, VAR_10, VAR_11, VAR_12));
}

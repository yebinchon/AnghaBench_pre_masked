
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_11__ ;


typedef TYPE_2__* vm_page_t ;
typedef int vm_offset_t ;
struct spglist {int dummy; } ;
struct rwlock {int dummy; } ;
struct md_page {int pv_list; } ;
typedef int pt_entry_t ;
typedef TYPE_3__* pmap_t ;
typedef int pd_entry_t ;
struct TYPE_21__ {int wired_count; } ;
struct TYPE_23__ {TYPE_1__ pm_stats; } ;
struct TYPE_20__ {int pv_list; } ;
struct TYPE_22__ {int flags; TYPE_11__ md; } ;


 int FUNC_0 (struct rwlock**,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_2__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*) ;
 struct md_page* FUNC_5 (int ) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_11__*,TYPE_3__*,int ) ;
 int FUNC_10 (TYPE_3__*,int) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (TYPE_3__*,int ,int ,struct spglist*) ;
 int FUNC_13 (int*) ;
 int FUNC_14 (TYPE_2__*,int ) ;
 int FUNC_15 (TYPE_2__*,int ) ;
 int FUNC_16 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_17(pmap_t VAR_7, pt_entry_t *VAR_8, vm_offset_t VAR_9,
    pd_entry_t VAR_10, struct spglist *VAR_11, struct rwlock **VAR_12)
{
 struct md_page *VAR_13;
 pt_entry_t VAR_14, VAR_15, VAR_16, VAR_17;
 vm_page_t VAR_18;

 VAR_15 = FUNC_6(VAR_7);
 VAR_16 = FUNC_8(VAR_7);
 VAR_17 = FUNC_11(VAR_7);

 FUNC_2(VAR_7, VAR_0);
 VAR_14 = FUNC_13(VAR_8);
 if (VAR_14 & VAR_6)
  VAR_7->pm_stats.wired_count -= 1;
 FUNC_10(VAR_7, 1);
 if (VAR_14 & VAR_5) {
  VAR_18 = FUNC_1(VAR_14 & VAR_4);
  if ((VAR_14 & (VAR_16 | VAR_17)) == (VAR_16 | VAR_17))
   FUNC_16(VAR_18);
  if (VAR_14 & VAR_15)
   FUNC_15(VAR_18, VAR_1);
  FUNC_0(VAR_12, VAR_18);
  FUNC_9(&VAR_18->md, VAR_7, VAR_9);
  if (FUNC_3(&VAR_18->md.pv_list) &&
      (VAR_18->flags & VAR_3) == 0) {
   VAR_13 = FUNC_5(FUNC_4(VAR_18));
   if (FUNC_3(&VAR_13->pv_list))
    FUNC_14(VAR_18, VAR_2);
  }
  FUNC_7(VAR_18);
 }
 return (FUNC_12(VAR_7, VAR_9, VAR_10, VAR_11));
}

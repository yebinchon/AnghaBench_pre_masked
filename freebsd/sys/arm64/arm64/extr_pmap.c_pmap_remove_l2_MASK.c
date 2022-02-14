
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef TYPE_3__* vm_page_t ;
typedef int vm_offset_t ;
struct spglist {int dummy; } ;
struct rwlock {int dummy; } ;
struct md_page {int pv_list; } ;
typedef int pt_entry_t ;
typedef TYPE_4__* pmap_t ;
typedef int pd_entry_t ;
struct TYPE_20__ {int wired_count; } ;
struct TYPE_23__ {TYPE_1__ pm_stats; } ;
struct TYPE_21__ {int pv_list; } ;
struct TYPE_22__ {scalar_t__ valid; scalar_t__ ref_count; TYPE_2__ md; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rwlock**,int) ;
 int VAR_5 ;
 int FUNC_1 (int,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 TYPE_3__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ VAR_14 ;
 TYPE_4__* VAR_15 ;
 struct md_page* FUNC_5 (int) ;
 int FUNC_6 (TYPE_3__*,struct spglist*,int ) ;
 int FUNC_7 (TYPE_4__*,int) ;
 int FUNC_8 (int*) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (struct md_page*,TYPE_4__*,int) ;
 int FUNC_11 (TYPE_4__*,int*,int) ;
 TYPE_3__* FUNC_12 (TYPE_4__*,int) ;
 int FUNC_13 (TYPE_4__*,int) ;
 int FUNC_14 (TYPE_4__*,int,int ,struct spglist*) ;
 int FUNC_15 (TYPE_3__*,int ) ;
 int FUNC_16 (TYPE_3__*,int ) ;
 int FUNC_17 (TYPE_3__*) ;

__attribute__((used)) static int
FUNC_18(pmap_t VAR_16, pt_entry_t *VAR_17, vm_offset_t VAR_18,
    pd_entry_t VAR_19, struct spglist *VAR_20, struct rwlock **VAR_21)
{
 struct md_page *VAR_22;
 pt_entry_t VAR_23;
 vm_offset_t VAR_24, VAR_25;
 vm_page_t VAR_26, VAR_27;

 FUNC_3(VAR_16, VAR_9);
 FUNC_1((VAR_18 & VAR_7) == 0, ("pmap_remove_l2: sva is not aligned"));
 VAR_23 = FUNC_8(VAR_17);
 FUNC_1((VAR_23 & VAR_1) == VAR_6,
     ("pmap_remove_l2: L2e %lx is not a block mapping", VAR_23));





 FUNC_7(VAR_16, VAR_18);

 if (VAR_23 & VAR_4)
  VAR_16->pm_stats.wired_count -= VAR_8 / VAR_11;
 FUNC_13(VAR_16, VAR_8 / VAR_11);
 if (VAR_23 & VAR_3) {
  FUNC_0(VAR_21, VAR_23 & ~VAR_2);
  VAR_22 = FUNC_5(VAR_23 & ~VAR_2);
  FUNC_10(VAR_22, VAR_16, VAR_18);
  VAR_24 = VAR_18 + VAR_8;
  for (VAR_25 = VAR_18, VAR_26 = FUNC_2(VAR_23 & ~VAR_2);
      VAR_25 < VAR_24; VAR_25 += VAR_11, VAR_26++) {
   if (FUNC_9(VAR_23))
    FUNC_17(VAR_26);
   if (VAR_23 & VAR_0)
    FUNC_16(VAR_26, VAR_12);
   if (FUNC_4(&VAR_26->md.pv_list) &&
       FUNC_4(&VAR_22->pv_list))
    FUNC_15(VAR_26, VAR_13);
  }
 }
 if (VAR_16 == VAR_15) {
  FUNC_11(VAR_16, VAR_17, VAR_18);
 } else {
  VAR_27 = FUNC_12(VAR_16, VAR_18);
  if (VAR_27 != ((void*)0)) {
   FUNC_1(VAR_27->valid == VAR_14,
       ("pmap_remove_l2: l3 page not promoted"));
   FUNC_13(VAR_16, 1);
   FUNC_1(VAR_27->ref_count == VAR_10,
       ("pmap_remove_l2: l3 page ref count error"));
   VAR_27->ref_count = 0;
   FUNC_6(VAR_27, VAR_20, VAR_5);
  }
 }
 return (FUNC_14(VAR_16, VAR_18, VAR_19, VAR_20));
}

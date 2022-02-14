
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;


typedef TYPE_3__* vm_page_t ;
typedef int vm_offset_t ;
struct spglist {int dummy; } ;
struct rwlock {int dummy; } ;
struct md_page {int pv_list; } ;
typedef int pt_entry_t ;
typedef TYPE_4__* pmap_t ;
typedef int pd_entry_t ;
struct TYPE_26__ {int wired_count; } ;
struct TYPE_29__ {TYPE_1__ pm_stats; } ;
struct TYPE_27__ {int pv_list; } ;
struct TYPE_28__ {scalar_t__ valid; scalar_t__ ref_count; TYPE_2__ md; } ;


 int FUNC_0 (struct rwlock**,int) ;
 int VAR_0 ;
 int FUNC_1 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_3__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ VAR_11 ;
 TYPE_4__* VAR_12 ;
 struct md_page* FUNC_5 (int) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_3__*,struct spglist*,int ) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (TYPE_4__*,int,int) ;
 int FUNC_11 (TYPE_4__*) ;
 int * FUNC_12 (TYPE_4__*,int) ;
 int FUNC_13 (struct md_page*,TYPE_4__*,int) ;
 int FUNC_14 (TYPE_4__*,int*,int) ;
 TYPE_3__* FUNC_15 (TYPE_4__*,int) ;
 int FUNC_16 (TYPE_4__*,int) ;
 int FUNC_17 (TYPE_4__*) ;
 int FUNC_18 (TYPE_4__*,int,int ,struct spglist*) ;
 int FUNC_19 (int*) ;
 int FUNC_20 (TYPE_3__*,int ) ;
 int FUNC_21 (TYPE_3__*,int ) ;
 int FUNC_22 (TYPE_3__*) ;

__attribute__((used)) static int
FUNC_23(pmap_t VAR_13, pd_entry_t *VAR_14, vm_offset_t VAR_15,
    struct spglist *VAR_16, struct rwlock **VAR_17)
{
 struct md_page *VAR_18;
 pd_entry_t VAR_19;
 vm_offset_t VAR_20, VAR_21;
 vm_page_t VAR_22, VAR_23;
 pt_entry_t VAR_24, VAR_25, VAR_26, VAR_27;

 VAR_24 = FUNC_9(VAR_13);
 VAR_25 = FUNC_6(VAR_13);
 VAR_26 = FUNC_11(VAR_13);
 VAR_27 = FUNC_17(VAR_13);

 FUNC_3(VAR_13, VAR_1);
 FUNC_1((VAR_15 & VAR_5) == 0,
     ("pmap_remove_pde: sva is not 2mpage aligned"));
 VAR_19 = FUNC_19(VAR_14);
 if (VAR_19 & VAR_10)
  VAR_13->pm_stats.wired_count -= VAR_2 / VAR_4;
 if ((VAR_19 & VAR_24) != 0)
  FUNC_10(VAR_12, VAR_15, VAR_19);
 FUNC_16(VAR_13, VAR_2 / VAR_4);
 if (VAR_19 & VAR_8) {
  FUNC_0(VAR_17, VAR_19 & VAR_9);
  VAR_18 = FUNC_5(VAR_19 & VAR_9);
  FUNC_13(VAR_18, VAR_13, VAR_15);
  VAR_20 = VAR_15 + VAR_2;
  for (VAR_21 = VAR_15, VAR_22 = FUNC_2(VAR_19 & VAR_9);
      VAR_21 < VAR_20; VAR_21 += VAR_4, VAR_22++) {
   if ((VAR_19 & (VAR_26 | VAR_27)) == (VAR_26 | VAR_27))
    FUNC_22(VAR_22);
   if (VAR_19 & VAR_25)
    FUNC_21(VAR_22, VAR_6);
   if (FUNC_4(&VAR_22->md.pv_list) &&
       FUNC_4(&VAR_18->pv_list))
    FUNC_20(VAR_22, VAR_7);
   FUNC_8(VAR_22);
  }
 }
 if (VAR_13 == VAR_12) {
  FUNC_14(VAR_13, VAR_14, VAR_15);
 } else {
  VAR_23 = FUNC_15(VAR_13, VAR_15);
  if (VAR_23 != ((void*)0)) {
   FUNC_1(VAR_23->valid == VAR_11,
       ("pmap_remove_pde: pte page not promoted"));
   FUNC_16(VAR_13, 1);
   FUNC_1(VAR_23->ref_count == VAR_3,
       ("pmap_remove_pde: pte page ref count error"));
   VAR_23->ref_count = 0;
   FUNC_7(VAR_23, VAR_16, VAR_0);
  }
 }
 return (FUNC_18(VAR_13, VAR_15, *FUNC_12(VAR_13, VAR_15), VAR_16));
}

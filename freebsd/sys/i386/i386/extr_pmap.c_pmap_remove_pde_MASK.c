
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef TYPE_3__* vm_page_t ;
typedef int vm_offset_t ;
struct spglist {int dummy; } ;
struct md_page {int pv_list; } ;
typedef TYPE_4__* pmap_t ;
typedef int pd_entry_t ;
struct TYPE_19__ {int wired_count; scalar_t__ resident_count; } ;
struct TYPE_21__ {TYPE_2__ pm_stats; } ;
struct TYPE_18__ {int pv_list; } ;
struct TYPE_20__ {scalar_t__ valid; scalar_t__ ref_count; TYPE_1__ md; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 TYPE_3__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ VAR_15 ;
 TYPE_4__* VAR_16 ;
 struct md_page* FUNC_4 (int) ;
 int FUNC_5 (TYPE_3__*,struct spglist*,int ) ;
 int FUNC_6 (TYPE_4__*,int,int) ;
 int FUNC_7 (struct md_page*,TYPE_4__*,int) ;
 int FUNC_8 (TYPE_4__*,int*,int) ;
 TYPE_3__* FUNC_9 (TYPE_4__*,int) ;
 int FUNC_10 (int*) ;
 int FUNC_11 (TYPE_3__*,int ) ;
 int FUNC_12 (TYPE_3__*,int ) ;
 int FUNC_13 (TYPE_3__*) ;

__attribute__((used)) static void
FUNC_14(pmap_t VAR_17, pd_entry_t *VAR_18, vm_offset_t VAR_19,
    struct spglist *VAR_20)
{
 struct md_page *VAR_21;
 pd_entry_t VAR_22;
 vm_offset_t VAR_23, VAR_24;
 vm_page_t VAR_25, VAR_26;

 FUNC_2(VAR_17, VAR_1);
 FUNC_0((VAR_19 & VAR_5) == 0,
     ("pmap_remove_pde: sva is not 4mpage aligned"));
 VAR_22 = FUNC_10(VAR_18);
 if (VAR_22 & VAR_14)
  VAR_17->pm_stats.wired_count -= VAR_2 / VAR_4;





 if ((VAR_22 & VAR_9) != 0)
  FUNC_6(VAR_16, VAR_19, VAR_22);

 VAR_17->pm_stats.resident_count -= VAR_2 / VAR_4;
 if (VAR_22 & VAR_11) {
  VAR_21 = FUNC_4(VAR_22 & VAR_12);
  FUNC_7(VAR_21, VAR_17, VAR_19);
  VAR_23 = VAR_19 + VAR_2;
  for (VAR_24 = VAR_19, VAR_25 = FUNC_1(VAR_22 & VAR_12);
      VAR_24 < VAR_23; VAR_24 += VAR_4, VAR_25++) {
   if ((VAR_22 & (VAR_10 | VAR_13)) == (VAR_10 | VAR_13))
    FUNC_13(VAR_25);
   if (VAR_22 & VAR_8)
    FUNC_12(VAR_25, VAR_6);
   if (FUNC_3(&VAR_25->md.pv_list) &&
       FUNC_3(&VAR_21->pv_list))
    FUNC_11(VAR_25, VAR_7);
  }
 }
 if (VAR_17 == VAR_16) {
  FUNC_8(VAR_17, VAR_18, VAR_19);
 } else {
  VAR_26 = FUNC_9(VAR_17, VAR_19);
  if (VAR_26 != ((void*)0)) {
   FUNC_0(VAR_26->valid == VAR_15,
       ("pmap_remove_pde: pte page not promoted"));
   VAR_17->pm_stats.resident_count--;
   FUNC_0(VAR_26->ref_count == VAR_3,
       ("pmap_remove_pde: pte page ref count error"));
   VAR_26->ref_count = 0;
   FUNC_5(VAR_26, VAR_20, VAR_0);
  }
 }
}

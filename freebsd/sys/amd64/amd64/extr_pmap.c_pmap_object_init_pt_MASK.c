
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int vm_size_t ;
typedef scalar_t__ vm_pindex_t ;
typedef TYPE_2__* vm_page_t ;
typedef int vm_paddr_t ;
typedef int vm_offset_t ;
typedef TYPE_3__* vm_object_t ;
typedef int pt_entry_t ;
typedef int pmap_t ;
typedef int pd_entry_t ;
struct TYPE_15__ {scalar_t__ type; } ;
struct TYPE_13__ {int pat_mode; } ;
struct TYPE_14__ {scalar_t__ valid; scalar_t__ ref_count; TYPE_1__ md; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 TYPE_2__* FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_3__*) ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int *,int) ;
 scalar_t__ FUNC_8 (int) ;
 int VAR_7 ;
 int FUNC_9 (int*,int) ;
 int FUNC_10 (int ) ;
 TYPE_2__* FUNC_11 (int ,int,int *) ;
 int FUNC_12 (int ,int,int) ;
 int FUNC_13 (int ) ;
 size_t FUNC_14 (int) ;
 int VAR_8 ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,int) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (TYPE_3__*,scalar_t__,scalar_t__) ;
 TYPE_2__* FUNC_20 (TYPE_3__*,scalar_t__) ;

void
FUNC_21(pmap_t VAR_9, vm_offset_t VAR_10, vm_object_t VAR_11,
    vm_pindex_t VAR_12, vm_size_t VAR_13)
{
 pd_entry_t *VAR_14;
 pt_entry_t VAR_15, VAR_16, VAR_17, VAR_18;
 vm_paddr_t VAR_19, VAR_20;
 vm_page_t VAR_21, VAR_22;
 int VAR_23;

 VAR_15 = FUNC_10(VAR_9);
 VAR_16 = FUNC_13(VAR_9);
 VAR_18 = FUNC_18(VAR_9);
 VAR_17 = FUNC_17(VAR_9);

 FUNC_5(VAR_11);
 FUNC_0(VAR_11->type == VAR_1 || VAR_11->type == VAR_2,
     ("pmap_object_init_pt: non-device object"));
 if ((VAR_10 & (VAR_0 - 1)) == 0 && (VAR_13 & (VAR_0 - 1)) == 0) {
  if (!FUNC_15(VAR_9))
   return;
  if (!FUNC_19(VAR_11, VAR_12, VAR_12 + FUNC_8(VAR_13)))
   return;
  VAR_21 = FUNC_20(VAR_11, VAR_12);
  FUNC_0(VAR_21->valid == VAR_6,
      ("pmap_object_init_pt: invalid page %p", VAR_21));
  VAR_23 = VAR_21->md.pat_mode;





  VAR_20 = FUNC_6(VAR_21);
  if (VAR_20 & (VAR_0 - 1))
   return;






  VAR_21 = FUNC_4(VAR_21, VAR_7);
  for (VAR_19 = VAR_20 + VAR_3; VAR_19 < VAR_20 + VAR_13;
      VAR_19 += VAR_3) {
   FUNC_0(VAR_21->valid == VAR_6,
       ("pmap_object_init_pt: invalid page %p", VAR_21));
   if (VAR_19 != FUNC_6(VAR_21) ||
       VAR_23 != VAR_21->md.pat_mode)
    return;
   VAR_21 = FUNC_4(VAR_21, VAR_7);
  }






  FUNC_2(VAR_9);
  for (VAR_19 = VAR_20 | FUNC_12(VAR_9, VAR_23, 1);
      VAR_19 < VAR_20 + VAR_13; VAR_19 += VAR_0) {
   VAR_22 = FUNC_11(VAR_9, VAR_10, ((void*)0));
   if (VAR_22 == ((void*)0)) {







    VAR_10 += VAR_0;
    continue;
   }
   VAR_14 = (pd_entry_t *)FUNC_1(FUNC_6(VAR_22));
   VAR_14 = &VAR_14[FUNC_14(VAR_10)];
   if ((*VAR_14 & VAR_18) == 0) {
    FUNC_9(VAR_14, VAR_19 | VAR_4 | VAR_16 | VAR_15 |
        VAR_5 | VAR_17 | VAR_18);
    FUNC_16(VAR_9, VAR_0 / VAR_3);
    FUNC_7(&VAR_8, 1);
   } else {

    VAR_22->ref_count--;
    FUNC_0(VAR_22->ref_count > 0,
        ("pmap_object_init_pt: missing reference "
        "to page directory page, va: 0x%lx", VAR_10));
   }
   VAR_10 += VAR_0;
  }
  FUNC_3(VAR_9);
 }
}

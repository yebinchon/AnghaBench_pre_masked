
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
struct l2_bucket {int* l2b_kva; } ;
typedef TYPE_1__* pv_entry_t ;
typedef int pt_entry_t ;
typedef scalar_t__ pmap_t ;
struct TYPE_3__ {scalar_t__ pv_pmap; scalar_t__ pv_va; int pv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_3 ;
 size_t FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (scalar_t__,scalar_t__,int ,int ,int) ;
 struct l2_bucket* FUNC_6 (scalar_t__,scalar_t__) ;
 int FUNC_7 (scalar_t__,scalar_t__,int ) ;
 int FUNC_8 (scalar_t__,scalar_t__) ;
 int FUNC_9 (scalar_t__,scalar_t__) ;
 int VAR_4 ;

__attribute__((used)) static __inline void
FUNC_10(pv_entry_t VAR_5, pmap_t VAR_6, vm_offset_t VAR_7, int VAR_8)
{
 struct l2_bucket *VAR_9;
 pt_entry_t *VAR_10, VAR_11;

 VAR_9 = FUNC_6(VAR_5->pv_pmap, VAR_5->pv_va);
 VAR_10 = &VAR_9->l2b_kva[FUNC_3(VAR_5->pv_va)];

 if (VAR_8 == 1) {
  VAR_11 = (*VAR_10 & ~VAR_0) | VAR_4;
  if (FUNC_4(VAR_11)) {
   if (FUNC_1(VAR_5->pv_flags)) {
    FUNC_9(VAR_5->pv_pmap, VAR_5->pv_va);
   } else if (FUNC_2(VAR_5->pv_flags)) {
    FUNC_8(VAR_5->pv_pmap, VAR_5->pv_va);
   }
  }
 } else {
  VAR_11 = *VAR_10 &~ VAR_0;
  if ((VAR_7 != VAR_5->pv_va || VAR_6 != VAR_5->pv_pmap) &&
       FUNC_4(VAR_11)) {
   if (FUNC_1(VAR_5->pv_flags)) {
    FUNC_7(VAR_5->pv_pmap,
         VAR_5->pv_va, VAR_1);
    FUNC_9(VAR_5->pv_pmap, VAR_5->pv_va);
   } else if (FUNC_2(VAR_5->pv_flags)) {
    FUNC_5(VAR_5->pv_pmap,
         VAR_5->pv_va, VAR_1, VAR_3,
         (VAR_5->pv_flags & VAR_2) == 0);
    FUNC_8(VAR_5->pv_pmap,
         VAR_5->pv_va);
   }
  }
 }
 *VAR_10 = VAR_11;
 FUNC_0(VAR_5->pv_pmap, VAR_10);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_page_t ;
typedef int vm_offset_t ;
struct pv_entry {int dummy; } ;
struct l2_bucket {int* l2b_kva; } ;
typedef int pt_entry_t ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int) ;
 int VAR_8 ;
 size_t FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (struct pv_entry*) ;
 struct l2_bucket* FUNC_10 (int ,int) ;
 struct pv_entry* FUNC_11 (int ,int ,int) ;
 int VAR_9 ;
 int * VAR_10 ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int) ;

void
FUNC_15(vm_offset_t VAR_11)
{
 struct l2_bucket *VAR_12;
 pt_entry_t *VAR_13, VAR_14;
 struct pv_entry *VAR_15;
 vm_page_t VAR_16;
 vm_offset_t VAR_17;

 VAR_12 = FUNC_10(VAR_8, VAR_11);
 if (!VAR_12)
  return;
 FUNC_0(VAR_12 != ((void*)0), ("No L2 Bucket"));
 VAR_13 = &VAR_12->l2b_kva[FUNC_7(VAR_11)];
 VAR_14 = *VAR_13;
 if (FUNC_8(VAR_14)) {

  if ((VAR_14 & VAR_5) == VAR_4)
   VAR_17 = (VAR_14 & VAR_0) | (VAR_11 & VAR_1);
  else
   VAR_17 = (VAR_14 & VAR_2) | (VAR_11 & VAR_3);



  FUNC_12(&VAR_9);
  FUNC_1(VAR_8);
  if (VAR_10 != ((void*)0) && (VAR_16 = FUNC_14(VAR_17)) &&
      (VAR_15 = FUNC_11(VAR_16, VAR_8, VAR_11)))
   FUNC_9(VAR_15);
  FUNC_2(VAR_8);
  FUNC_13(&VAR_9);
  VAR_11 = VAR_11 & ~VAR_6;
  FUNC_4(VAR_11, VAR_7);
  FUNC_5(VAR_11, VAR_7);
  FUNC_6(VAR_11);
  FUNC_3();
  *VAR_13 = 0;
 }
}

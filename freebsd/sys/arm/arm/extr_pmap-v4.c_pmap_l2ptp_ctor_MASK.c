
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
struct l2_bucket {int* l2b_kva; } ;
typedef int pt_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (void*,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 size_t FUNC_4 (int) ;
 int FUNC_5 (void*,int ,int) ;
 struct l2_bucket* FUNC_6 (int ,int) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_7(void *VAR_5, int VAR_6, void *VAR_7, int VAR_8)
{

 struct l2_bucket *VAR_9;
 pt_entry_t *VAR_10, VAR_11;

 vm_offset_t VAR_12 = (vm_offset_t)VAR_5 & ~VAR_2;
  VAR_9 = FUNC_6(VAR_3, VAR_12);
  VAR_10 = &VAR_9->l2b_kva[FUNC_4(VAR_12)];
  VAR_11 = *VAR_10;

  if ((VAR_11 & VAR_0) != VAR_4) {




   *VAR_10 = (VAR_11 & ~VAR_0) | VAR_4;
   FUNC_0(VAR_10);
   FUNC_3(VAR_12);
   FUNC_2();
  }

 FUNC_5(VAR_5, 0, VAR_1);
 FUNC_1(VAR_5, VAR_1 / sizeof(pt_entry_t));
 return (0);
}

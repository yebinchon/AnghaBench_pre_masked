
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
typedef int vm_offset_t ;
struct vm_page {int dummy; } ;
struct l2_bucket {int* l2b_kva; } ;
typedef int pt_entry_t ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct vm_page*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t FUNC_3 (int ) ;
 struct l2_bucket* FUNC_4 (int ,int ) ;
 struct vm_page* FUNC_5 (int *,int ,int) ;

__attribute__((used)) static __inline int
FUNC_6(vm_offset_t VAR_7, pt_entry_t VAR_8, vm_paddr_t *VAR_9)
{
 struct l2_bucket *VAR_10;
 pt_entry_t *VAR_11;
 vm_paddr_t VAR_12;
 struct vm_page *VAR_13;

 VAR_13 = FUNC_5(((void*)0), 0, VAR_2 | VAR_3);
 if (VAR_13 == ((void*)0))
  return (1);
 VAR_12 = FUNC_2(VAR_13);

 if (VAR_9)
  *VAR_9 = VAR_12;

 VAR_10 = FUNC_4(VAR_6, VAR_7);

 VAR_11 = &VAR_10->l2b_kva[FUNC_3(VAR_7)];
 *VAR_11 = VAR_0 | VAR_12 | VAR_8 |
     FUNC_0(VAR_1, VAR_4 | VAR_5);
 FUNC_1(VAR_11);
 return (0);
}

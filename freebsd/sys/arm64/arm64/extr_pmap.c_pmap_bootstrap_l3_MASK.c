
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
typedef int vm_offset_t ;
typedef size_t u_int ;
typedef int pd_entry_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (void*,int ,int) ;
 int FUNC_2 (int,int) ;
 int * FUNC_3 (int ,int) ;
 size_t FUNC_4 (int) ;
 int FUNC_5 (int *,int) ;
 scalar_t__ FUNC_6 (uintptr_t,int) ;

__attribute__((used)) static vm_offset_t
FUNC_7(vm_offset_t VAR_9, vm_offset_t VAR_10, vm_offset_t VAR_11)
{
 vm_offset_t VAR_12;
 vm_paddr_t VAR_13;
 pd_entry_t *VAR_14;
 u_int VAR_15;

 FUNC_0((VAR_10 & VAR_1) == 0, ("Invalid virtual address"));

 VAR_14 = FUNC_3(VAR_8, VAR_10);
 VAR_14 = (pd_entry_t *)FUNC_6((uintptr_t)VAR_14, VAR_6);
 VAR_15 = FUNC_4(VAR_10);
 VAR_12 = VAR_11;

 for (; VAR_10 < VAR_7; VAR_15++, VAR_10 += VAR_2) {
  FUNC_0(VAR_15 < VAR_4, ("Invalid L2 index"));

  VAR_13 = FUNC_2(VAR_9, VAR_12);
  FUNC_5(&VAR_14[VAR_15],
      (VAR_13 & ~VAR_5) | VAR_0 | VAR_3);
  VAR_12 += VAR_6;
 }


 FUNC_1((void *)VAR_11, 0, VAR_12 - VAR_11);

 return VAR_12;
}

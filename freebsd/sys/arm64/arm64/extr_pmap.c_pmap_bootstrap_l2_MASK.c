
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
typedef int vm_offset_t ;
typedef size_t u_int ;
typedef int pd_entry_t ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (void*,int ,int) ;
 int FUNC_2 (int,int) ;
 size_t FUNC_3 (int) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static vm_offset_t
FUNC_5(vm_offset_t VAR_7, vm_offset_t VAR_8, vm_offset_t VAR_9)
{
 vm_offset_t VAR_10;
 vm_paddr_t VAR_11;
 pd_entry_t *VAR_12;
 u_int VAR_13;

 FUNC_0((VAR_8 & VAR_0) == 0, ("Invalid virtual address"));

 VAR_12 = (pd_entry_t *)VAR_7;
 VAR_13 = FUNC_3(VAR_8);
 VAR_10 = VAR_9;

 for (; VAR_8 < VAR_6; VAR_13++, VAR_8 += VAR_1) {
  FUNC_0(VAR_13 < VAR_3, ("Invalid L1 index"));

  VAR_11 = FUNC_2(VAR_7, VAR_10);
  FUNC_4(&VAR_12[VAR_13],
      (VAR_11 & ~VAR_4) | VAR_2);
  VAR_10 += VAR_5;
 }


 FUNC_1((void *)VAR_9, 0, VAR_10 - VAR_9);

 return VAR_10;
}

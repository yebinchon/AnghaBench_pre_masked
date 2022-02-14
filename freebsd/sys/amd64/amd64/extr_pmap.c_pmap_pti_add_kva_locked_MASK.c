
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
typedef int vm_offset_t ;
typedef int pt_entry_t ;
typedef int pd_entry_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int ) ;
 int* FUNC_6 (int ,int*) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int*) ;
 int FUNC_9 (int*,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static void
FUNC_12(vm_offset_t VAR_12, vm_offset_t VAR_13, bool VAR_14)
{
 vm_paddr_t VAR_15;
 pd_entry_t *VAR_16;
 pt_entry_t *VAR_17, VAR_18;
 bool VAR_19;

 FUNC_2(VAR_11);

 VAR_12 = FUNC_11(VAR_12);
 FUNC_1(VAR_12 > VAR_2);
 VAR_13 = FUNC_10(VAR_13);
 FUNC_1(VAR_12 < VAR_13);
 for (; VAR_12 < VAR_13; VAR_12 += VAR_1) {
  VAR_17 = FUNC_6(VAR_12, &VAR_19);
  VAR_15 = FUNC_4(VAR_12);
  VAR_18 = VAR_15 | VAR_6 | VAR_7 | VAR_4 | VAR_5 |
      (VAR_14 ? 0 : VAR_9) | FUNC_3(VAR_8,
      VAR_3, VAR_0);
  if (*VAR_17 == 0) {
   FUNC_9(VAR_17, VAR_18);
   FUNC_8(VAR_17);
  } else {
   FUNC_0(!VAR_10,
       ("pti overlap after fin %#lx %#lx %#lx",
       VAR_12, *VAR_17, VAR_18));
   FUNC_0(*VAR_17 == VAR_18,
       ("pti non-identical pte after fin %#lx %#lx %#lx",
       VAR_12, *VAR_17, VAR_18));
  }
  if (VAR_19) {
   VAR_16 = FUNC_5(VAR_12);
   FUNC_7(VAR_16, 1);
  }
 }
}

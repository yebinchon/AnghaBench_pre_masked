
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;
typedef int vm_prot_t ;
typedef int vm_paddr_t ;
typedef int vm_offset_t ;
typedef int vm_memattr_t ;
typedef scalar_t__ u_int ;
typedef int pt2_entry_t ;
typedef int pt1_entry_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int,scalar_t__,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * FUNC_3 (int) ;
 int * FUNC_4 (int) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;

void
FUNC_9(vm_paddr_t VAR_9, vm_offset_t VAR_10, vm_size_t VAR_11,
    vm_prot_t VAR_12, vm_memattr_t VAR_13)
{
 u_int VAR_14;
 u_int VAR_15, VAR_16, VAR_17, VAR_18;
 pt1_entry_t *VAR_19;
 pt2_entry_t *VAR_20;

 VAR_17 = VAR_12 & VAR_8 ? VAR_4 : VAR_3;
 VAR_17 |= (VAR_12 & VAR_7) ? VAR_6 : VAR_5;
 VAR_18 = FUNC_8(VAR_13);
 VAR_16 = FUNC_0(VAR_17);
 VAR_15 = FUNC_0(VAR_18);


 VAR_14 = FUNC_7(VAR_11);
 while (VAR_14 > 0) {
  if ((((VAR_10 | VAR_9) & VAR_1) == 0) && (VAR_14 >= VAR_2)) {
   VAR_19 = FUNC_3(VAR_10);
   FUNC_5(VAR_19, FUNC_1(VAR_9, VAR_16, VAR_15));
   VAR_10 += VAR_2;
   VAR_9 += VAR_2;
   VAR_14 -= VAR_2;
  } else {
   VAR_20 = FUNC_4(VAR_10);
   FUNC_6(VAR_20, FUNC_2(VAR_9, VAR_17, VAR_18));
   VAR_10 += VAR_0;
   VAR_9 += VAR_0;
   VAR_14 -= VAR_0;
  }
 }
}

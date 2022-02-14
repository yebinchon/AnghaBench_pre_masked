
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ vmem_addr_t ;
typedef scalar_t__ vm_size_t ;
typedef scalar_t__ vm_paddr_t ;
typedef scalar_t__ vm_offset_t ;
typedef int vm_memattr_t ;
typedef scalar_t__ pt_entry_t ;
typedef scalar_t__ pdp_entry_t ;
typedef scalar_t__ pd_entry_t ;
struct TYPE_2__ {int ref_count; } ;


 int VAR_0 ;
 int FUNC_0 (uintptr_t) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (scalar_t__,scalar_t__,int ) ;
 int FUNC_8 (scalar_t__,scalar_t__,scalar_t__,scalar_t__*) ;
 scalar_t__* FUNC_9 (scalar_t__) ;
 scalar_t__* FUNC_10 (scalar_t__) ;
 scalar_t__* FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__,scalar_t__) ;

int
FUNC_14(vm_paddr_t VAR_19, vm_size_t VAR_20, void **VAR_21,
    vm_memattr_t VAR_22)
{
 pdp_entry_t *VAR_23;
 pd_entry_t *VAR_24;
 pt_entry_t *VAR_25;
 vm_offset_t VAR_26, VAR_27;
 vmem_addr_t VAR_28;
 vm_paddr_t VAR_29;
 int VAR_30;

 if (VAR_20 == 0 || VAR_19 + VAR_20 < VAR_19)
  return (VAR_1);


 if (VAR_19 + VAR_20 <= VAR_15) {
  VAR_26 = FUNC_2(VAR_19);
  *VAR_21 = (void *)VAR_26;
  return (FUNC_7(VAR_26, VAR_20, VAR_22));
 }






 VAR_30 = VAR_2;
 if ((VAR_14 & VAR_0) != 0 && FUNC_12(VAR_19 + VAR_20,
     VAR_4) >= FUNC_13(VAR_19, VAR_4) + VAR_4)
  VAR_30 = FUNC_8(VAR_20, VAR_4, VAR_19 & VAR_7,
      &VAR_28);
 if (VAR_30 != 0 && FUNC_12(VAR_19 + VAR_20, VAR_5) >= FUNC_13(VAR_19,
     VAR_5) + VAR_5)
  VAR_30 = FUNC_8(VAR_20, VAR_5, VAR_19 & VAR_8,
      &VAR_28);
 if (VAR_30 != 0)
  VAR_30 = FUNC_8(VAR_20, VAR_6, 0, &VAR_28);
 if (VAR_30 != 0)
  return (VAR_30);






 FUNC_4(VAR_16);
 for (VAR_29 = VAR_19, VAR_26 = VAR_28; VAR_20 > 0; VAR_29 += VAR_27, VAR_26 += VAR_27,
     VAR_20 -= VAR_27) {
  if ((VAR_14 & VAR_0) != 0 && VAR_20 >= VAR_4 &&
      (VAR_29 & VAR_7) == 0 && (VAR_26 & VAR_7) == 0) {
   VAR_23 = FUNC_10(VAR_26);
   FUNC_1(*VAR_23 == 0);
   *VAR_23 = VAR_29 | VAR_17 | VAR_11 | VAR_12 |
       VAR_13 | VAR_10 | VAR_18 |
       FUNC_6(VAR_16, VAR_22, VAR_9);
   VAR_27 = VAR_4;
  } else if (VAR_20 >= VAR_5 && (VAR_29 & VAR_8) == 0 &&
      (VAR_26 & VAR_8) == 0) {
   VAR_24 = FUNC_9(VAR_26);
   FUNC_1(*VAR_24 == 0);
   *VAR_24 = VAR_29 | VAR_17 | VAR_11 | VAR_12 |
       VAR_13 | VAR_10 | VAR_18 |
       FUNC_6(VAR_16, VAR_22, VAR_9);
   FUNC_3(FUNC_0((uintptr_t)VAR_24))->
       ref_count++;
   VAR_27 = VAR_5;
  } else {
   VAR_25 = FUNC_11(VAR_26);
   FUNC_1(*VAR_25 == 0);
   *VAR_25 = VAR_29 | VAR_17 | VAR_12 | VAR_13 |
       VAR_10 | VAR_18 | FUNC_6(VAR_16,
       VAR_22, VAR_3);
   FUNC_3(FUNC_0((uintptr_t)VAR_25))->
       ref_count++;
   VAR_27 = VAR_6;
  }
 }
 FUNC_5(VAR_16);
 FUNC_1(VAR_20 == 0);

 *VAR_21 = (void *)VAR_28;
 return (0);
}

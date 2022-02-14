
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
typedef int vm_offset_t ;
typedef int pt_entry_t ;
typedef int pmap_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int*) ;
 int* FUNC_5 (int ,int,int*) ;
 scalar_t__ FUNC_6 (int) ;

int
FUNC_7(pmap_t VAR_14, vm_offset_t VAR_15, vm_paddr_t *VAR_16)
{
 pt_entry_t *VAR_17, VAR_18;
 vm_paddr_t VAR_19, VAR_20;
 int VAR_21, VAR_22;
 bool VAR_23;

 FUNC_1(VAR_14);
 VAR_17 = FUNC_5(VAR_14, VAR_15, &VAR_21);
 if (VAR_17 != ((void*)0)) {
  VAR_18 = FUNC_4(VAR_17);

  switch (VAR_21) {
  case 3:
   VAR_19 = VAR_7;
   break;
  case 2:
   VAR_19 = VAR_6;
   break;
  case 1:
   VAR_19 = VAR_5;
   break;
  default:
   FUNC_3("pmap_mincore: invalid level %d", VAR_21);
  }

  VAR_23 = (VAR_18 & VAR_4) != 0;
  VAR_22 = VAR_8;
  if (VAR_21 != 3)
   VAR_22 |= VAR_13;
  if ((VAR_23 && FUNC_6(VAR_18)) || (!VAR_23 &&
      (VAR_18 & VAR_2) == FUNC_0(VAR_1)))
   VAR_22 |= VAR_9 | VAR_10;
  if ((VAR_18 & VAR_0) == VAR_0)
   VAR_22 |= VAR_11 | VAR_12;

  VAR_20 = (VAR_18 & ~VAR_3) | (VAR_15 & VAR_19);
 } else {
  VAR_23 = 0;
  VAR_22 = 0;
 }

 if ((VAR_22 & (VAR_10 | VAR_12)) !=
     (VAR_10 | VAR_12) && VAR_23) {
  *VAR_16 = VAR_20;
 }
 FUNC_2(VAR_14);
 return (VAR_22);
}

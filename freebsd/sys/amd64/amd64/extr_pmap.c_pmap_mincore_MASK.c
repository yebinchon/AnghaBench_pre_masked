
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
typedef int vm_offset_t ;
typedef int pt_entry_t ;
typedef int pmap_t ;
typedef int pd_entry_t ;


 int VAR_0 ;
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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int* FUNC_4 (int ,int) ;
 int* FUNC_5 (int*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

int
FUNC_8(pmap_t VAR_11, vm_offset_t VAR_12, vm_paddr_t *VAR_13)
{
 pd_entry_t *VAR_14;
 pt_entry_t VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
 vm_paddr_t VAR_20;
 int VAR_21;

 VAR_16 = FUNC_2(VAR_11);
 VAR_17 = FUNC_3(VAR_11);
 VAR_19 = FUNC_7(VAR_11);
 VAR_18 = FUNC_6(VAR_11);

 FUNC_0(VAR_11);
 VAR_14 = FUNC_4(VAR_11, VAR_12);
 if (VAR_14 != ((void*)0) && (*VAR_14 & VAR_19)) {
  if (*VAR_14 & VAR_9) {
   VAR_15 = *VAR_14;

   VAR_20 = ((*VAR_14 & VAR_10) | (VAR_12 & VAR_6)) &
       VAR_7;
   VAR_21 = VAR_5;
  } else {
   VAR_15 = *FUNC_5(VAR_14, VAR_12);
   VAR_20 = VAR_15 & VAR_7;
   VAR_21 = 0;
  }
 } else {
  VAR_15 = 0;
  VAR_20 = 0;
  VAR_21 = 0;
 }
 if ((VAR_15 & VAR_19) != 0) {
  VAR_21 |= VAR_0;
  if ((VAR_15 & (VAR_17 | VAR_18)) == (VAR_17 | VAR_18))
   VAR_21 |= VAR_1 | VAR_2;
  if ((VAR_15 & VAR_16) != 0)
   VAR_21 |= VAR_3 | VAR_4;
 }
 if ((VAR_21 & (VAR_2 | VAR_4)) !=
     (VAR_2 | VAR_4) &&
     (VAR_15 & (VAR_8 | VAR_19)) == (VAR_8 | VAR_19)) {
  *VAR_13 = VAR_20;
 }
 FUNC_1(VAR_11);
 return (VAR_21);
}

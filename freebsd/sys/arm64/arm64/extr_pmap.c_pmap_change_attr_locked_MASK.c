
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_size_t ;
typedef scalar_t__ vm_offset_t ;
typedef int pt_entry_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_3 (scalar_t__,int ) ;
 int VAR_15 ;
 int FUNC_4 (char*,int) ;
 int* FUNC_5 (int ,int*,scalar_t__) ;
 int* FUNC_6 (int ,int*,scalar_t__) ;
 int* FUNC_7 (int*,scalar_t__) ;
 int* FUNC_8 (int*,scalar_t__) ;
 int FUNC_9 (int*) ;
 int* FUNC_10 (int ,scalar_t__,int*) ;
 int FUNC_11 (int ,int*,int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__) ;

__attribute__((used)) static int
FUNC_14(vm_offset_t VAR_16, vm_size_t VAR_17, int VAR_18)
{
 vm_offset_t VAR_19, VAR_20, VAR_21;
 pt_entry_t VAR_22, *VAR_23, *VAR_24;
 int VAR_25;

 FUNC_1(VAR_15, VAR_9);
 VAR_19 = FUNC_13(VAR_16);
 VAR_20 = VAR_16 & VAR_10;
 VAR_17 = FUNC_12(VAR_20 + VAR_17);

 if (!FUNC_2(VAR_19) &&
     !(VAR_19 >= VAR_14 && VAR_19 < VAR_12))
  return (VAR_3);

 for (VAR_21 = VAR_19; VAR_21 < VAR_19 + VAR_17; ) {
  VAR_23 = FUNC_10(VAR_15, VAR_21, &VAR_25);
  if (VAR_23 == ((void*)0))
   return (VAR_3);

  if ((FUNC_9(VAR_23) & VAR_0) == FUNC_0(VAR_18)) {




   switch (VAR_25) {
   default:
    FUNC_4("Invalid DMAP table level: %d\n", VAR_25);
   case 1:
    VAR_21 = (VAR_21 & ~VAR_4) + VAR_5;
    break;
   case 2:
    VAR_21 = (VAR_21 & ~VAR_6) + VAR_7;
    break;
   case 3:
    VAR_21 += VAR_11;
    break;
   }
  } else {




   switch (VAR_25) {
   default:
    FUNC_4("Invalid DMAP table level: %d\n", VAR_25);
   case 1:
    VAR_24 = FUNC_5(VAR_15, VAR_23,
        VAR_21 & ~VAR_4);
    if (VAR_24 == ((void*)0))
     return (VAR_3);
    VAR_23 = FUNC_7(VAR_23, VAR_21);
   case 2:
    VAR_24 = FUNC_6(VAR_15, VAR_23,
        VAR_21);
    if (VAR_24 == ((void*)0))
     return (VAR_3);
    VAR_23 = FUNC_8(VAR_23, VAR_21);
   case 3:

    VAR_22 = FUNC_9(VAR_23);
    VAR_22 &= ~VAR_0;
    VAR_22 |= FUNC_0(VAR_18);
    if (VAR_18 == VAR_2)
     VAR_22 |= VAR_1;

    FUNC_11(VAR_15, VAR_23, VAR_22, VAR_21,
        VAR_11);





    if (VAR_18 == VAR_13)
     FUNC_3(VAR_21, VAR_8);

    break;
   }
   VAR_21 += VAR_11;
  }
 }

 return (0);
}

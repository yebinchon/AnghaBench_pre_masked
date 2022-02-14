
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_size_t ;
typedef scalar_t__ vm_offset_t ;
typedef int u_long ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int volatile*,int) ;
 int FUNC_1 (int volatile*,int*,int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;

__attribute__((used)) static void
FUNC_8(vm_offset_t VAR_8, vm_offset_t VAR_9)
{
 volatile u_long *VAR_10;
 u_long VAR_11;
 vm_offset_t VAR_12;
 vm_size_t VAR_13;
 bool VAR_14;

 for (VAR_12 = VAR_8; VAR_12 < VAR_9; VAR_12 += VAR_13) {
  VAR_13 = 0;
  if ((VAR_7 & VAR_0) != 0) {
   VAR_10 = (volatile u_long *)FUNC_6(VAR_12);
   VAR_11 = *VAR_10;
   if ((VAR_11 & VAR_6) != 0)
    VAR_13 = VAR_1;
  }
  if (VAR_13 == 0) {
   VAR_10 = (volatile u_long *)FUNC_5(VAR_12);
   VAR_11 = *VAR_10;
   if ((VAR_11 & VAR_6) != 0)
    VAR_13 = VAR_2;
  }
  if (VAR_13 == 0) {
   VAR_10 = (volatile u_long *)FUNC_7(VAR_12);
   VAR_11 = *VAR_10;
   VAR_13 = VAR_3;
  }
  VAR_14 = 0;
  for (;;) {
   if ((VAR_11 & VAR_4) != 0) {




    FUNC_2();
    VAR_11 = *VAR_10;
    VAR_14 = 1;
    continue;
   }

   if ((VAR_11 & VAR_5) != 0 || VAR_14) {
    if (!FUNC_1(VAR_10, &VAR_11,
        (VAR_11 & ~VAR_5) | VAR_4))
     continue;
    FUNC_4(VAR_12, VAR_13);
    FUNC_0(VAR_10, VAR_4);
   }
   break;
  }
  FUNC_3();
 }
}

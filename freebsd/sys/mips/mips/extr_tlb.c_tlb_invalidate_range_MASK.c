
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
typedef int register_t ;
typedef int pmap_t ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__,int) ;
 int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (scalar_t__,int) ;
 int FUNC_13 (int) ;
 int FUNC_14 () ;
 int FUNC_15 () ;

void
FUNC_16(pmap_t VAR_3, vm_offset_t VAR_4, vm_offset_t VAR_5)
{
 register_t VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 int VAR_13;

 FUNC_0(VAR_4 < VAR_5 || (VAR_5 == 0 && VAR_4 > 0),
     ("tlb_invalidate_range: invalid range"));





 VAR_4 &= ~((1 << VAR_1) - 1);
 VAR_5 = FUNC_12(VAR_5, 1 << VAR_1);

 VAR_10 = FUNC_2();
 VAR_11 = FUNC_4() & VAR_0;

 VAR_6 = FUNC_11(VAR_3);
 VAR_12 = FUNC_1(VAR_4, VAR_6);
 VAR_7 = FUNC_1(VAR_5, VAR_6);




 if (VAR_5 - VAR_4 < VAR_2 << VAR_1 || (VAR_5 == 0 &&
     VAR_4 >= -(VAR_2 << VAR_1))) {





  for (VAR_8 = VAR_12; VAR_8 != VAR_7; VAR_8 += 1 << VAR_1) {
   FUNC_10(0);
   FUNC_8(VAR_8);
   FUNC_14();
   VAR_13 = FUNC_5();
   if (VAR_13 >= 0)
    FUNC_13(VAR_13);
  }
 } else {




  for (VAR_13 = FUNC_7(); VAR_13 < VAR_2; VAR_13++) {
   FUNC_9(VAR_13);
   FUNC_15();
   VAR_8 = FUNC_4();
   if ((VAR_8 & VAR_0) == VAR_6 && (VAR_8 < VAR_7 ||
       VAR_5 == 0)) {




    VAR_9 = FUNC_6();
    if (VAR_8 >= (VAR_12 & ~(VAR_9 <<
        VAR_1)))
     FUNC_13(VAR_13);
   }
  }
 }

 FUNC_8(VAR_11);
 FUNC_3(VAR_10);
}

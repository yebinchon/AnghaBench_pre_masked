
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


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
 int VAR_11 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int) ;
 int VAR_12 ;

__attribute__((used)) static void
FUNC_10(int VAR_13)
{
 uint32_t VAR_14;
 uint32_t VAR_15;

 if (VAR_13 <= 0)
  return;







 switch (VAR_12) {
 case 129:
 case 128:



  VAR_14 = FUNC_8(VAR_10);
  VAR_14 &= ~(VAR_9 << ((VAR_13 - 1) * 8));
  FUNC_9(VAR_10, VAR_14);
  FUNC_7(VAR_10);

  if (VAR_12 == 128) {






    VAR_15 = FUNC_1(VAR_6);
    VAR_15 &= ~(VAR_0 <<
       ((VAR_13 - 1) * 2));
    FUNC_2(VAR_6, VAR_15);
    FUNC_0(VAR_6);
   }

  FUNC_6(5);




  VAR_15 = FUNC_4(VAR_11);
  VAR_15 |= VAR_4 << (VAR_13 - 1);
  FUNC_5(VAR_11, VAR_15);
  FUNC_3(VAR_11);

  if (VAR_12 == 128) {



    VAR_15 = FUNC_1(VAR_3);
    VAR_15 &= ~((uint32_t)VAR_2 >>
       ((VAR_13 - 1) * 4));
    FUNC_2(VAR_3, VAR_15);
    FUNC_0(VAR_3);
   }




  VAR_15 = FUNC_1(VAR_8);
  VAR_15 &= ~(VAR_7 <<
      ((VAR_13 - 1) * 2));
  FUNC_2(VAR_8, VAR_15);
  FUNC_0(VAR_8);

  FUNC_6(10);

  if (VAR_12 == 128) {



   for ( ; ; ) {
    VAR_15 = FUNC_1(VAR_8);
    VAR_15 &= VAR_1 <<
        (VAR_13 - 1);
    if (VAR_15)
     break;
    FUNC_6(10);
   }
  }




  VAR_15 = FUNC_1(VAR_6);
  VAR_15 &= ~(VAR_5 << (VAR_13 - 1));
  FUNC_2(VAR_6, VAR_15);
  FUNC_0(VAR_6);




  VAR_15 = FUNC_4(VAR_11);
  VAR_15 &= ~(VAR_4 << (VAR_13 - 1));
  FUNC_5(VAR_11, VAR_15);
  FUNC_3(VAR_11);

  if (VAR_12 == 128) {







   FUNC_9(VAR_10, VAR_14);
   FUNC_7(VAR_10);
  }
  break;
 default:
  break;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
typedef int uint32_t ;
typedef int platform_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_4 () ;
 int FUNC_5 (int ,scalar_t__,scalar_t__,int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_8 (scalar_t__) ;
 int* FUNC_9 (int,int ) ;
 int FUNC_10 (scalar_t__,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 () ;
 int FUNC_13 (int ,int) ;

void
FUNC_14(platform_t VAR_17)
{
 uint32_t VAR_18, *VAR_19, *VAR_20, VAR_21, VAR_22, VAR_23;
 vm_offset_t VAR_24;




 VAR_23 = FUNC_6();
 VAR_23 &= VAR_3;





 VAR_24 = (FUNC_1(0) - VAR_8) + VAR_5;
 VAR_16 = VAR_10 + VAR_24;
 VAR_20 = FUNC_9(0xffff0000, VAR_9);
 for (VAR_19 = (uint32_t *)VAR_14; VAR_19 < (uint32_t *)VAR_15;
     VAR_19++, VAR_20++) {
  *VAR_20 = *VAR_19;
 }
 FUNC_10((vm_offset_t)VAR_20, VAR_9);
 if (VAR_23 == VAR_4) {

  VAR_22 = FUNC_11(VAR_2);
  VAR_22 &= 0x3f;

  for (VAR_21 = 1; VAR_21 < VAR_12; VAR_21++ ) {
   VAR_18 = FUNC_11(VAR_2);
   VAR_18 &= FUNC_0(VAR_21);
   VAR_18 |= VAR_22 << (VAR_21 * 8);
   FUNC_13(VAR_2, VAR_18);
  }
 } else {

  VAR_22 = 0x01;

  if (VAR_12 > 1) {
   VAR_18 = FUNC_11(VAR_1);
   VAR_18 &= FUNC_0(3);
   VAR_18 |= VAR_22 << 24;
   FUNC_13(VAR_1, VAR_18);
  }

  for (VAR_21 = 2; VAR_21 < VAR_12; VAR_21++ ) {
   VAR_18 = FUNC_11(VAR_2);
   VAR_18 &= FUNC_0(VAR_21);
   VAR_18 |= VAR_22 << (VAR_21 * 8);
   FUNC_13(VAR_2, VAR_18);
  }
 }

 VAR_18 = FUNC_11(VAR_0);
 VAR_18 |= ((0x1 << (VAR_12 - 1)) - 1) << 21;
 FUNC_13(VAR_0, VAR_18);
 VAR_18 = FUNC_11(VAR_0);
 VAR_18 |= 0x01000000;
 FUNC_13(VAR_0, VAR_18);

 FUNC_2(100);
 VAR_18 &= ~(0xf << 21);
 FUNC_13(VAR_0, VAR_18);
 FUNC_2(100);

 FUNC_5(VAR_11, VAR_8, VAR_6, 0);

 for (VAR_21 = 1; VAR_21 < VAR_12; VAR_21++ )
  FUNC_5(VAR_11, FUNC_1(VAR_21), VAR_5,
      FUNC_8((vm_offset_t)VAR_13));

 FUNC_7();

 for (VAR_21 = 1; VAR_21 < VAR_12; VAR_21++ )
  FUNC_5(VAR_11, VAR_7, FUNC_3(VAR_21), 0);


 FUNC_12();
 FUNC_2(10);

 FUNC_4();
}

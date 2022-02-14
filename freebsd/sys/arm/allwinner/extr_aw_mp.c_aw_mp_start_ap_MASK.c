
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int uint32_t ;
typedef int platform_t ;
typedef int bus_space_handle_t ;


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
 int FUNC_0 (int) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ,int ,int ,int ,int *) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ,int ,int) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 () ;

void
FUNC_13(platform_t VAR_18)
{
 bus_space_handle_t VAR_19;
 bus_space_handle_t VAR_20;
 int VAR_21, VAR_22, VAR_23;
 uint32_t VAR_24;

 VAR_23 = FUNC_3();
 if (VAR_23 == VAR_3) {
  if (FUNC_4(VAR_15, VAR_2, VAR_8,
      0, &VAR_19) != 0)
   FUNC_10("Couldn't map the CPUCFG\n");
 } else {
  if (FUNC_4(VAR_15, VAR_4, VAR_8,
      0, &VAR_19) != 0)
   FUNC_10("Couldn't map the CPUCFG\n");
  if (FUNC_4(VAR_15, VAR_13, VAR_14, 0,
      &VAR_20) != 0)
   FUNC_10("Couldn't map the PRCM\n");
 }

 FUNC_8();

 FUNC_7(VAR_15, VAR_19, VAR_7,
     FUNC_11((vm_offset_t)VAR_17));






 for (VAR_21 = 1; VAR_21 < VAR_16; VAR_21++)
  FUNC_7(VAR_15, VAR_19, FUNC_1(VAR_21), 0);


 VAR_24 = FUNC_5(VAR_15, VAR_19, VAR_6);
 for (VAR_21 = 1; VAR_21 < VAR_16; VAR_21++)
  VAR_24 &= ~(1 << VAR_21);
 FUNC_7(VAR_15, VAR_19, VAR_6, VAR_24);


 VAR_24 = FUNC_5(VAR_15, VAR_19, VAR_5);
 for (VAR_21 = 1; VAR_21 < VAR_16; VAR_21++)
  VAR_24 &= ~(1 << VAR_21);
 FUNC_7(VAR_15, VAR_19, VAR_5, VAR_24);


 for (VAR_21 = 1; VAR_21 < VAR_16; VAR_21++)
  for (VAR_22 = 0; VAR_22 <= VAR_11; VAR_22++) {
   if (VAR_23 != VAR_3) {
    FUNC_7(VAR_15, VAR_20,
        FUNC_0(VAR_21), 0xff >> VAR_22);
   } else {
    FUNC_7(VAR_15,
        VAR_19, VAR_1, 0xff >> VAR_22);
   }
  }
 FUNC_2(10000);


 if (VAR_23 != VAR_3) {
  VAR_24 = FUNC_5(VAR_15, VAR_20, VAR_10);
  for (VAR_21 = 0; VAR_21 < VAR_16; VAR_21++)
   VAR_24 &= ~(1 << VAR_21);
  FUNC_7(VAR_15, VAR_20, VAR_10, VAR_24);
 } else {
  VAR_24 = FUNC_5(VAR_15,
      VAR_19, VAR_0);
  VAR_24 &= ~(1 << 0);
  FUNC_7(VAR_15, VAR_19,
      VAR_0, VAR_24);
 }
 FUNC_2(1000);


 for (VAR_21 = 1; VAR_21 < VAR_16; VAR_21++)
  FUNC_7(VAR_15, VAR_19, FUNC_1(VAR_21),
      VAR_12 | VAR_9);


 VAR_24 = FUNC_5(VAR_15, VAR_19, VAR_5);
 for (VAR_21 = 1; VAR_21 < VAR_16; VAR_21++)
  VAR_24 |= (1 << VAR_21);
 FUNC_7(VAR_15, VAR_19, VAR_5, VAR_24);

 FUNC_9();
 FUNC_12();
 FUNC_6(VAR_15, VAR_19, VAR_8);
 if (VAR_23 != VAR_3)
  FUNC_6(VAR_15, VAR_20, VAR_14);
}

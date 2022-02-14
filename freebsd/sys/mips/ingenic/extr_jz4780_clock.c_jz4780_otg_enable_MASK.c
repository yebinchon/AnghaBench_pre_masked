
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct jz4780_clock_softc {int dummy; } ;
typedef int * device_t ;


 int FUNC_0 (struct jz4780_clock_softc*) ;
 int FUNC_1 (struct jz4780_clock_softc*) ;
 int FUNC_2 (struct jz4780_clock_softc*,int ) ;
 int FUNC_3 (struct jz4780_clock_softc*,int ,int) ;
 int FUNC_4 (int) ;
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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_5 (int,int ,int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int * FUNC_6 (int ,int ) ;
 struct jz4780_clock_softc* FUNC_7 (int *) ;
 int VAR_20 ;

int
FUNC_8(void)
{
 device_t VAR_21;
 struct jz4780_clock_softc *VAR_22;
 uint32_t VAR_23;

 VAR_21 = FUNC_6(VAR_20, 0);
 if (VAR_21 == ((void*)0))
  return (-1);

 VAR_22 = FUNC_7(VAR_21);

 FUNC_0(VAR_22);


 VAR_23 = FUNC_2(VAR_22, VAR_2);
 VAR_23 |= VAR_9;


 VAR_23 |= VAR_13 | VAR_14;
 FUNC_3(VAR_22, VAR_2, VAR_23);


 VAR_23 = FUNC_2(VAR_22, VAR_4);
 VAR_23 = FUNC_5(VAR_23, VAR_18, 0);
 VAR_23 = FUNC_5(VAR_23, VAR_19, 0);
 FUNC_3(VAR_22, VAR_4, VAR_23);


 VAR_23 = FUNC_2(VAR_22, VAR_3);
 VAR_23 = FUNC_5(VAR_23, VAR_15, VAR_17);
 VAR_23 |= VAR_16;
 FUNC_3(VAR_22, VAR_3, VAR_23);


 VAR_23 = FUNC_2(VAR_22, VAR_1);
 VAR_23 |= VAR_10;
 VAR_23 |= VAR_6;
 VAR_23 |= VAR_11;
 VAR_23 |= VAR_12;
 VAR_23 &= ~(VAR_7);
 FUNC_3(VAR_22, VAR_1, VAR_23);


 VAR_23 = FUNC_2(VAR_22, VAR_1);
 VAR_23 |= VAR_8;
 FUNC_3(VAR_22, VAR_1, VAR_23);
 FUNC_4(1000);
 VAR_23 = FUNC_2(VAR_22, VAR_1);
 VAR_23 &= ~(VAR_8);
 FUNC_3(VAR_22, VAR_1, VAR_23);


 VAR_23 = FUNC_2(VAR_22, VAR_0);
 VAR_23 |= VAR_5;
 FUNC_3(VAR_22, VAR_0, VAR_23);

 FUNC_1(VAR_22);
 return (0);
}

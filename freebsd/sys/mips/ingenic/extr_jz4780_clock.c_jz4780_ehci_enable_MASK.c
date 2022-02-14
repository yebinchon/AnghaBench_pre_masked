
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
 int * FUNC_5 (int ,int ) ;
 struct jz4780_clock_softc* FUNC_6 (int *) ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_7 (struct jz4780_clock_softc*) ;

int
FUNC_8(void)
{
 device_t VAR_14;
 struct jz4780_clock_softc *VAR_15;
 uint32_t VAR_16;

 VAR_14 = FUNC_5(VAR_13, 0);
 if (VAR_14 == ((void*)0))
  return (-1);

 VAR_15 = FUNC_6(VAR_14);





 if (FUNC_7(VAR_15) != 0)
  return (-1);

 FUNC_0(VAR_15);


 VAR_16 = FUNC_2(VAR_15, VAR_2);
 VAR_16 &= ~(VAR_7);
 FUNC_3(VAR_15, VAR_2, VAR_16);


 VAR_16 = FUNC_2(VAR_15, VAR_0);
 VAR_16 |= VAR_4;
 FUNC_3(VAR_15, VAR_0, VAR_16);


 VAR_16 = FUNC_2(VAR_15, VAR_3);
 VAR_16 |= VAR_5;
 FUNC_3(VAR_15, VAR_3, VAR_16);


 VAR_16 = FUNC_2(VAR_15, VAR_3);
 VAR_16 |= VAR_6;
 FUNC_3(VAR_15, VAR_3, VAR_16);


 VAR_16 = FUNC_2(VAR_15, VAR_3);
 VAR_16 |= VAR_10 | VAR_9;
 FUNC_3(VAR_15, VAR_3, VAR_16);


 VAR_16 = FUNC_2(VAR_15, VAR_2);
 VAR_16 |= VAR_8;
 FUNC_3(VAR_15, VAR_2, VAR_16);
 FUNC_4(1);
 VAR_16 = FUNC_2(VAR_15, VAR_2);
 VAR_16 &= ~(VAR_8);
 FUNC_3(VAR_15, VAR_2, VAR_16);


 VAR_16 = FUNC_2(VAR_15, VAR_1);
 VAR_16 |= VAR_11;
 FUNC_3(VAR_15, VAR_1, VAR_16);

 FUNC_4(300*VAR_12/1000);

 VAR_16 = FUNC_2(VAR_15, VAR_1);
 VAR_16 &= ~(VAR_11);
 FUNC_3(VAR_15, VAR_1, VAR_16);


 FUNC_4(300*VAR_12/1000);

 FUNC_1(VAR_15);
 return (0);
}

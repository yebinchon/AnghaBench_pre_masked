
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
 int FUNC_3 (struct jz4780_clock_softc*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_4 (int ,int ) ;
 struct jz4780_clock_softc* FUNC_5 (int *) ;
 int VAR_2 ;

int
FUNC_6(void)
{
 device_t VAR_3;
 struct jz4780_clock_softc *VAR_4;
 uint32_t VAR_5;

 VAR_3 = FUNC_4(VAR_2, 0);
 if (VAR_3 == ((void*)0))
  return (-1);

 VAR_4 = FUNC_5(VAR_3);
 FUNC_0(VAR_4);


 VAR_5 = FUNC_2(VAR_4, VAR_0);
 VAR_5 |= VAR_1;
 FUNC_3(VAR_4, VAR_0, VAR_5);

 FUNC_1(VAR_4);
 return (0);
}

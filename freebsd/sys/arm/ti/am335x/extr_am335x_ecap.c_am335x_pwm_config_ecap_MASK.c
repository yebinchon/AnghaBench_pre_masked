
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct am335x_ecap_softc {int dummy; } ;
typedef int * device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct am335x_ecap_softc*,int ) ;
 int VAR_3 ;
 int FUNC_1 (struct am335x_ecap_softc*,int ,int) ;
 int FUNC_2 (struct am335x_ecap_softc*,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct am335x_ecap_softc*) ;
 int FUNC_4 (struct am335x_ecap_softc*) ;
 int VAR_9 ;
 int * FUNC_5 (int ,int) ;
 struct am335x_ecap_softc* FUNC_6 (int *) ;

int
FUNC_7(int VAR_10, int VAR_11, int VAR_12)
{
 device_t VAR_13;
 struct am335x_ecap_softc *VAR_14;
 uint16_t VAR_15;

 VAR_13 = FUNC_5(VAR_9, VAR_10);
 if (VAR_13 == ((void*)0))
  return (VAR_8);

 if (VAR_12 > VAR_11)
  return (VAR_7);

 if (VAR_11 == 0)
  return (VAR_7);

 VAR_14 = FUNC_6(VAR_13);
 FUNC_3(VAR_14);

 VAR_15 = FUNC_0(VAR_14, VAR_2);
 VAR_15 |= VAR_4 | VAR_6 | VAR_5;
 FUNC_1(VAR_14, VAR_2, VAR_15);


 FUNC_2(VAR_14, VAR_0, VAR_11 - 1);


 FUNC_2(VAR_14, VAR_1, VAR_12);

 FUNC_2(VAR_14, VAR_3, 0);

 FUNC_4(VAR_14);

 return (0);
}

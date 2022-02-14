
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct epit_softc {int clkfreq; int ctlreg; int dev; int * memres; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct epit_softc*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct epit_softc*,int ,int ) ;
 int FUNC_2 (struct epit_softc*,int ,int) ;
 int * FUNC_3 (int ,int ,int*,int ) ;
 struct epit_softc* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (struct epit_softc*) ;
 int FUNC_8 (struct epit_softc*) ;
 int FUNC_9 () ;
 int FUNC_10 () ;

__attribute__((used)) static int
FUNC_11(device_t VAR_11)
{
 struct epit_softc *VAR_12;
 int VAR_13, VAR_14;
 uint32_t VAR_15;

 VAR_12 = FUNC_4(VAR_11);
 VAR_12->dev = VAR_11;

 VAR_14 = 0;
 VAR_12->memres = FUNC_3(VAR_12->dev, VAR_10, &VAR_14,
     VAR_9);
 if (VAR_12->memres == ((void*)0)) {
  FUNC_6(VAR_12->dev, "could not allocate registers\n");
  return (VAR_0);
 }




 VAR_15 = 129;

 switch (VAR_15) {
 default:
  FUNC_6(VAR_11,
      "Unsupported clock source '%d', using IPG\n", VAR_15);

 case 129:
  VAR_12->clkfreq = FUNC_9();
  break;
 case 130:
  VAR_12->clkfreq = FUNC_10();
  break;
 case 128:
  VAR_12->clkfreq = 32768;
  break;
 }





 FUNC_1(VAR_12, VAR_1, 0);

 VAR_12->ctlreg =
     (VAR_15 << VAR_2) |
     VAR_4 |
     VAR_5 |
     VAR_6 |
     VAR_8 |
     VAR_3;

 FUNC_2(VAR_12, VAR_1, VAR_12->ctlreg | VAR_7);
 while (FUNC_0(VAR_12, VAR_1) & VAR_7)
  continue;




 if (FUNC_5(VAR_12->dev) == 0)
  VAR_13 = FUNC_8(VAR_12);
 else
  VAR_13 = FUNC_7(VAR_12);

 return (VAR_13);
}

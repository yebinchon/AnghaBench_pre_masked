
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct ahc_softc {int chip; int pause; int features; int (* bus_chip_init ) (struct ahc_softc*) ;} ;


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
 int FUNC_0 (struct ahc_softc*) ;
 int FUNC_1 (struct ahc_softc*,int ) ;
 char* FUNC_2 (struct ahc_softc*) ;
 int FUNC_3 (struct ahc_softc*,int ,int) ;
 int FUNC_4 (struct ahc_softc*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (struct ahc_softc*) ;

int
FUNC_8(struct ahc_softc *VAR_12, int VAR_13)
{
 u_int VAR_14;
 u_int VAR_15, VAR_16;
 int VAR_17;
 int VAR_18;






 FUNC_4(VAR_12);
 VAR_16 = 0;
 if ((VAR_12->chip & VAR_1) == VAR_0) {
  u_int VAR_19;





  VAR_19 = FUNC_1(VAR_12, VAR_8);
  FUNC_3(VAR_12, VAR_8, VAR_19 | VAR_9);
  VAR_16 = FUNC_1(VAR_12, VAR_11);
  FUNC_3(VAR_12, VAR_8, VAR_19 & ~VAR_9);
 }
 VAR_15 = FUNC_1(VAR_12, VAR_11);

 FUNC_3(VAR_12, VAR_7, VAR_5 | VAR_12->pause);







 VAR_18 = 1000;
 do {
  FUNC_5(1000);
 } while (--VAR_18 && !(FUNC_1(VAR_12, VAR_7) & VAR_6));

 if (VAR_18 == 0) {
  FUNC_6("%s: WARNING - Failed chip reset!  "
         "Trying to initialize anyway.\n", FUNC_2(VAR_12));
 }
 FUNC_3(VAR_12, VAR_7, VAR_12->pause);


 VAR_14 = FUNC_1(VAR_12, VAR_8) & (VAR_9|VAR_10);

 if ((VAR_12->chip & VAR_2) != 0)
  VAR_14 &= ~VAR_9;
 switch (VAR_14) {
 case 0:

  break;
 case 2:

  VAR_12->features |= VAR_4;
  break;
 case 8:

  VAR_12->features |= VAR_3;
  break;
 default:
  FUNC_6(" Unsupported adapter type.  Ignoring\n");
  return(-1);
 }
 if ((VAR_12->features & VAR_3) != 0) {
  u_int VAR_20;

  VAR_20 = FUNC_1(VAR_12, VAR_8);
  FUNC_3(VAR_12, VAR_8, VAR_20 | VAR_9);
  FUNC_3(VAR_12, VAR_11, VAR_16);
  FUNC_3(VAR_12, VAR_8, VAR_20 & ~VAR_9);
 }
 FUNC_3(VAR_12, VAR_11, VAR_15);

 VAR_17 = 0;
 if (VAR_13 != 0)




  VAR_17 = VAR_12->bus_chip_init(VAR_12);





 return (VAR_17);
}

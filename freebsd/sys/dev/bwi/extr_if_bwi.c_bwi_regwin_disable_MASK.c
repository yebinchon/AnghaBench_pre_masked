
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bwi_softc {int sc_dev; } ;
struct bwi_regwin {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct bwi_softc*,int ) ;
 int FUNC_1 (struct bwi_softc*,int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct bwi_softc*,int,char*,int ) ;
 int VAR_9 ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (struct bwi_softc*) ;
 int FUNC_6 (struct bwi_regwin*) ;
 int FUNC_7 (int ,char*,int ) ;

void
FUNC_8(struct bwi_softc *VAR_10, struct bwi_regwin *VAR_11, uint32_t VAR_12)
{
 uint32_t VAR_13, VAR_14;
 int VAR_15;

 VAR_13 = FUNC_0(VAR_10, VAR_4);




 if (VAR_13 & VAR_8) {
  FUNC_3(VAR_10, VAR_0 | VAR_1,
   "%s was already disabled\n", FUNC_6(VAR_11));
  return;
 }

 VAR_14 = FUNC_5(VAR_10);




 VAR_13 = VAR_5 | VAR_14;
 FUNC_1(VAR_10, VAR_4, VAR_13);





 for (VAR_15 = 0; VAR_15 < 1000; ++VAR_15) {
  VAR_13 = FUNC_0(VAR_10, VAR_4);
  if (VAR_13 & VAR_14)
   break;
  FUNC_2(10);
 }
 if (VAR_15 == 1000) {
  FUNC_7(VAR_10->sc_dev, "%s disable clock timeout\n",
         FUNC_6(VAR_11));
 }

 for (VAR_15 = 0; VAR_15 < 1000; ++VAR_15) {
  uint32_t VAR_16;

  VAR_16 = FUNC_0(VAR_10, VAR_2);
  if ((VAR_16 & VAR_3) == 0)
   break;
  FUNC_2(10);
 }
 if (VAR_15 == 1000) {
  FUNC_7(VAR_10->sc_dev, "%s wait BUSY unset timeout\n",
         FUNC_6(VAR_11));
 }





 VAR_13 = VAR_8 | VAR_14 |
     VAR_5 | VAR_7 |
     FUNC_4(VAR_12, VAR_6);
 FUNC_1(VAR_10, VAR_4, VAR_13);


 FUNC_0(VAR_10, VAR_4);
 FUNC_2(1);


 VAR_13 = VAR_8 | VAR_14 |
     FUNC_4(VAR_12, VAR_6);
 FUNC_1(VAR_10, VAR_4, VAR_13);


 FUNC_0(VAR_10, VAR_4);
 FUNC_2(1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_softc {int sc_dev; struct ath_hal* sc_ah; } ;
struct ath_hal {int dummy; } ;


 int FUNC_0 (struct ath_softc*) ;
 int FUNC_1 (struct ath_softc*) ;
 int FUNC_2 (struct ath_softc*) ;
 int FUNC_3 (struct ath_softc*) ;
 int FUNC_4 (struct ath_hal*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,char*,char const**) ;
 scalar_t__ FUNC_8 (char const*,char*,int) ;

int
FUNC_9(struct ath_softc *VAR_0)
{
 int VAR_1;
 struct ath_hal *VAR_2 = VAR_0->sc_ah;
 const char *VAR_3;




 if (! FUNC_4(VAR_2))
  return (0);





 VAR_1 = FUNC_7(FUNC_5(VAR_0->sc_dev),
     FUNC_6(VAR_0->sc_dev),
     "btcoex_profile",
     &VAR_3);
 if (VAR_1 != 0) {

  return (0);
 }

 if (FUNC_8(VAR_3, "wb195", 5) == 0) {
  VAR_1 = FUNC_0(VAR_0);
 } else if (FUNC_8(VAR_3, "wb222", 5) == 0) {
  VAR_1 = FUNC_1(VAR_0);
 } else if (FUNC_8(VAR_3, "wb225", 5) == 0) {
  VAR_1 = FUNC_2(VAR_0);
 } else if (FUNC_8(VAR_3, "wb335", 5) == 0) {
  VAR_1 = FUNC_3(VAR_0);
 } else {
  return (0);
 }




 if (VAR_1 != 0)
  return (VAR_1);

 return (0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct elink_params {struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;


 scalar_t__ FUNC_0 (struct bxe_softc*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct bxe_softc*,char*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_3 (struct bxe_softc*,int ) ;
 int FUNC_4 (struct bxe_softc*,scalar_t__,int) ;
 scalar_t__ FUNC_5 (struct bxe_softc*) ;

__attribute__((used)) static void FUNC_6(struct elink_params *VAR_12, uint32_t VAR_13)
{
 struct bxe_softc *VAR_14 = VAR_12->sc;
 uint32_t VAR_15 = FUNC_5(VAR_14);







 if (((FUNC_0(VAR_14) == VAR_1) ||
      (FUNC_0(VAR_14) == VAR_0) ||
      (FUNC_0(VAR_14) == VAR_2)) &&
     VAR_15 &&
     (FUNC_3(VAR_14, VAR_9) &
      VAR_7)) {
  FUNC_2(VAR_14,
     "XMAC already out of reset in 4-port mode\n");
  return;
 }


 FUNC_4(VAR_14, VAR_4 + VAR_5,
        VAR_7);
 FUNC_1(1000 * 1);

 FUNC_4(VAR_14, VAR_4 + VAR_6,
        VAR_7);
 if (VAR_15) {
  FUNC_2(VAR_14, "Init XMAC to 2 ports x 10G per path\n");


  FUNC_4(VAR_14, VAR_10, 1);


  FUNC_4(VAR_14, VAR_11, 3);
 } else {

  FUNC_4(VAR_14, VAR_10, 0);
  if (VAR_13 == VAR_3) {
   FUNC_2(VAR_14,
      "Init XMAC to 10G x 1 port per path\n");

   FUNC_4(VAR_14, VAR_11, 3);
  } else {
   FUNC_2(VAR_14,
      "Init XMAC to 20G x 2 ports per path\n");

   FUNC_4(VAR_14, VAR_11, 1);
  }
 }

 FUNC_4(VAR_14, VAR_4 + VAR_5,
        VAR_8);
 FUNC_1(1000 * 1);

 FUNC_4(VAR_14, VAR_4 + VAR_6,
        VAR_8);

}

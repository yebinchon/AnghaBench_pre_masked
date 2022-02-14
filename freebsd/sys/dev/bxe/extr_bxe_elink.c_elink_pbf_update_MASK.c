
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct elink_params {int port; struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;
typedef int elink_status_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct bxe_softc*,char*,scalar_t__) ;
 int FUNC_2 (struct bxe_softc*,char*,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_3 (struct bxe_softc*,scalar_t__) ;
 int FUNC_4 (struct bxe_softc*,scalar_t__,int) ;

__attribute__((used)) static elink_status_t FUNC_5(struct elink_params *VAR_15, uint32_t VAR_16,
       uint32_t VAR_17)
{
 struct bxe_softc *VAR_18 = VAR_15->sc;
 uint8_t VAR_19 = VAR_15->port;
 uint32_t VAR_20, VAR_21;
 uint32_t VAR_22 = 1000;


 FUNC_4(VAR_18, VAR_9 + VAR_19*4, 0x1);


 VAR_20 = FUNC_3(VAR_18, VAR_13 + VAR_19*4);
 VAR_21 = FUNC_3(VAR_18, VAR_12 + VAR_19*8);
 FUNC_2(VAR_18, "init_crd 0x%x  crd 0x%x\n", VAR_20, VAR_21);

 while ((VAR_20 != VAR_21) && VAR_22) {
  FUNC_0(1000 * 5);
  VAR_21 = FUNC_3(VAR_18, VAR_12 + VAR_19*8);
  VAR_22--;
 }
 VAR_21 = FUNC_3(VAR_18, VAR_12 + VAR_19*8);
 if (VAR_20 != VAR_21) {
  FUNC_2(VAR_18, "BUG! init_crd 0x%x != crd 0x%x\n",
     VAR_20, VAR_21);
  return VAR_7;
 }

 if (VAR_16 & VAR_2 ||
     VAR_17 == VAR_3 ||
     VAR_17 == VAR_4 ||
     VAR_17 == VAR_5 ||
     VAR_17 == VAR_6) {
  FUNC_4(VAR_18, VAR_14 + VAR_19*4, 1);

  FUNC_4(VAR_18, VAR_11 + VAR_19*4, 0);

  VAR_20 = 778;

 } else {
  uint32_t VAR_23 = (VAR_0 +
         VAR_1)/16;
  FUNC_4(VAR_18, VAR_14 + VAR_19*4, 0);

  FUNC_4(VAR_18, VAR_11 + VAR_19*4, VAR_23);

  switch (VAR_17) {
  case 128:
   VAR_20 = VAR_23 + 553 - 22;
   break;
  default:
   FUNC_1(VAR_18, "Invalid line_speed 0x%x\n",
      VAR_17);
   return VAR_7;
  }
 }
 FUNC_4(VAR_18, VAR_13 + VAR_19*4, VAR_20);
 FUNC_2(VAR_18, "PBF updated to speed %d credit %d\n",
   VAR_17, VAR_20);


 FUNC_4(VAR_18, VAR_10 + VAR_19*4, 0x1);
 FUNC_0(1000 * 5);
 FUNC_4(VAR_18, VAR_10 + VAR_19*4, 0x0);


 FUNC_4(VAR_18, VAR_9 + VAR_19*4, 0x0);
 return VAR_8;
}

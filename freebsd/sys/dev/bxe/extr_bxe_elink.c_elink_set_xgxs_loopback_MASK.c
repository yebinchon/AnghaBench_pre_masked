
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct elink_phy {scalar_t__ req_line_speed; } ;
struct elink_params {int port; struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct bxe_softc*,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (struct bxe_softc*,scalar_t__) ;
 int FUNC_4 (struct bxe_softc*,scalar_t__,int) ;
 int FUNC_5 (struct bxe_softc*,struct elink_phy*,int,scalar_t__,int*) ;
 int FUNC_6 (struct bxe_softc*,struct elink_phy*,int,scalar_t__,int) ;
 int FUNC_7 (struct elink_params*,struct elink_phy*) ;

__attribute__((used)) static void FUNC_8(struct elink_phy *VAR_9,
        struct elink_params *VAR_10)
{
 uint8_t VAR_11 = VAR_10->port;
 struct bxe_softc *VAR_12 = VAR_10->sc;

 if (VAR_9->req_line_speed != VAR_0) {
  uint32_t VAR_13 = 0;

  FUNC_2(VAR_12, "XGXS 10G loopback enable\n");

  if (!FUNC_0(VAR_12)) {

   VAR_13 = FUNC_3(VAR_12, (VAR_8 +
            VAR_11*0x18));

   FUNC_4(VAR_12, VAR_8 + VAR_11*0x18,
          0x5);
  }

  FUNC_6(VAR_12, VAR_9,
     5,
     (VAR_5 +
      (VAR_1 & 0xf)),
     0x2800);

  FUNC_6(VAR_12, VAR_9,
     5,
     (VAR_6 +
      (VAR_2 & 0xf)),
     0x6041);
  FUNC_1(1000 * 200);

  FUNC_7(VAR_10, VAR_9);

  if (!FUNC_0(VAR_12)) {

   FUNC_4(VAR_12, VAR_8 + VAR_11*0x18,
          VAR_13);
  }
 } else {
  uint16_t VAR_14;
  FUNC_2(VAR_12, "XGXS 1G loopback enable\n");
  FUNC_5(VAR_12, VAR_9, 5,
    (VAR_7 +
    (VAR_3 & 0xf)),
    &VAR_14);
  FUNC_6(VAR_12, VAR_9, 5,
     (VAR_7 +
     (VAR_3 & 0xf)),
     VAR_14 |
     VAR_4);
 }
}

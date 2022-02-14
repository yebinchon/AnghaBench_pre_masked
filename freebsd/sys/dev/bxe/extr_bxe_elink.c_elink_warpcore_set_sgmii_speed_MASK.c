
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
struct elink_phy {int req_line_speed; scalar_t__ req_duplex; } ;
struct elink_params {struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct bxe_softc*,char*) ;
 int FUNC_1 (struct bxe_softc*,char*,int) ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct bxe_softc*,struct elink_phy*,int ,int ,int*) ;
 int FUNC_3 (struct bxe_softc*,struct elink_phy*,int ,int ,int) ;
 int FUNC_4 (struct bxe_softc*,struct elink_phy*,int ,int ,int) ;
 int FUNC_5 (struct bxe_softc*,struct elink_phy*,int ,int ,int) ;
 int FUNC_6 (struct elink_phy*,struct elink_params*) ;

__attribute__((used)) static void FUNC_7(struct elink_phy *VAR_7,
        struct elink_params *VAR_8,
        uint8_t VAR_9,
        uint8_t VAR_10)
{
 struct bxe_softc *VAR_11 = VAR_8->sc;
 uint16_t VAR_12, VAR_13, VAR_14;


 FUNC_3(VAR_11, VAR_7, VAR_2,
      VAR_4, ~(3<<13));

 FUNC_6(VAR_7, VAR_8);

 if (VAR_10 || VAR_7->req_line_speed == VAR_1) {

  FUNC_4(VAR_11, VAR_7, VAR_2,
      VAR_3,
      0x1000);
  FUNC_0(VAR_11, "set SGMII AUTONEG\n");
 } else {
  FUNC_2(VAR_11, VAR_7, VAR_2,
    VAR_3, &VAR_12);
  VAR_12 &= 0xcebf;
  switch (VAR_7->req_line_speed) {
  case 130:
   break;
  case 129:
   VAR_12 |= 0x2000;
   break;
  case 128:
   VAR_12 |= 0x0040;
   break;
  default:
   FUNC_1(VAR_11,
      "Speed not supported: 0x%x\n", VAR_7->req_line_speed);
   return;
  }

  if (VAR_7->req_duplex == VAR_0)
   VAR_12 |= 0x0100;

  FUNC_5(VAR_11, VAR_7, VAR_2,
    VAR_3, VAR_12);

  FUNC_1(VAR_11, "set SGMII force speed %d\n",
          VAR_7->req_line_speed);
  FUNC_2(VAR_11, VAR_7, VAR_2,
    VAR_3, &VAR_12);
  FUNC_1(VAR_11, "  (readback) %x\n", VAR_12);
 }


 FUNC_2(VAR_11, VAR_7, VAR_2,
   VAR_5, &VAR_13);
 if (VAR_9)
  VAR_13 = 1;
 else
  VAR_13 &= 0xff4a;

 FUNC_5(VAR_11, VAR_7, VAR_2,
   VAR_5,
   VAR_13);


 FUNC_2(VAR_11, VAR_7, VAR_2,
   VAR_6, &VAR_14);
 FUNC_5(VAR_11, VAR_7, VAR_2,
   VAR_6,
   (VAR_14 & ~(1<<2)));


 FUNC_5(VAR_11, VAR_7, VAR_2,
   VAR_6,
   (VAR_14 | (1<<2)));


 FUNC_5(VAR_11, VAR_7, VAR_2,
   VAR_5,
   (VAR_13 | 0x10));
}

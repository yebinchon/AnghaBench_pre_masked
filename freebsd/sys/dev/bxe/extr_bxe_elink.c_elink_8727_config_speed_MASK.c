
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct elink_phy {scalar_t__ req_line_speed; scalar_t__ media_type; int speed_cap_mask; } ;
struct elink_params {struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,char*) ;
 int FUNC_1 (struct bxe_softc*,char*,int) ;
 scalar_t__ FUNC_2 (struct elink_params*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (struct bxe_softc*,struct elink_phy*,int ,int ,int*) ;
 int FUNC_4 (struct bxe_softc*,struct elink_phy*,int ,int ,int) ;

__attribute__((used)) static void FUNC_5(struct elink_phy *VAR_12,
        struct elink_params *VAR_13)
{
 struct bxe_softc *VAR_14 = VAR_13->sc;
 uint16_t VAR_15, VAR_16;

 if ((VAR_12->req_line_speed == VAR_1) ||
     (VAR_12->media_type == VAR_0)) {
  FUNC_0(VAR_14, "Setting 1G force\n");
  FUNC_4(VAR_14, VAR_12,
     VAR_6, VAR_9, 0x40);
  FUNC_4(VAR_14, VAR_12,
     VAR_6, VAR_7, 0xD);
  FUNC_3(VAR_14, VAR_12,
    VAR_6, VAR_7, &VAR_15);
  FUNC_1(VAR_14, "1.7 = 0x%x\n", VAR_15);



  if (FUNC_2(VAR_13)) {
   FUNC_3(VAR_14, VAR_12,
     VAR_6,
     VAR_8, &VAR_16);
   VAR_16 |= (3<<10);
   FUNC_4(VAR_14, VAR_12,
      VAR_6,
      VAR_8, VAR_16);
  }
 } else if ((VAR_12->req_line_speed == VAR_2) &&
     ((VAR_12->speed_cap_mask &
       VAR_11)) &&
     ((VAR_12->speed_cap_mask &
        VAR_10) !=
     VAR_10)) {

  FUNC_0(VAR_14, "Setting 1G clause37\n");
  FUNC_4(VAR_14, VAR_12,
     VAR_3, VAR_4, 0);
  FUNC_4(VAR_14, VAR_12,
     VAR_3, VAR_5, 0x1300);
 } else {



  FUNC_4(VAR_14, VAR_12,
     VAR_3, VAR_4,
     0x0020);
  FUNC_4(VAR_14, VAR_12,
     VAR_3, VAR_5, 0x0100);
  FUNC_4(VAR_14, VAR_12,
     VAR_6, VAR_9, 0x2040);
  FUNC_4(VAR_14, VAR_12,
     VAR_6, VAR_7,
     0x0008);
 }
}

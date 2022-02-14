
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct elink_vars {int line_speed; scalar_t__ duplex; int link_status; } ;
struct elink_phy {int dummy; } ;
struct elink_params {int feature_config_flags; struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct bxe_softc*,char*,int) ;
 int FUNC_1 (struct bxe_softc*,char*,int,int) ;
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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_2 (struct bxe_softc*,struct elink_phy*,int ,int,int*) ;
 int FUNC_3 (struct bxe_softc*,struct elink_phy*,int ,int ,int) ;
 int FUNC_4 (struct elink_phy*,struct elink_params*,struct elink_vars*) ;
 int FUNC_5 (struct bxe_softc*,struct elink_phy*,struct elink_vars*) ;
 int FUNC_6 (struct elink_phy*,struct elink_params*,struct elink_vars*) ;
 scalar_t__ FUNC_7 (struct elink_phy*) ;

__attribute__((used)) static uint8_t FUNC_8(struct elink_phy *VAR_28,
      struct elink_params *VAR_29,
      struct elink_vars *VAR_30)
{
 struct bxe_softc *VAR_31 = VAR_29->sc;
 uint16_t VAR_32, VAR_33, VAR_34;
 uint8_t VAR_35 = 0;




 FUNC_2(VAR_31, VAR_28,
   VAR_17, 0xFFFA, &VAR_33);
 FUNC_2(VAR_31, VAR_28,
   VAR_26, VAR_27,
   &VAR_34);
 FUNC_0(VAR_31, "BCM848xx: PMD_SIGNAL 1.a811 = 0x%x\n", VAR_34);


 if (VAR_34 & (1<<11)) {
  VAR_30->line_speed = VAR_6;
  VAR_30->duplex = VAR_0;
  VAR_35 = 1;
  FUNC_5(VAR_31, VAR_28, VAR_30);
 } else {
  uint16_t VAR_36, VAR_37;


  FUNC_3(VAR_31, VAR_28,
     VAR_17,
     VAR_19, 0xf42);


  FUNC_2(VAR_31, VAR_28,
    VAR_17,
    VAR_20,
    &VAR_36);

  FUNC_0(VAR_31, "Legacy speed status = 0x%x\n",
     VAR_36);
  VAR_35 = ((VAR_36 & (1<<11)) == (1<<11));
  VAR_37 = (VAR_36 & (3<<9));
  if (VAR_37 == (0<<9))
   VAR_30->line_speed = VAR_3;
  else if (VAR_37 == (1<<9))
   VAR_30->line_speed = VAR_4;
  else if (VAR_37 == (2<<9))
   VAR_30->line_speed = VAR_5;
  else {
   VAR_30->line_speed = 0;
   VAR_35 = 0;
  }

  if (VAR_29->feature_config_flags &
   VAR_2) {
   uint16_t VAR_38;

   FUNC_2(VAR_31, VAR_28,
     VAR_17,
     VAR_22,
     &VAR_38);

   VAR_35 |= ((VAR_38 & 0x3040) == 0x40);
  }

  if (VAR_35) {
   if (VAR_36 & (1<<8))
    VAR_30->duplex = VAR_0;
   else
    VAR_30->duplex = VAR_1;

   FUNC_1(VAR_31,
      "Link is up in %dMbps, is_duplex_full= %d\n",
      VAR_30->line_speed,
      (VAR_30->duplex == VAR_0));

   FUNC_2(VAR_31, VAR_28,
     VAR_17,
     VAR_23,
     &VAR_32);
   if (VAR_32 & (1<<5))
    VAR_30->link_status |=
     VAR_7;
   FUNC_2(VAR_31, VAR_28,
     VAR_17,
     VAR_21,
     &VAR_32);
   if ((VAR_32 & (1<<0)) == 0)
    VAR_30->link_status |=
     VAR_16;
  }
 }
 if (VAR_35) {
  FUNC_0(VAR_31, "BCM848x3: link speed is %d\n",
      VAR_30->line_speed);
  FUNC_6(VAR_28, VAR_29, VAR_30);


  FUNC_2(VAR_31, VAR_28, VAR_17,
    VAR_24, &VAR_32);
  if (VAR_32 & (1<<5))
   VAR_30->link_status |=
    VAR_15;
  if (VAR_32 & (1<<6))
   VAR_30->link_status |=
    VAR_14;
  if (VAR_32 & (1<<7))
   VAR_30->link_status |=
    VAR_12;
  if (VAR_32 & (1<<8))
   VAR_30->link_status |=
    VAR_11;
  if (VAR_32 & (1<<9))
   VAR_30->link_status |=
    VAR_10;

  FUNC_2(VAR_31, VAR_28, VAR_17,
    VAR_18, &VAR_32);

  if (VAR_32 & (1<<10))
   VAR_30->link_status |=
    VAR_9;
  if (VAR_32 & (1<<11))
   VAR_30->link_status |=
    VAR_8;

  FUNC_2(VAR_31, VAR_28, VAR_17,
    VAR_25, &VAR_32);

  if (VAR_32 & (1<<11))
   VAR_30->link_status |=
    VAR_13;


  if (FUNC_7(VAR_28))
   FUNC_4(VAR_28, VAR_29, VAR_30);
 }

 return VAR_35;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct elink_vars {int line_speed; scalar_t__ duplex; int link_status; } ;
struct elink_phy {int flags; } ;
struct elink_params {struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (struct bxe_softc*,char*,int) ;
 int FUNC_1 (struct bxe_softc*,char*,int,int) ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
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
 int FUNC_2 (struct bxe_softc*,struct elink_phy*,int,int*) ;
 int FUNC_3 (struct elink_phy*,struct elink_params*,struct elink_vars*) ;
 scalar_t__ FUNC_4 (struct elink_params*) ;
 int FUNC_5 (struct elink_phy*,struct elink_params*,struct elink_vars*) ;

__attribute__((used)) static uint8_t FUNC_6(struct elink_phy *VAR_17,
        struct elink_params *VAR_18,
        struct elink_vars *VAR_19)
{
 struct bxe_softc *VAR_20 = VAR_18->sc;
 uint16_t VAR_21;
 uint8_t VAR_22 = 0;
 uint16_t VAR_23, VAR_24;


 FUNC_2(VAR_20, VAR_17,
   VAR_15,
   &VAR_23);
 FUNC_0(VAR_20, "54618SE read_status: 0x%x\n", VAR_23);


 FUNC_2(VAR_20, VAR_17,
   VAR_16,
   &VAR_21);

 VAR_22 = ((VAR_23 & (1<<2)) == (1<<2));

 if (VAR_22) {
  VAR_24 = (VAR_23 & (7<<8));
  if (VAR_24 == (7<<8)) {
   VAR_19->line_speed = VAR_5;
   VAR_19->duplex = VAR_0;
  } else if (VAR_24 == (6<<8)) {
   VAR_19->line_speed = VAR_5;
   VAR_19->duplex = VAR_1;
  } else if (VAR_24 == (5<<8)) {
   VAR_19->line_speed = VAR_4;
   VAR_19->duplex = VAR_0;
  }

  else if (VAR_24 == (3<<8)) {
   VAR_19->line_speed = VAR_4;
   VAR_19->duplex = VAR_1;
  } else if (VAR_24 == (2<<8)) {
   VAR_19->line_speed = VAR_3;
   VAR_19->duplex = VAR_0;
  } else if (VAR_24 == (1<<8)) {
   VAR_19->line_speed = VAR_3;
   VAR_19->duplex = VAR_1;
  } else
   VAR_19->line_speed = 0;

  FUNC_1(VAR_20,
     "Link is up in %dMbps, is_duplex_full= %d\n",
     VAR_19->line_speed,
     (VAR_19->duplex == VAR_0));


  FUNC_2(VAR_20, VAR_17,
    0x01,
    &VAR_21);
  if (VAR_21 & (1<<5))
   VAR_19->link_status |=
    VAR_6;
  FUNC_2(VAR_20, VAR_17,
    0x06,
    &VAR_21);
  if ((VAR_21 & (1<<0)) == 0)
   VAR_19->link_status |=
    VAR_14;

  FUNC_0(VAR_20, "BCM54618SE: link speed is %d\n",
      VAR_19->line_speed);

  FUNC_5(VAR_17, VAR_18, VAR_19);

  if (VAR_19->link_status & VAR_6) {

   FUNC_2(VAR_20, VAR_17, 0x5, &VAR_21);

   if (VAR_21 & (1<<5))
    VAR_19->link_status |=
      VAR_13;
   if (VAR_21 & (1<<6))
    VAR_19->link_status |=
      VAR_12;
   if (VAR_21 & (1<<7))
    VAR_19->link_status |=
      VAR_11;
   if (VAR_21 & (1<<8))
    VAR_19->link_status |=
      VAR_10;
   if (VAR_21 & (1<<9))
    VAR_19->link_status |=
      VAR_9;

   FUNC_2(VAR_20, VAR_17, 0xa, &VAR_21);
   if (VAR_21 & (1<<10))
    VAR_19->link_status |=
      VAR_8;
   if (VAR_21 & (1<<11))
    VAR_19->link_status |=
      VAR_7;

   if ((VAR_17->flags & VAR_2) &&
       FUNC_4(VAR_18))
    FUNC_3(VAR_17, VAR_18, VAR_19);
  }
 }
 return VAR_22;
}

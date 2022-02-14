
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct elink_vars {int link_status; int duplex; int flow_ctrl; int rx_tx_asic_rst; } ;
struct elink_phy {int flags; scalar_t__ req_line_speed; int supported; scalar_t__ media_type; } ;
struct elink_params {scalar_t__ loopback_mode; struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;
typedef int elink_status_t ;


 int VAR_0 ;
 int FUNC_0 (struct bxe_softc*,char*,int) ;
 int FUNC_1 (struct bxe_softc*,char*,int,int) ;
 int FUNC_2 (struct bxe_softc*,char*,int,int ,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (struct elink_params*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
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
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_4 (struct bxe_softc*,struct elink_phy*,int ,int,int*) ;
 int FUNC_5 (struct elink_phy*,struct elink_params*,struct elink_vars*) ;
 int FUNC_6 (struct elink_phy*,struct elink_params*,struct elink_vars*,int,int,int) ;
 int FUNC_7 (struct elink_phy*,struct elink_params*) ;

__attribute__((used)) static elink_status_t FUNC_8(struct elink_phy *VAR_31,
         struct elink_params *VAR_32,
         struct elink_vars *VAR_33)
{
 struct bxe_softc *VAR_34 = VAR_32->sc;
 uint8_t VAR_35;
 uint16_t VAR_36, VAR_37, VAR_38, VAR_39 = VAR_0;
 elink_status_t VAR_40 = VAR_5;
 VAR_35 = FUNC_7(VAR_31, VAR_32);

 if ((VAR_32->loopback_mode) &&
     (VAR_31->flags & VAR_2)) {
  FUNC_4(VAR_34, VAR_31, VAR_23,
    VAR_25, &VAR_38);
  FUNC_4(VAR_34, VAR_31, VAR_23,
    VAR_25, &VAR_38);
  VAR_38 &= 0x1;
  FUNC_0(VAR_34, "params->loopback_mode link_up read = %x\n",
    VAR_38);
 } else if ((VAR_31->req_line_speed > VAR_3) &&
  (VAR_31->supported & VAR_7)) {
  uint16_t VAR_41;
  FUNC_4(VAR_34, VAR_31, VAR_23,
    1, &VAR_41);
  FUNC_4(VAR_34, VAR_31, VAR_23,
    1, &VAR_38);
  FUNC_1(VAR_34, "PCS RX link status = 0x%x-->0x%x\n",
          VAR_41, VAR_38);
  VAR_38 &= (1<<2);
  if (VAR_38)
   FUNC_5(VAR_31, VAR_32, VAR_33);
 } else {
  FUNC_4(VAR_34, VAR_31, VAR_23,
    VAR_26,
    &VAR_36);
  FUNC_0(VAR_34, "0x81d1 = 0x%x\n", VAR_36);

  VAR_38 = ((VAR_36 >> 8) |
      (VAR_36 >> 12) |
      (VAR_36)) &
   (1 << VAR_35);
  if (VAR_31->supported & VAR_6) {
   uint16_t VAR_42;
   FUNC_4(VAR_34, VAR_31, VAR_14,
     VAR_16, &VAR_42);
   FUNC_4(VAR_34, VAR_31, VAR_14,
     VAR_16, &VAR_42);
   VAR_38 |= (VAR_42 & (1<<2));
   FUNC_1(VAR_34,"an_link = %x, link_up = %x\n", VAR_42,
      VAR_38);
  }
  if (VAR_38 && FUNC_3(VAR_32)) {
   uint16_t VAR_43, VAR_44;
   if (VAR_31->req_line_speed == VAR_4) {

    FUNC_4(VAR_34, VAR_31, VAR_23,
      VAR_29,
      &VAR_44);
    if (VAR_44 & ((1<<12)<<VAR_35))
     VAR_33->link_status |=
     VAR_8;


    FUNC_4(VAR_34, VAR_31, VAR_23,
      VAR_30,
      &VAR_43);
    if (VAR_43 & (1<<15))
     VAR_33->link_status |=
     VAR_12;
    FUNC_1(VAR_34, "pd = %x, link_status = %x\n",
      VAR_43, VAR_33->link_status);
   }
   FUNC_5(VAR_31, VAR_32, VAR_33);
   VAR_33->duplex = VAR_39;
   FUNC_2(VAR_34, " ELINK_SINGLE_MEDIA_DIRECT duplex %x  flow_ctrl 0x%x link_status 0x%x\n",
     VAR_33->duplex, VAR_33->flow_ctrl, VAR_33->link_status);
  }
 }
 FUNC_2(VAR_34, "duplex %x  flow_ctrl 0x%x link_status 0x%x\n",
   VAR_33->duplex, VAR_33->flow_ctrl, VAR_33->link_status);
 if ((VAR_33->link_status & VAR_8) &&
     FUNC_3(VAR_32)) {
  uint16_t VAR_45;

  FUNC_4(VAR_34, VAR_31, VAR_14,
    VAR_15, &VAR_45);

  if (VAR_45 & VAR_17)
   VAR_33->link_status |=
    VAR_9;
  if (VAR_45 & (VAR_19 |
      VAR_18))
   VAR_33->link_status |=
    VAR_10;
  FUNC_1(VAR_34, "val = %x, link_status = %x\n",
    VAR_45, VAR_33->link_status);
  FUNC_4(VAR_34, VAR_31, VAR_23,
    VAR_24, &VAR_45);

  if (VAR_45 & VAR_22)
   VAR_33->link_status |=
    VAR_11;
  if (VAR_45 & (VAR_20 | VAR_21))
   VAR_33->link_status |=
    VAR_10;
  FUNC_1(VAR_34, "val = %x, link_status = %x\n",
    VAR_45, VAR_33->link_status);

 }


 if (VAR_35 < 2) {
  FUNC_4(VAR_34, VAR_31, VAR_23,
    VAR_27, &VAR_37);
 } else {
  FUNC_4(VAR_34, VAR_31, VAR_23,
    VAR_28, &VAR_37);
 }
 FUNC_1(VAR_34, "lane %d gp_speed 0x%x\n", VAR_35, VAR_37);

 if ((VAR_35 & 1) == 0)
  VAR_37 <<= 8;
 VAR_37 &= 0x3f00;
 VAR_38 = !!VAR_38;


 VAR_40 = FUNC_6(VAR_31, VAR_32, VAR_33, VAR_38, VAR_37,
      VAR_39);


 if ((!VAR_38) && (VAR_31->media_type == VAR_1) &&
     (!(VAR_31->flags & VAR_2)))
  VAR_33->rx_tx_asic_rst = VAR_13;

 FUNC_2(VAR_34, "duplex %x  flow_ctrl 0x%x link_status 0x%x\n",
     VAR_33->duplex, VAR_33->flow_ctrl, VAR_33->link_status);
 return VAR_40;
}

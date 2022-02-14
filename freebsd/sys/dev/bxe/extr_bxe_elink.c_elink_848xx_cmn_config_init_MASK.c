
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct elink_vars {int dummy; } ;
struct elink_phy {scalar_t__ req_line_speed; int speed_cap_mask; scalar_t__ req_duplex; int supported; } ;
struct elink_params {struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;
typedef int elink_status_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct bxe_softc*,char*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
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
 int FUNC_1 (struct elink_phy*,struct elink_params*,int ) ;
 int FUNC_2 (struct bxe_softc*,struct elink_phy*,int ,int ,int*) ;
 int FUNC_3 (struct bxe_softc*,struct elink_phy*,int ,int ,int) ;
 int FUNC_4 (struct bxe_softc*,struct elink_phy*,int ,int ,int) ;
 int FUNC_5 (struct elink_params*,struct elink_phy*,struct elink_vars*) ;
 int FUNC_6 (struct elink_phy*) ;

__attribute__((used)) static elink_status_t FUNC_7(struct elink_phy *VAR_27,
           struct elink_params *VAR_28,
           struct elink_vars *VAR_29)
{
 struct bxe_softc *VAR_30 = VAR_28->sc;
 uint16_t VAR_31, VAR_32, VAR_33;

 FUNC_1(VAR_27, VAR_28, VAR_1);
 FUNC_4(VAR_30, VAR_27,
    VAR_19, VAR_20, 0x0000);


 FUNC_2(VAR_30, VAR_27,
   VAR_12, VAR_13,
   &VAR_32);

 FUNC_5(VAR_28, VAR_27, VAR_29);
 FUNC_2(VAR_30, VAR_27,
   VAR_12,
   VAR_16,
   &VAR_33);
 FUNC_2(VAR_30, VAR_27,
   VAR_12, VAR_17,
   &VAR_31);

 VAR_31 &= ~((1<<6) | (1<<8) | (1<<9) | (1<<12) | (1<<13));
 VAR_33 &= ~((1<<5) | (1<<6) | (1<<7) | (1<<8));

 if (((VAR_27->req_line_speed == VAR_6) &&
      (VAR_27->speed_cap_mask &
      VAR_26)) ||
     (VAR_27->req_line_speed == VAR_4)) {
  VAR_32 |= (1<<8);
  VAR_31 |= (1<<9 | 1<<12);
  if (VAR_27->req_duplex == VAR_0)
   VAR_32 |= (1<<9);
  FUNC_0(VAR_30, "Advertising 1G\n");
 } else
  VAR_32 &= ~((1<<8) | (1<<9));

 FUNC_4(VAR_30, VAR_27,
    VAR_12, VAR_13,
    VAR_32);


 if (VAR_27->req_line_speed == VAR_6) {
  if (VAR_27->speed_cap_mask &
      VAR_21) {


   VAR_31 |= (1<<9 | 1<<12);
   VAR_33 |= (1<<8);
   FUNC_0(VAR_30, "Advertising 100M-FD\n");
  }

  if (VAR_27->speed_cap_mask &
      VAR_22) {


   VAR_31 |= (1<<9 | 1<<12);
   VAR_33 |= (1<<7);
   FUNC_0(VAR_30, "Advertising 100M-HD\n");
  }

  if ((VAR_27->speed_cap_mask &
       VAR_24) &&
      (VAR_27->supported & VAR_10)) {
   VAR_33 |= (1<<6);
   VAR_31 |= (1<<9 | 1<<12);
   FUNC_0(VAR_30, "Advertising 10M-FD\n");
  }

  if ((VAR_27->speed_cap_mask &
       VAR_25) &&
      (VAR_27->supported & VAR_11)) {
   VAR_33 |= (1<<5);
   VAR_31 |= (1<<9 | 1<<12);
   FUNC_0(VAR_30, "Advertising 10M-HD\n");
  }
 }


 if ((VAR_27->req_line_speed == VAR_3) &&
     (VAR_27->supported &
      (VAR_9 |
       VAR_8))) {
  VAR_31 |= (1<<13);

  FUNC_4(VAR_30, VAR_27,
     VAR_12, VAR_15,
     (1<<15 | 1<<9 | 7<<0));

  VAR_33 |= (1<<8) | (1<<7);
  FUNC_0(VAR_30, "Setting 100M force\n");
 }
 if ((VAR_27->req_line_speed == VAR_2) &&
     (VAR_27->supported &
      (VAR_11 |
       VAR_10))) {

  FUNC_4(VAR_30, VAR_27,
     VAR_12, VAR_15,
     (1<<15 | 1<<9 | 7<<0));
  FUNC_0(VAR_30, "Setting 10M force\n");
 }

 FUNC_4(VAR_30, VAR_27,
    VAR_12, VAR_16,
    VAR_33);

 if (VAR_27->req_duplex == VAR_0)
  VAR_31 |= (1<<8);




 if (!FUNC_6(VAR_27) ||
     ((VAR_31 & (1<<12)) == 0))
  FUNC_4(VAR_30, VAR_27,
    VAR_12,
    VAR_17, VAR_31);

 if (((VAR_27->req_line_speed == VAR_6) &&
     (VAR_27->speed_cap_mask &
      VAR_23)) ||
  (VAR_27->req_line_speed == VAR_5)) {
   FUNC_0(VAR_30, "Advertising 10G\n");


   FUNC_3(
    VAR_30, VAR_27,
    VAR_12,
    VAR_14,
    0x1000);
   FUNC_4(VAR_30, VAR_27,
      VAR_12, VAR_18,
      0x3200);
 } else
  FUNC_4(VAR_30, VAR_27,
     VAR_12,
     VAR_14,
     1);

 return VAR_7;
}

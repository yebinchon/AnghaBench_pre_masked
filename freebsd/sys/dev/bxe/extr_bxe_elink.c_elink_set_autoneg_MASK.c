
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
struct elink_vars {scalar_t__ line_speed; } ;
struct elink_phy {int speed_cap_mask; } ;
struct elink_params {struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,struct elink_phy*,int ,int ,int*) ;
 int FUNC_1 (struct bxe_softc*,struct elink_phy*,int ,int ,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
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
 int VAR_28 ;
 int VAR_29 ;

__attribute__((used)) static void FUNC_2(struct elink_phy *VAR_30,
         struct elink_params *VAR_31,
         struct elink_vars *VAR_32,
         uint8_t VAR_33)
{
 struct bxe_softc *VAR_34 = VAR_31->sc;
 uint16_t VAR_35;


 FUNC_0(VAR_34, VAR_30,
     VAR_21,
     VAR_14, &VAR_35);


 if (VAR_32->line_speed == VAR_0)
  VAR_35 |= VAR_15;
 else
  VAR_35 &= ~(VAR_15 |
        VAR_16);

 FUNC_1(VAR_34, VAR_30,
     VAR_21,
     VAR_14, VAR_35);



 FUNC_0(VAR_34, VAR_30,
     VAR_22,
     VAR_23, &VAR_35);
 VAR_35 &= ~(VAR_27 |
      VAR_26);
 VAR_35 |= VAR_25;
 if (VAR_32->line_speed == VAR_0)
  VAR_35 |= VAR_24;
 else
  VAR_35 &= ~VAR_24;

 FUNC_1(VAR_34, VAR_30,
     VAR_22,
     VAR_23, VAR_35);


 FUNC_0(VAR_34, VAR_30,
     VAR_17,
     VAR_1,
     &VAR_35);
 if (VAR_32->line_speed == VAR_0) {

  VAR_35 |= (VAR_2 |
       VAR_3);
 } else {

  VAR_35 &= ~(VAR_2 |
        VAR_3);
 }
 FUNC_1(VAR_34, VAR_30,
     VAR_17,
     VAR_1,
     VAR_35);

 if (VAR_33) {

  FUNC_1(VAR_34, VAR_30,
      VAR_20,
      VAR_13,
      0xe);


  FUNC_1(VAR_34, VAR_30,
   VAR_20,
   VAR_9,
   VAR_10 |
   VAR_12 |
   VAR_11);


  FUNC_0(VAR_34, VAR_30,
      VAR_19,
      VAR_6,
      &VAR_35);
  if (VAR_30->speed_cap_mask &
      VAR_28)
   VAR_35 |= VAR_8;
  if (VAR_30->speed_cap_mask &
      VAR_29)
   VAR_35 |= VAR_7;

  FUNC_1(VAR_34, VAR_30,
      VAR_19,
      VAR_6,
      VAR_35);


  VAR_35 = VAR_5;

 } else
  VAR_35 = 0;

 FUNC_1(VAR_34, VAR_30,
     VAR_18,
     VAR_4, VAR_35);
}

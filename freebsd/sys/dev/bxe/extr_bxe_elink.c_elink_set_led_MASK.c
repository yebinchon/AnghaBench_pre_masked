
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct elink_vars {int link_up; } ;
struct elink_params {size_t port; int hw_led_mode; int feature_config_flags; int num_phys; TYPE_1__* phy; struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;
typedef int elink_status_t ;
struct TYPE_2__ {int type; int (* set_link_led ) (TYPE_1__*,struct elink_params*,size_t) ;} ;


 int FUNC_0 (struct bxe_softc*) ;
 int FUNC_1 (struct bxe_softc*) ;
 int FUNC_2 (struct bxe_softc*) ;
 int FUNC_3 (struct bxe_softc*) ;
 int FUNC_4 (struct bxe_softc*,char*,size_t) ;
 int FUNC_5 (struct bxe_softc*,char*,int,int) ;
 size_t VAR_0 ;
 int VAR_1 ;




 size_t VAR_2 ;
 int FUNC_6 (struct elink_params*) ;
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
 size_t VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;
 size_t VAR_23 ;
 size_t VAR_24 ;
 size_t VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_7 (struct bxe_softc*,size_t,int) ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_8 (struct bxe_softc*,int) ;
 int FUNC_9 (struct bxe_softc*,int,int) ;
 int FUNC_10 (TYPE_1__*,struct elink_params*,size_t) ;

elink_status_t FUNC_11(struct elink_params *VAR_33,
    struct elink_vars *VAR_34, uint8_t VAR_35, uint32_t VAR_36)
{
 uint8_t VAR_37 = VAR_33->port;
 uint16_t VAR_38 = VAR_33->hw_led_mode;
 elink_status_t VAR_39 = VAR_9;
 uint8_t VAR_40;
 uint32_t VAR_41;
 uint32_t VAR_42 = VAR_37 ? VAR_16 : VAR_15;
 struct bxe_softc *VAR_43 = VAR_33->sc;
 FUNC_5(VAR_43, "elink_set_led: port %x, mode %d\n", VAR_37, VAR_35);
 FUNC_5(VAR_43, "speed 0x%x, hw_led_mode 0x%x\n",
   VAR_36, VAR_38);

 for (VAR_40 = VAR_0; VAR_40 < VAR_2; VAR_40++) {
  if (VAR_33->phy[VAR_40].set_link_led) {
   VAR_33->phy[VAR_40].set_link_led(
    &VAR_33->phy[VAR_40], VAR_33, VAR_35);
  }
 }






 switch (VAR_35) {
 case 131:
 case 130:
  FUNC_7(VAR_43, VAR_19 + VAR_37*4, 0);
  FUNC_7(VAR_43, VAR_25 + VAR_37*4,
         VAR_30);

  VAR_41 = FUNC_8(VAR_43, VAR_42 + VAR_14);
  if (VAR_33->phy[VAR_0].type ==
   VAR_26)
   VAR_41 &= ~(VAR_10 |
    VAR_11 |
    VAR_12);
  else
   VAR_41 |= VAR_13;

  FUNC_9(VAR_43, VAR_42 + VAR_14, VAR_41);
  break;

 case 128:



  if (!VAR_34->link_up)
   break;
 case 129:
  if (((VAR_33->phy[VAR_0].type ==
     VAR_28) ||
    (VAR_33->phy[VAR_0].type ==
     VAR_27)) &&
      FUNC_2(VAR_43) && VAR_33->num_phys == 2) {

   if (VAR_35 == 129 ||
    VAR_36 == VAR_6){
    FUNC_7(VAR_43, VAR_25 + VAR_37*4, 0);
    FUNC_7(VAR_43, VAR_19 + VAR_37*4, 1);

    VAR_41 = FUNC_8(VAR_43, VAR_42 + VAR_14);
    FUNC_9(VAR_43, VAR_42 + VAR_14,
     (VAR_41 | VAR_13));





    if (VAR_35 == 129)
     return VAR_39;
   }
  } else if (FUNC_6(VAR_33)) {



   if ((!FUNC_3(VAR_43)) ||
       (FUNC_3(VAR_43) &&
        VAR_35 == 129))
    FUNC_7(VAR_43, VAR_19 + VAR_37*4, 1);

   if (FUNC_1(VAR_43) ||
       FUNC_2(VAR_43) ||
       (VAR_35 == 129))
    FUNC_7(VAR_43, VAR_25 + VAR_37*4, 0);
   else
    FUNC_7(VAR_43, VAR_25 + VAR_37*4,
           VAR_38);
  } else if ((VAR_33->phy[VAR_0].type ==
       VAR_26) &&
      (VAR_35 == 129)) {
   FUNC_7(VAR_43, VAR_25 + VAR_37*4, 0);
   VAR_41 = FUNC_8(VAR_43, VAR_42 + VAR_14);
   FUNC_9(VAR_43, VAR_42 + VAR_14, VAR_41 |
    VAR_13 | VAR_10);



   break;
  } else {
   uint32_t VAR_44 = ((VAR_33->hw_led_mode <<
          VAR_31) ==
         VAR_29) ?
    (VAR_32 >>
     VAR_31) : VAR_38;
   FUNC_7(VAR_43, VAR_25 + VAR_37*4,
          VAR_44);
  }

  FUNC_7(VAR_43, VAR_23 + VAR_37*4, 0);

  if (FUNC_3(VAR_43))
   FUNC_7(VAR_43, VAR_21 + VAR_37*4,
          VAR_18);
  else
   FUNC_7(VAR_43, VAR_21 + VAR_37*4,
          VAR_17);
  FUNC_7(VAR_43, VAR_20 +
         VAR_37*4, 1);
  VAR_41 = FUNC_8(VAR_43, VAR_42 + VAR_14);
  FUNC_9(VAR_43, VAR_42 + VAR_14,
   (VAR_41 & (~VAR_13)));

  if (FUNC_0(VAR_43) &&
      ((VAR_36 == VAR_7) ||
       (VAR_36 == VAR_5) ||
       (VAR_36 == VAR_4) ||
       (VAR_36 == VAR_3))) {

   FUNC_7(VAR_43, VAR_23
          + VAR_37*4, 1);
   FUNC_7(VAR_43, VAR_24 +
          VAR_37*4, 0);
   FUNC_7(VAR_43, VAR_22 +
          VAR_37*4, 1);
  }
  break;

 default:
  VAR_39 = VAR_8;
  FUNC_4(VAR_43, "elink_set_led: Invalid led mode %d\n",
    VAR_35);
  break;
 }
 return VAR_39;

}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct elink_vars {int eee_status; scalar_t__ phy_flags; scalar_t__ link_up; scalar_t__ link_status; } ;
struct elink_params {int port; int feature_config_flags; int num_phys; TYPE_1__* phy; int chip_id; struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;
typedef int elink_status_t ;
struct TYPE_4__ {int flags; int (* link_reset ) (TYPE_1__*,struct elink_params*) ;} ;


 scalar_t__ FUNC_0 (struct bxe_softc*) ;
 int FUNC_1 (struct bxe_softc*) ;
 int FUNC_2 (struct bxe_softc*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct bxe_softc*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 int FUNC_5 (struct bxe_softc*,int ) ;
 int FUNC_6 (struct bxe_softc*,scalar_t__,int) ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 scalar_t__ VAR_30 ;
 int FUNC_7 (struct bxe_softc*,scalar_t__,int) ;
 int FUNC_8 (struct elink_params*,int) ;
 int FUNC_9 (struct bxe_softc*,int,int ) ;
 int FUNC_10 (struct elink_params*,TYPE_1__*) ;
 int FUNC_11 (struct bxe_softc*,int ,int,int ) ;
 int FUNC_12 (struct elink_params*,struct elink_vars*,int ,int ) ;
 int FUNC_13 (struct bxe_softc*,struct elink_params*) ;
 int FUNC_14 (struct elink_params*,int ) ;
 int FUNC_15 (struct elink_params*,int ) ;
 int FUNC_16 (struct elink_params*,int ,int ) ;
 int FUNC_17 (struct elink_params*,scalar_t__) ;
 int FUNC_18 (struct elink_params*,int) ;
 int FUNC_19 (TYPE_1__*,struct elink_params*) ;
 int FUNC_20 (TYPE_1__*,struct elink_params*) ;

elink_status_t FUNC_21(struct elink_params *VAR_31, struct elink_vars *VAR_32,
       uint8_t VAR_33)
{
 struct bxe_softc *VAR_34 = VAR_31->sc;
 uint8_t VAR_35, VAR_36 = VAR_31->port, VAR_37 = 0;
 FUNC_4(VAR_34, "Resetting the link of port %d\n", VAR_36);

 VAR_32->link_status = 0;
 FUNC_8(VAR_31, 1);
 FUNC_17(VAR_31, VAR_32->link_status);
 VAR_32->eee_status &= ~(VAR_28 |
         VAR_27);
 FUNC_18(VAR_31, VAR_32->eee_status);
 FUNC_7(VAR_34, VAR_25 + VAR_36*4,
         (VAR_10 |
   VAR_9 |
   VAR_8 |
   VAR_7));


 FUNC_6(VAR_34, VAR_21 + VAR_36*4, 1);


 if (!FUNC_0(VAR_34)) {
  FUNC_6(VAR_34, VAR_20 + VAR_36*4, 0);
  FUNC_6(VAR_34, VAR_22 + VAR_36*4, 0);
 }






  if (!FUNC_0(VAR_34))
   FUNC_11(VAR_34, VAR_31->chip_id, VAR_36, 0);





  if (FUNC_0(VAR_34) &&
  !FUNC_1(VAR_34)) {
   FUNC_15(VAR_31, 0);
   FUNC_14(VAR_31, 0);
  }

 if (!FUNC_0(VAR_34))
  FUNC_6(VAR_34, VAR_26 + VAR_36*4, 0);

 FUNC_3(1000 * 10);




 FUNC_13(VAR_34, VAR_31);
 FUNC_12(VAR_31, VAR_32, VAR_5, 0);

 if (VAR_33 && (!FUNC_2(VAR_34))) {
  for (VAR_35 = VAR_0; VAR_35 < VAR_31->num_phys;
        VAR_35++) {
   if (VAR_31->phy[VAR_35].link_reset) {
    FUNC_10(VAR_31,
        &VAR_31->phy[VAR_35]);
    VAR_31->phy[VAR_35].link_reset(
     &VAR_31->phy[VAR_35],
     VAR_31);
   }
   if (VAR_31->phy[VAR_35].flags &
       VAR_3)
    VAR_37 = 1;
  }
 }

 if (VAR_37) {

  FUNC_9(VAR_34, VAR_36, 0);
  FUNC_7(VAR_34, VAR_24 + VAR_36*4,
          1 << VAR_6);
 }



 if (VAR_31->phy[VAR_4].link_reset)
  VAR_31->phy[VAR_4].link_reset(
   &VAR_31->phy[VAR_4], VAR_31);


 if (!FUNC_0(VAR_34)) {

  FUNC_6(VAR_34, VAR_12 + VAR_15,
         (VAR_16 << VAR_36));
  FUNC_6(VAR_34, VAR_19 + VAR_36*4, 0);
  FUNC_6(VAR_34, VAR_23 + VAR_36*4, 0);
 } else {
  uint32_t VAR_38 = (VAR_31->port) ? VAR_14 : VAR_13;
  FUNC_16(VAR_31, 0, 0);
  if (FUNC_5(VAR_34, VAR_18) &
      VAR_17)
   FUNC_6(VAR_34, VAR_38 + VAR_30,
          VAR_29);
 }
 VAR_32->link_up = 0;
 VAR_32->phy_flags = 0;
 return VAR_11;
}

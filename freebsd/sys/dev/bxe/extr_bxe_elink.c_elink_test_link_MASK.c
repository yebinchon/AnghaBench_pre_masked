
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct elink_vars {int dummy; } ;
struct elink_phy {int (* read_status ) (struct elink_phy*,struct elink_params*,struct elink_vars*) ;int media_type; } ;
struct elink_params {scalar_t__* req_line_speed; scalar_t__ loopback_mode; int num_phys; struct elink_phy* phy; struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;
typedef int elink_status_t ;


 scalar_t__ FUNC_0 (struct bxe_softc*) ;
 scalar_t__ FUNC_1 (struct bxe_softc*) ;
 scalar_t__ FUNC_2 (struct bxe_softc*) ;
 int FUNC_3 (struct bxe_softc*,struct elink_phy*,int ,int ,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t FUNC_4 (size_t) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_5 (struct bxe_softc*,struct elink_phy*,int ,int,int*) ;
 int FUNC_6 (struct elink_phy*,struct elink_params*) ;
 int FUNC_7 (struct elink_phy*,struct elink_params*,struct elink_vars*) ;
 int FUNC_8 (struct elink_phy*,struct elink_params*,struct elink_vars*) ;

elink_status_t FUNC_9(struct elink_params *VAR_15, struct elink_vars *VAR_16,
      uint8_t VAR_17)
{
 struct bxe_softc *VAR_18 = VAR_15->sc;
 uint16_t VAR_19 = 0, VAR_20 = 0;
 uint8_t VAR_21 = 0, VAR_22;
 struct elink_vars VAR_23;
 struct elink_phy *VAR_24 = &VAR_15->phy[VAR_5];
 if (FUNC_0(VAR_18)) {
  uint16_t VAR_25;
  if (VAR_15->req_line_speed[FUNC_4(VAR_5)]
      > VAR_7) {

   FUNC_5(VAR_18, VAR_24, VAR_13,
     1, &VAR_25);
   FUNC_5(VAR_18, VAR_24, VAR_13,
     1, &VAR_25);
   VAR_25 &= (1<<2);
  } else {

   uint8_t VAR_26 = FUNC_6(VAR_24, VAR_15);
   FUNC_5(VAR_18, VAR_24, VAR_13,
     VAR_14,
     &VAR_19);
   VAR_19 = ((VAR_19 >> 8) & 0xf) |
    ((VAR_19 >> 12) & 0xf);
   VAR_25 = VAR_19 & (1 << VAR_26);
  }
  if (!VAR_25)
   return VAR_8;
 } else {
  FUNC_3(VAR_18, VAR_24,
     VAR_12,
     VAR_10,
     &VAR_19);

 if (!(VAR_19 & VAR_11))
  return VAR_8;
 }

 if (VAR_15->loopback_mode == VAR_6)
  return VAR_9;

 switch (VAR_15->num_phys) {
 case 1:

  return VAR_9;
 case 2:
  VAR_21 = VAR_15->phy[VAR_4].read_status(
   &VAR_15->phy[VAR_4],
   VAR_15, &VAR_23);
  break;
 case 3:
  for (VAR_20 = VAR_4; VAR_20 < VAR_15->num_phys;
        VAR_20++) {
   VAR_22 = ((VAR_15->phy[VAR_20].media_type ==
         VAR_1) ||
        (VAR_15->phy[VAR_20].media_type ==
         VAR_2) ||
        (VAR_15->phy[VAR_20].media_type ==
         VAR_3) ||
        (VAR_15->phy[VAR_20].media_type ==
         VAR_0));

   if (VAR_17 != VAR_22)
    continue;
   if (VAR_15->phy[VAR_20].read_status) {
    VAR_21 |=
     VAR_15->phy[VAR_20].read_status(
      &VAR_15->phy[VAR_20],
      VAR_15, &VAR_23);
   }
  }
  break;
 }
 if (VAR_21)
  return VAR_9;
 return VAR_8;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bwi_regwin {int rw_rev; scalar_t__ rw_type; } ;
struct bwi_softc {int sc_flags; struct bwi_regwin sc_com_regwin; int sc_dev; int * sc_cur_regwin; struct bwi_regwin sc_bus_regwin; } ;
struct bwi_mac {int mac_id; int mac_regwin; } ;


 int VAR_0 ;
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
 scalar_t__ FUNC_0 (struct bwi_regwin*) ;
 scalar_t__ VAR_17 ;
 int FUNC_1 (struct bwi_softc*,int ) ;
 int FUNC_2 (struct bwi_softc*,int ,int) ;
 int FUNC_3 (struct bwi_softc*,int ,int ) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct bwi_softc*,struct bwi_regwin*,struct bwi_regwin**) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int ,int ,int,int) ;

int
FUNC_9(struct bwi_softc *VAR_18, struct bwi_mac *VAR_19)
{
 struct bwi_regwin *VAR_20, *VAR_21;
 uint32_t VAR_22;
 int VAR_23;

 VAR_21 = &VAR_18->sc_bus_regwin;
 FUNC_4(VAR_18->sc_cur_regwin == &VAR_19->mac_regwin, ("not cur regwin"));




 if (VAR_21->rw_rev < 6 && VAR_21->rw_type == VAR_17) {



  VAR_22 = FUNC_1(VAR_18, VAR_12);

  VAR_23 = FUNC_6(VAR_18, VAR_21, &VAR_20);
  if (VAR_23)
   return VAR_23;

  FUNC_2(VAR_18, VAR_15, (VAR_22 & VAR_13));
 } else {
  uint32_t VAR_24;

  VAR_24 = 1 << VAR_19->mac_id;

  VAR_23 = FUNC_6(VAR_18, VAR_21, &VAR_20);
  if (VAR_23)
   return VAR_23;

  VAR_22 = FUNC_7(VAR_18->sc_dev, VAR_16, 4);
  VAR_22 |= VAR_24 << 8;
  FUNC_8(VAR_18->sc_dev, VAR_16, VAR_22, 4);
 }

 if (VAR_18->sc_flags & VAR_14)
  goto back;

 if (VAR_21->rw_type == VAR_17) {



  FUNC_2(VAR_18, VAR_2,
         VAR_5 | VAR_3);

  if (VAR_21->rw_rev < 5) {
   struct bwi_regwin *VAR_25 = &VAR_18->sc_com_regwin;
   FUNC_2(VAR_18, VAR_7,
   FUNC_5(VAR_10, VAR_11) |
   FUNC_5(VAR_8, VAR_9));





   if (FUNC_0(VAR_25)) {
    VAR_23 = FUNC_6(VAR_18, VAR_25, ((void*)0));
    if (VAR_23)
     return VAR_23;
   }


   FUNC_3(VAR_18, VAR_0, VAR_1);
   FUNC_1(VAR_18, VAR_0);
   FUNC_3(VAR_18, VAR_6, 0);
   FUNC_1(VAR_18, VAR_6);

   if (FUNC_0(VAR_25)) {
    VAR_23 = FUNC_6(VAR_18, VAR_21, ((void*)0));
    if (VAR_23)
     return VAR_23;
   }
  } else if (VAR_21->rw_rev >= 11) {



   FUNC_2(VAR_18, VAR_2, VAR_4);
  }
 } else {

 }

 VAR_18->sc_flags |= VAR_14;
back:
 return FUNC_6(VAR_18, VAR_20, ((void*)0));
}

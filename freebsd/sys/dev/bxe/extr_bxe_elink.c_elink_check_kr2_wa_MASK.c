
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct elink_vars {scalar_t__ check_kr2_recovery_cnt; } ;
struct elink_phy {int dummy; } ;
struct elink_params {int link_attr_sync; struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,struct elink_phy*,int ,int ,int) ;
 int FUNC_1 (struct bxe_softc*,char*) ;
 int FUNC_2 (struct bxe_softc*,char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct bxe_softc*,struct elink_phy*,int ,int ,int*) ;
 int FUNC_4 (struct elink_params*,struct elink_vars*,struct elink_phy*) ;
 int FUNC_5 (struct elink_phy*,struct elink_params*) ;
 int FUNC_6 (struct elink_params*,struct elink_vars*,struct elink_phy*) ;
 int FUNC_7 (struct elink_params*,struct elink_phy*) ;
 int FUNC_8 (struct elink_phy*,struct elink_params*) ;
 int FUNC_9 (struct elink_phy*,struct elink_params*) ;

__attribute__((used)) static void FUNC_10(struct elink_params *VAR_6,
          struct elink_vars *VAR_7,
          struct elink_phy *VAR_8)
{
 struct bxe_softc *VAR_9 = VAR_6->sc;
 uint16_t VAR_10, VAR_11, VAR_12, VAR_13;
 int VAR_14;






 if (VAR_7->check_kr2_recovery_cnt > 0) {
  VAR_7->check_kr2_recovery_cnt--;
  return;
 }

 VAR_14 = FUNC_8(VAR_8, VAR_6);
 if (!VAR_14) {
  if (!(VAR_6->link_attr_sync & VAR_0)) {
   FUNC_6(VAR_6, VAR_7, VAR_8);
   FUNC_1(VAR_9, "No sigdet\n");
  }
  return;
 }

 VAR_13 = FUNC_5(VAR_8, VAR_6);
 FUNC_0(VAR_9, VAR_8, VAR_5,
     VAR_1, VAR_13);
 FUNC_3(VAR_9, VAR_8, VAR_2,
   VAR_3, &VAR_10);
 FUNC_3(VAR_9, VAR_8, VAR_2,
   VAR_4, &VAR_11);
 FUNC_7(VAR_6, VAR_8);


 if (VAR_10 == 0) {
  if (!(VAR_6->link_attr_sync & VAR_0)) {
   FUNC_6(VAR_6, VAR_7, VAR_8);
   FUNC_1(VAR_9, "No BP\n");
  }
  return;
 }





 VAR_12 = (((VAR_10 & 0x8000) == 0) ||
     (((VAR_10 & 0x8000) &&
       ((VAR_11 & 0xe0) == 0x20))));


 if (!(VAR_6->link_attr_sync & VAR_0)) {
  if (!VAR_12) {
   FUNC_2(VAR_9, "BP=0x%x, NP=0x%x\n", VAR_10,
      VAR_11);
   FUNC_6(VAR_6, VAR_7, VAR_8);
  }
  return;
 }

 if (VAR_12) {

  FUNC_2(VAR_9, "BP=0x%x, NP=0x%x\n", VAR_10, VAR_11);
  FUNC_4(VAR_6, VAR_7, VAR_8);

  FUNC_9(VAR_8, VAR_6);
  return;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct elink_phy {int media_type; } ;
struct elink_params {int link_flags; int port; int shmem_base; int chip_id; struct elink_phy* phy; struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;


 scalar_t__ FUNC_0 (struct bxe_softc*) ;
 int FUNC_1 (struct bxe_softc*,char*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct bxe_softc*,int ,int ,int ) ;
 scalar_t__ FUNC_3 (struct bxe_softc*,int ,int ) ;
 int FUNC_4 (struct bxe_softc*,struct elink_phy*,int ,int ,int *) ;
 scalar_t__ FUNC_5 (struct bxe_softc*,int ,int ,int ,int *,int *) ;
 int FUNC_6 (struct elink_params*,struct elink_phy*,int) ;
 int FUNC_7 (struct elink_params*,struct elink_phy*) ;
 int FUNC_8 (struct bxe_softc*,struct elink_params*) ;
 int FUNC_9 (struct elink_params*,int ) ;
 int FUNC_10 (struct elink_phy*,struct elink_params*) ;
 int FUNC_11 (struct elink_params*,struct elink_phy*,int) ;
 scalar_t__ FUNC_12 (struct elink_phy*,struct elink_params*) ;
 int FUNC_13 (struct elink_phy*,struct elink_params*) ;
 int FUNC_14 (struct bxe_softc*,struct elink_phy*,int) ;

void FUNC_15(struct elink_params *VAR_10)
{
 struct bxe_softc *VAR_11 = VAR_10->sc;
 struct elink_phy *VAR_12;
 uint32_t VAR_13;
 uint8_t VAR_14, VAR_15;
 if (FUNC_0(VAR_11)) {
  VAR_12 = &VAR_10->phy[VAR_2];

  FUNC_11(VAR_10, VAR_12, 1);
 } else {
  VAR_12 = &VAR_10->phy[VAR_1];
 }
 if (FUNC_5(VAR_11, VAR_10->chip_id, VAR_10->shmem_base,
          VAR_10->port, &VAR_14, &VAR_15) ==
     VAR_4) {
  FUNC_1(VAR_11, "Failed to get MOD_ABS interrupt config\n");
  return;
 }


 FUNC_9(VAR_10, VAR_7);


 VAR_13 = FUNC_3(VAR_11, VAR_14, VAR_15);


 if (VAR_13 == 0) {
  FUNC_8(VAR_11, VAR_10);
  FUNC_7(VAR_10, VAR_12);

  FUNC_6(VAR_10, VAR_12, 1);
  FUNC_2(VAR_11, VAR_14,
       VAR_8,
       VAR_15);
  if (FUNC_12(VAR_12, VAR_10) == 0) {
   FUNC_10(VAR_12, VAR_10);
   if (FUNC_0(VAR_11)) {
    uint16_t VAR_16;




    FUNC_4(VAR_11, VAR_12,
      VAR_5,
      VAR_6,
      &VAR_16);
    if ((!VAR_16) &&
        (VAR_10->link_flags &
         VAR_3)) {
     FUNC_14(VAR_11, VAR_12, 1);
     FUNC_13(VAR_12, VAR_10);
     FUNC_14(VAR_11, VAR_12, 0);
    }
   }
  } else {
   FUNC_1(VAR_11, "SFP+ module is not initialized\n");
  }
 } else {
  FUNC_2(VAR_11, VAR_14,
       VAR_9,
       VAR_15);



  VAR_12->media_type = VAR_0;
 }
}

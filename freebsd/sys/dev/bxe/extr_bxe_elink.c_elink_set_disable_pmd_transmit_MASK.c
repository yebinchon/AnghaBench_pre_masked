
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct elink_phy {int dummy; } ;
struct elink_params {int feature_config_flags; struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bxe_softc*,struct elink_phy*,int ,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct elink_params *VAR_3,
        struct elink_phy *VAR_4,
        uint8_t VAR_5)
{
 struct bxe_softc *VAR_6 = VAR_3->sc;



 if (VAR_5) {
  if (VAR_3->feature_config_flags &
       VAR_0) {
   FUNC_0(VAR_6, "Disabling PMD transmitter\n");
  } else {
   FUNC_0(VAR_6, "NOT disabling PMD transmitter\n");
   return;
  }
 } else
  FUNC_0(VAR_6, "Enabling PMD transmitter\n");
 FUNC_1(VAR_6, VAR_4,
    VAR_1,
    VAR_2, VAR_5);
}

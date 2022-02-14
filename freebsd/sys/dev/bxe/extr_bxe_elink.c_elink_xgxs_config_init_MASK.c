
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct elink_vars {int phy_flags; scalar_t__ line_speed; int ieee_fc; } ;
struct elink_phy {int dummy; } ;
struct elink_params {scalar_t__ loopback_mode; int feature_config_flags; struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (struct elink_params*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct elink_phy*,struct elink_params*,struct elink_vars*) ;
 int FUNC_3 (struct elink_phy*,struct elink_params*,struct elink_vars*) ;
 int FUNC_4 (struct elink_phy*,struct elink_params*,int) ;
 int FUNC_5 (struct elink_phy*,struct elink_params*,struct elink_vars*,int) ;
 int FUNC_6 (struct elink_phy*,struct elink_params*) ;
 int FUNC_7 (struct elink_phy*,struct elink_params*,int ) ;
 int FUNC_8 (struct elink_phy*,struct elink_params*) ;

__attribute__((used)) static void FUNC_9(struct elink_phy *VAR_5,
       struct elink_params *VAR_6,
       struct elink_vars *VAR_7)
{
 struct bxe_softc *VAR_8 = VAR_6->sc;
 uint8_t VAR_9 = (FUNC_1(VAR_6) ||
     (VAR_6->loopback_mode == VAR_2));
 if (!(VAR_7->phy_flags & VAR_4)) {
  if (FUNC_1(VAR_6) &&
      (VAR_6->feature_config_flags &
       VAR_0))
   FUNC_8(VAR_5, VAR_6);


  if (VAR_7->line_speed != VAR_3 ||
      (FUNC_1(VAR_6) &&
       VAR_6->loopback_mode == VAR_1)) {
   FUNC_0(VAR_8, "not SGMII, no AN\n");


   FUNC_5(VAR_5, VAR_6, VAR_7, 0);


   FUNC_3(VAR_5, VAR_6, VAR_7);

  } else {
   FUNC_0(VAR_8, "not SGMII, AN\n");


   FUNC_6(VAR_5, VAR_6);


   FUNC_7(VAR_5, VAR_6,
         VAR_7->ieee_fc);


   FUNC_5(VAR_5, VAR_6, VAR_7, VAR_9);


   FUNC_4(VAR_5, VAR_6, VAR_9);
  }

 } else {
  FUNC_0(VAR_8, "SGMII\n");

  FUNC_2(VAR_5, VAR_6, VAR_7);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct elink_vars {int ieee_fc; } ;
struct elink_phy {int dummy; } ;
struct elink_params {struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct bxe_softc*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct elink_phy*,struct elink_params*,int*) ;
 int FUNC_3 (struct bxe_softc*,struct elink_phy*,int ,int ,int*) ;
 int FUNC_4 (struct bxe_softc*,struct elink_phy*,int ,int ,int) ;

__attribute__((used)) static void FUNC_5(struct elink_params *VAR_5,
          struct elink_phy *VAR_6,
          struct elink_vars *VAR_7)
{
 uint16_t VAR_8;
 struct bxe_softc *VAR_9 = VAR_5->sc;
 FUNC_3(VAR_9, VAR_6,
   VAR_0, VAR_1, &VAR_8);

 VAR_8 &= ~VAR_3;

 FUNC_2(VAR_6, VAR_5, &VAR_7->ieee_fc);
 if ((VAR_7->ieee_fc &
     VAR_4) ==
     VAR_4) {
  VAR_8 |= VAR_4;
 }
 if ((VAR_7->ieee_fc &
     VAR_2) ==
     VAR_2) {
  VAR_8 |= VAR_2;
 }
 if ((VAR_7->ieee_fc &
     VAR_3) ==
     VAR_3) {
  VAR_8 |= VAR_3;
 }
 FUNC_1(VAR_9,
   "Ext phy AN advertize cl37 0x%x\n", VAR_8);

 FUNC_4(VAR_9, VAR_6,
    VAR_0, VAR_1, VAR_8);
 FUNC_0(1000 * 500);
}

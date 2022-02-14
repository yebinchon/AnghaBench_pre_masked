
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct elink_vars {int ieee_fc; } ;
struct elink_phy {int dummy; } ;
struct elink_params {struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct elink_phy*,struct elink_params*,int*) ;
 int FUNC_2 (struct bxe_softc*,struct elink_phy*,int ,int ,int *) ;
 int FUNC_3 (struct bxe_softc*,struct elink_phy*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct elink_params *VAR_7,
        struct elink_phy *VAR_8,
        struct elink_vars *VAR_9)
{
 uint16_t VAR_10;
 struct bxe_softc *VAR_11 = VAR_7->sc;

 FUNC_2(VAR_11, VAR_8, VAR_0, VAR_1, &VAR_10);

 VAR_10 &= ~VAR_3;


 FUNC_1(VAR_8, VAR_7, &VAR_9->ieee_fc);
 if ((VAR_9->ieee_fc &
     VAR_5) ==
     VAR_5) {
  VAR_10 |= VAR_2;
 }
 if ((VAR_9->ieee_fc &
     VAR_6) ==
     VAR_6) {
  VAR_10 |= VAR_4;
 }
 FUNC_0(VAR_11, "Ext phy AN advertize 0x%x\n", VAR_10);
 FUNC_3(VAR_11, VAR_8, VAR_0, VAR_1, VAR_10);
}

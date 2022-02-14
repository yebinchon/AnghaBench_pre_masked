
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct elink_phy {int dummy; } ;
struct elink_params {struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,struct elink_phy*,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct bxe_softc*,struct elink_phy*,int ,int ,int) ;
 int FUNC_2 (struct elink_phy*,struct elink_params*) ;
 int FUNC_3 (struct elink_params*,struct elink_phy*) ;

__attribute__((used)) static void FUNC_4(struct elink_phy *VAR_4,
      struct elink_params *VAR_5)
{

 struct bxe_softc *VAR_6 = VAR_5->sc;
 uint16_t VAR_7 = FUNC_2(VAR_4, VAR_5);
 FUNC_0(VAR_6, VAR_4, VAR_2,
     VAR_0, VAR_7);
 FUNC_1(VAR_6, VAR_4, VAR_1,
    VAR_3, 0x1200);


 FUNC_3(VAR_5, VAR_4);
}

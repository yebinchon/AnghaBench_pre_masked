
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct elink_phy {int dummy; } ;
struct elink_params {struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;


 scalar_t__ FUNC_0 (struct bxe_softc*) ;
 int FUNC_1 (struct bxe_softc*,char*,int ) ;
 int FUNC_2 (struct elink_params*,struct elink_phy*,int ) ;
 int FUNC_3 (struct elink_params*,struct elink_phy*,int ) ;

__attribute__((used)) static void FUNC_4(struct elink_params *VAR_0,
          struct elink_phy *VAR_1,
          uint8_t VAR_2)
{
 struct bxe_softc *VAR_3 = VAR_0->sc;
 FUNC_1(VAR_3, "Setting SFP+ transmitter to %d\n", VAR_2);
 if (FUNC_0(VAR_3))
  FUNC_3(VAR_0, VAR_1, VAR_2);
 else
  FUNC_2(VAR_0, VAR_1, VAR_2);
}

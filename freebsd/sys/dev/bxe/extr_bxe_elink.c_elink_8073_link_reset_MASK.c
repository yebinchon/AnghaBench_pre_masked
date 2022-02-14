
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct elink_phy {int dummy; } ;
struct elink_params {int port; struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;


 scalar_t__ FUNC_0 (struct bxe_softc*) ;
 int FUNC_1 (struct bxe_softc*,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct bxe_softc*) ;
 int FUNC_3 (struct bxe_softc*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct elink_phy *VAR_2,
      struct elink_params *VAR_3)
{
 struct bxe_softc *VAR_4 = VAR_3->sc;
 uint8_t VAR_5;
 if (FUNC_0(VAR_4))
  VAR_5 = FUNC_2(VAR_4);
 else
  VAR_5 = VAR_3->port;
 FUNC_1(VAR_4, "Setting 8073 port %d into low power mode\n",
    VAR_5);
 FUNC_3(VAR_4, VAR_0,
         VAR_1,
         VAR_5);
}

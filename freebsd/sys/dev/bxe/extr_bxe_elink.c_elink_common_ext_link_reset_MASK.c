
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct elink_phy {int dummy; } ;
struct elink_params {int port; struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;


 scalar_t__ FUNC_0 (struct bxe_softc*) ;
 int FUNC_1 (struct bxe_softc*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct bxe_softc*) ;
 int FUNC_3 (struct bxe_softc*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct elink_phy *VAR_3,
     struct elink_params *VAR_4)
{
 struct bxe_softc *VAR_5 = VAR_4->sc;
 uint8_t VAR_6;

 if (FUNC_0(VAR_5))
  VAR_6 = FUNC_2(VAR_5);
 else
  VAR_6 = VAR_4->port;
 FUNC_3(VAR_5, VAR_0,
         VAR_2,
         VAR_6);
 FUNC_3(VAR_5, VAR_1,
         VAR_2,
         VAR_6);
 FUNC_1(VAR_5, "reset external PHY\n");
}

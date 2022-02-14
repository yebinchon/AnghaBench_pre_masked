
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct elink_phy {scalar_t__ type; } ;
struct elink_params {int port; struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct bxe_softc*) ;
 int FUNC_2 (struct bxe_softc*,int ,int ,int ) ;
 int FUNC_3 (struct bxe_softc*,struct elink_phy*,int ,int ,int *) ;
 int FUNC_4 (struct bxe_softc*,struct elink_phy*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct elink_phy *VAR_6,
       struct elink_params *VAR_7)
{
 struct bxe_softc *VAR_8 = VAR_7->sc;
 uint8_t VAR_9;
 uint16_t VAR_10;

 if (!(FUNC_0(VAR_8)))
  VAR_9 = FUNC_1(VAR_8);
 else
  VAR_9 = VAR_7->port;

 if (VAR_6->type == VAR_5) {
  FUNC_2(VAR_8, VAR_3,
          VAR_4,
          VAR_9);
 } else {
  FUNC_3(VAR_8, VAR_6,
    VAR_2,
    VAR_1, &VAR_10);
  VAR_10 |= VAR_0;
  FUNC_4(VAR_8, VAR_6,
     VAR_2,
     VAR_1, VAR_10);
 }
}

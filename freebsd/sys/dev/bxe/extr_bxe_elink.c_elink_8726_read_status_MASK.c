
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
struct elink_vars {scalar_t__ line_speed; } ;
struct elink_phy {int dummy; } ;
struct elink_params {struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct elink_phy*,struct elink_params*,struct elink_vars*) ;
 int FUNC_2 (struct bxe_softc*,struct elink_phy*,int ,int ,int*) ;

__attribute__((used)) static uint8_t FUNC_3(struct elink_phy *VAR_2,
     struct elink_params *VAR_3,
     struct elink_vars *VAR_4)
{
 struct bxe_softc *VAR_5 = VAR_3->sc;
 uint16_t VAR_6;
 uint8_t VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_4);
 if (VAR_7) {
  FUNC_2(VAR_5, VAR_2,
    VAR_0, VAR_1,
    &VAR_6);
  if (VAR_6 & (1<<15)) {
   FUNC_0(VAR_5, "Tx is disabled\n");
   VAR_7 = 0;
   VAR_4->line_speed = 0;
  }
 }
 return VAR_7;
}

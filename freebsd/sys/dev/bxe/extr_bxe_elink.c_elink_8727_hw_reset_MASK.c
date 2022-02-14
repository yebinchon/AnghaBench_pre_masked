
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct elink_phy {int dummy; } ;
struct elink_params {struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct bxe_softc*,int ) ;
 int FUNC_1 (struct bxe_softc*,int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct elink_phy *VAR_4,
    struct elink_params *VAR_5) {
 uint32_t VAR_6, VAR_7;
 uint8_t VAR_8;



 struct bxe_softc *VAR_9 = VAR_5->sc;
 VAR_6 = FUNC_0(VAR_9, VAR_2);
 VAR_7 = FUNC_0(VAR_9, VAR_3);
 VAR_8 = (VAR_6 && VAR_7) ^ 1;
 FUNC_1(VAR_9, VAR_0,
         VAR_1, VAR_8);
}

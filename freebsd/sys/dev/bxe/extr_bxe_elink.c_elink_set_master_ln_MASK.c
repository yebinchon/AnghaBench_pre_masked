
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct elink_phy {int dummy; } ;
struct elink_params {int lane_config; struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,struct elink_phy*,int ,int ,int*) ;
 int FUNC_1 (struct bxe_softc*,struct elink_phy*,int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_2(struct elink_params *VAR_4,
    struct elink_phy *VAR_5)
{
 struct bxe_softc *VAR_6 = VAR_4->sc;
 uint16_t VAR_7, VAR_8;
 VAR_8 = ((VAR_4->lane_config &
       VAR_2) >>
      VAR_3);


 FUNC_0(VAR_6, VAR_5,
     VAR_0,
     VAR_1,
     &VAR_7);

 FUNC_1(VAR_6, VAR_5,
     VAR_0 ,
     VAR_1,
     (VAR_7 | VAR_8));
}

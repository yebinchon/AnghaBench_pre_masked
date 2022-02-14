
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct elink_phy {int speed_cap_mask; } ;
struct elink_params {struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,struct elink_phy*,int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_1(struct elink_phy *VAR_7,
           struct elink_params *VAR_8)
{
 struct bxe_softc *VAR_9 = VAR_8->sc;
 uint16_t VAR_10 = 0;


 if (VAR_7->speed_cap_mask & VAR_6)
  VAR_10 |= VAR_2;
 if (VAR_7->speed_cap_mask & VAR_5)
  VAR_10 |= VAR_1;
 FUNC_0(VAR_9, VAR_7,
     VAR_4,
     VAR_0, VAR_10);

 FUNC_0(VAR_9, VAR_7,
     VAR_4,
     VAR_3, 0x400);
}

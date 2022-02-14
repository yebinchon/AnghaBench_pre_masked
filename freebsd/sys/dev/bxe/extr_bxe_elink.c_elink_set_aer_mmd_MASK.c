
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct elink_phy {scalar_t__ type; int addr; int flags; } ;
struct elink_params {int lane_config; struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;


 scalar_t__ FUNC_0 (struct bxe_softc*) ;
 int FUNC_1 (struct bxe_softc*,struct elink_phy*,int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (struct bxe_softc*) ;
 int FUNC_3 (struct elink_phy*,struct elink_params*) ;

__attribute__((used)) static void FUNC_4(struct elink_params *VAR_6,
         struct elink_phy *VAR_7)
{
 uint32_t VAR_8;
 uint16_t VAR_9, VAR_10;
 struct bxe_softc *VAR_11 = VAR_6->sc;
 VAR_8 = ((VAR_6->lane_config &
       VAR_3) >>
       VAR_4);

 VAR_9 = (VAR_7->type == VAR_5) ?
  (VAR_7->addr + VAR_8) : 0;

 if (FUNC_2(VAR_11)) {
  VAR_10 = FUNC_3(VAR_7, VAR_6);






  if (VAR_7->flags & VAR_0)
   VAR_10 = (VAR_10 >> 1) | 0x200;
 } else if (FUNC_0(VAR_11))
  VAR_10 = 0x3800 + VAR_9 - 1;
 else
  VAR_10 = 0x3800 + VAR_9;

 FUNC_1(VAR_11, VAR_7, VAR_2,
     VAR_1, VAR_10);

}

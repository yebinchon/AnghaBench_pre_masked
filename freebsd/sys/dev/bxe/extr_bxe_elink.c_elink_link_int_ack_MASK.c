
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct elink_vars {scalar_t__ phy_link_up; } ;
struct elink_params {int port; scalar_t__ switch_cfg; int lane_config; struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (struct bxe_softc*) ;
 int FUNC_2 (struct bxe_softc*,scalar_t__,int) ;
 int FUNC_3 (struct bxe_softc*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_4(struct elink_params *VAR_8,
          struct elink_vars *VAR_9, uint8_t VAR_10)
{
 struct bxe_softc *VAR_11 = VAR_8->sc;
 uint8_t VAR_12 = VAR_8->port;
 uint32_t VAR_13;



 FUNC_2(VAR_11, VAR_5 + VAR_12*4,
         (VAR_1 |
   VAR_2 |
   VAR_0));
 if (VAR_9->phy_link_up) {
  if (FUNC_1(VAR_11))
   VAR_13 = VAR_2;
  else {
   if (VAR_10)
    VAR_13 = VAR_1;
   else if (VAR_8->switch_cfg == VAR_4) {



    uint32_t VAR_14 =
     ((VAR_8->lane_config &
        VAR_6) >>
        VAR_7);
    VAR_13 = ((1 << VAR_14) <<
           VAR_3);
   } else
    VAR_13 = VAR_0;
  }
  FUNC_0(VAR_11, "Ack link up interrupt with mask 0x%x\n",
          VAR_13);
  FUNC_3(VAR_11,
         VAR_5 + VAR_12*4,
         VAR_13);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct elink_params {int port; scalar_t__ switch_cfg; TYPE_1__* phy; struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 scalar_t__ FUNC_0 (struct bxe_softc*) ;
 int FUNC_1 (struct bxe_softc*,char*) ;
 int FUNC_2 (struct bxe_softc*,char*,int,int) ;
 int FUNC_3 (struct bxe_softc*,char*,int,int,int) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct elink_params*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_5 (struct bxe_softc*,scalar_t__) ;
 int FUNC_6 (struct bxe_softc*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_7(struct elink_params *VAR_14)
{
 uint8_t VAR_15 = VAR_14->port;
 uint32_t VAR_16;
 struct bxe_softc *VAR_17 = VAR_14->sc;


 if (FUNC_0(VAR_17)) {
  VAR_16 = VAR_4;
  if (!(FUNC_4(VAR_14)))
   VAR_16 |= VAR_1;
 } else if (VAR_14->switch_cfg == VAR_5) {
  VAR_16 = (VAR_3 |
   VAR_4);
  FUNC_1(VAR_17, "enabled XGXS interrupt\n");
  if (!(FUNC_4(VAR_14)) &&
   VAR_14->phy[VAR_0].type !=
    VAR_13) {
   VAR_16 |= VAR_1;
   FUNC_1(VAR_17, "enabled external phy int\n");
  }

 } else {
  VAR_16 = VAR_2;
  FUNC_1(VAR_17, "enabled SerDes interrupt\n");
  if (!(FUNC_4(VAR_14)) &&
   VAR_14->phy[VAR_0].type !=
    VAR_12) {
   VAR_16 |= VAR_1;
   FUNC_1(VAR_17, "enabled external phy int\n");
  }
 }
 FUNC_6(VAR_17,
        VAR_7 + VAR_15*4,
        VAR_16);

 FUNC_3(VAR_17, "port %x, is_xgxs %x, int_status 0x%x\n", VAR_15,
   (VAR_14->switch_cfg == VAR_5),
   FUNC_5(VAR_17, VAR_9 + VAR_15*4));
 FUNC_3(VAR_17, " int_mask 0x%x, MI_INT %x, SERDES_LINK %x\n",
   FUNC_5(VAR_17, VAR_7 + VAR_15*4),
   FUNC_5(VAR_17, VAR_6 + VAR_15*0x18),
   FUNC_5(VAR_17, VAR_8+VAR_15*0x3c));
 FUNC_2(VAR_17, " 10G %x, XGXS_LINK %x\n",
    FUNC_5(VAR_17, VAR_10 + VAR_15*0x68),
    FUNC_5(VAR_17, VAR_11 + VAR_15*0x68));
}

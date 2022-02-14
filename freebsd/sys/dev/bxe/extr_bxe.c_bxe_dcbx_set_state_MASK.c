
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
struct bxe_softc {scalar_t__ dcbx_enabled; scalar_t__ dcb_state; } ;


 int FUNC_0 (struct bxe_softc*,int ,char*,char*,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct bxe_softc*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

void
FUNC_2(struct bxe_softc *VAR_6,
                   uint8_t VAR_7,
                   uint32_t VAR_8)
{
    if (!FUNC_1(VAR_6)) {
        VAR_6->dcb_state = VAR_7;
        VAR_6->dcbx_enabled = VAR_8;
    } else {
        VAR_6->dcb_state = VAR_5;
        VAR_6->dcbx_enabled = VAR_0;
    }
    FUNC_0(VAR_6, VAR_4,
          "DCB state [%s:%s]\n",
          VAR_7 ? "ON" : "OFF",
          (VAR_8 == VAR_1) ? "user-mode" :
          (VAR_8 == VAR_2) ? "on-chip static" :
          (VAR_8 == VAR_3) ?
          "on-chip with negotiation" : "invalid");
}

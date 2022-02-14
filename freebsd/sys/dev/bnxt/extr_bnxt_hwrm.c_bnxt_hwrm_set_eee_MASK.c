
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct hwrm_port_phy_cfg_input {int flags; int tx_lpi_timer; int eee_link_speed_mask; } ;
struct bnxt_softc {int dummy; } ;
struct TYPE_2__ {int tx_lpi_timer; int advertised; scalar_t__ tx_lpi_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct bnxt_softc *VAR_4, struct hwrm_port_phy_cfg_input *VAR_5)
{

 bool VAR_6 = 0;

 if (VAR_6) {
 } else {
  VAR_5->flags |=
      FUNC_2(VAR_0);
 }
}

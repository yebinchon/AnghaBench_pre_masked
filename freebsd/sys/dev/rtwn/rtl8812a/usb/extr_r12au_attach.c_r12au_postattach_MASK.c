
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtwn_usb_softc {int uc_udev; } ;
struct TYPE_2__ {int ic_ioctl; } ;
struct rtwn_softc {TYPE_1__ sc_ic; int * mac_prog; int sc_set_led; int sc_rf_read; struct r12a_softc* sc_priv; } ;
struct r12a_softc {int ac_usb_dma_size; int ac_usb_dma_time; int chip; scalar_t__ board_type; scalar_t__ ext_lna_5g; scalar_t__ ext_pa_5g; scalar_t__ ext_lna_2g; scalar_t__ ext_pa_2g; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct rtwn_usb_softc* FUNC_0 (struct rtwn_softc*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int * VAR_10 ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct rtwn_softc *VAR_11)
{
 struct rtwn_usb_softc *VAR_12 = FUNC_0(VAR_11);
 struct r12a_softc *VAR_13 = VAR_11->sc_priv;

 if (FUNC_1(VAR_12->uc_udev) == VAR_4) {
  VAR_13->ac_usb_dma_size = 0x07;
  VAR_13->ac_usb_dma_time = 0x1a;
 } else {
  VAR_13->ac_usb_dma_size = 0x01;
  VAR_13->ac_usb_dma_time = 0x10;
 }

 if (VAR_13->chip & VAR_0)
  VAR_11->sc_rf_read = VAR_5;
 else
  VAR_11->sc_rf_read = VAR_7;

 if (VAR_13->board_type == VAR_2 ||
     VAR_13->board_type == VAR_3 ||
     VAR_13->board_type == VAR_1)
  VAR_11->sc_set_led = VAR_9;
 else
  VAR_11->sc_set_led = VAR_8;

 if (!(VAR_13->ext_pa_2g || VAR_13->ext_lna_2g ||
     VAR_13->ext_pa_5g || VAR_13->ext_lna_5g))
  VAR_11->mac_prog = &VAR_10[0];

 VAR_11->sc_ic.ic_ioctl = VAR_6;
}

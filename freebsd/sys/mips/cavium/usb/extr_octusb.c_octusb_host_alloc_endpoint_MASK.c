
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct octusb_td {TYPE_2__* qh; } ;
struct octusb_softc {TYPE_1__* sc_port; } ;
struct TYPE_4__ {int ep_allocated; size_t root_port_index; int ep_num; scalar_t__ dev_speed; int fixup_handle; int ep_handle; scalar_t__ fixup_actlen; scalar_t__ fixup_pending; scalar_t__ fixup_off; scalar_t__ fixup_len; scalar_t__ fixup_complete; int ep_toggle_next; int hs_hub_port; int hs_hub_addr; int ep_mult; int ep_interval; int ep_type; int max_packet_size; int dev_addr; struct octusb_softc* sc; } ;
struct TYPE_3__ {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *,int ,int ,int,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static uint8_t
FUNC_5(struct octusb_td *VAR_5)
{
 struct octusb_softc *VAR_6;
 int VAR_7;

 if (VAR_5->qh->fixup_pending)
  return (1);

 if (VAR_5->qh->ep_allocated)
  return (0);


 VAR_6 = VAR_5->qh->sc;

 VAR_7 = FUNC_1(
     &VAR_6->sc_port[VAR_5->qh->root_port_index].state,
     0,
     VAR_5->qh->dev_addr,
     VAR_5->qh->ep_num & VAR_2,
     FUNC_4(VAR_5->qh->dev_speed),
     VAR_5->qh->max_packet_size,
     FUNC_3(VAR_5->qh->ep_type),
     (VAR_5->qh->ep_num & VAR_3) ? VAR_0 :
     VAR_1,
     VAR_5->qh->ep_interval,
     (VAR_5->qh->dev_speed == VAR_4) ? VAR_5->qh->ep_mult : 0,
     VAR_5->qh->hs_hub_addr,
     VAR_5->qh->hs_hub_port);

 if (VAR_7 < 0) {
  FUNC_0(1, "cvmx_usb_open_pipe failed: %d\n", VAR_7);
  return (1);
 }

 FUNC_2(
     &VAR_6->sc_port[VAR_5->qh->root_port_index].state,
     VAR_7, VAR_5->qh->ep_toggle_next);

 VAR_5->qh->fixup_handle = -1;
 VAR_5->qh->fixup_complete = 0;
 VAR_5->qh->fixup_len = 0;
 VAR_5->qh->fixup_off = 0;
 VAR_5->qh->fixup_pending = 0;
 VAR_5->qh->fixup_actlen = 0;

 VAR_5->qh->ep_handle = VAR_7;
 VAR_5->qh->ep_allocated = 1;

 return (0);
}

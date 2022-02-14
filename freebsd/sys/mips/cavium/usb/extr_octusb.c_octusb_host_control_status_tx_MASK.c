
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct octusb_td {int error_any; TYPE_2__* qh; } ;
struct octusb_softc {TYPE_1__* sc_port; } ;
struct TYPE_4__ {scalar_t__ fixup_complete; int* fixup_buf; size_t root_port_index; int fixup_handle; int fixup_pending; int fixup_len; scalar_t__ fixup_phys; int ep_handle; int fixup_pc; struct octusb_softc* sc; } ;
struct TYPE_3__ {int state; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,scalar_t__,scalar_t__,int ,int *,struct octusb_td*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct octusb_td*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static uint8_t
FUNC_3(struct octusb_td *VAR_2)
{
 int VAR_3;


 if (FUNC_1(VAR_2))
  return (1);


 if (VAR_2->error_any)
  return (0);

 if (VAR_2->qh->fixup_complete != 0) {

  VAR_2->qh->fixup_complete = 0;

  return (0);
 }

 if (!(VAR_2->qh->fixup_buf[0] & VAR_0)) {

  struct octusb_softc *VAR_4;


  VAR_4 = VAR_2->qh->sc;


  FUNC_2(VAR_2->qh->fixup_pc);


  VAR_3 = FUNC_0(
      &VAR_4->sc_port[VAR_2->qh->root_port_index].state,
      VAR_2->qh->ep_handle, VAR_2->qh->fixup_phys,
      VAR_2->qh->fixup_phys + 8, VAR_2->qh->fixup_len,
      &VAR_1, VAR_2);


  if (VAR_3 < 0) {
   VAR_2->error_any = 1;
   return (0);
  }
  VAR_2->qh->fixup_handle = VAR_3;
  VAR_2->qh->fixup_pending = 1;
  VAR_2->qh->fixup_complete = 0;

  return (1);
 }
 return (0);
}

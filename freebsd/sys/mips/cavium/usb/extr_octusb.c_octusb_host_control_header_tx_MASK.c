
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct octusb_td {int error_any; int remainder; int offset; TYPE_2__* qh; int pc; } ;
struct octusb_softc {TYPE_1__* sc_port; } ;
struct TYPE_4__ {scalar_t__ fixup_complete; int* fixup_buf; int fixup_len; size_t root_port_index; int fixup_handle; int fixup_pending; scalar_t__ fixup_phys; int ep_handle; int fixup_pc; struct octusb_softc* sc; scalar_t__ fixup_off; } ;
struct TYPE_3__ {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int *,int ,scalar_t__,scalar_t__,int,int *,struct octusb_td*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct octusb_td*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int,int*,int) ;

__attribute__((used)) static uint8_t
FUNC_6(struct octusb_td *VAR_3)
{
 int VAR_4;


 if (FUNC_2(VAR_3))
  return (1);


 if (VAR_3->error_any)
  return (0);

 if (VAR_3->qh->fixup_complete != 0) {

  VAR_3->qh->fixup_complete = 0;


  FUNC_4(VAR_3->qh->fixup_pc);
  return (0);
 }

 if (VAR_3->remainder != 8) {
  VAR_3->error_any = 1;
  return (0);
 }
 FUNC_5(VAR_3->pc, VAR_3->offset, VAR_3->qh->fixup_buf, 8);


 VAR_3->offset += 8;
 VAR_3->remainder -= 8;


 VAR_3->qh->fixup_len = FUNC_0(VAR_3->qh->fixup_buf + 6);
 VAR_3->qh->fixup_off = 0;

 if (VAR_3->qh->fixup_len > (VAR_0 - 8)) {
  VAR_3->error_any = 1;
  return (0);
 }

 if (VAR_3->qh->fixup_buf[0] & VAR_1) {

  struct octusb_softc *VAR_5;


  VAR_5 = VAR_3->qh->sc;


  FUNC_3(VAR_3->qh->fixup_pc);

  VAR_4 = FUNC_1(
      &VAR_5->sc_port[VAR_3->qh->root_port_index].state,
      VAR_3->qh->ep_handle, VAR_3->qh->fixup_phys,
      VAR_3->qh->fixup_phys + 8, VAR_3->qh->fixup_len,
      &VAR_2, VAR_3);

  if (VAR_4 < 0) {
   VAR_3->error_any = 1;
   return (0);
  }
  VAR_3->qh->fixup_handle = VAR_4;
  VAR_3->qh->fixup_pending = 1;
  VAR_3->qh->fixup_complete = 0;

  return (1);
 }
 return (0);
}

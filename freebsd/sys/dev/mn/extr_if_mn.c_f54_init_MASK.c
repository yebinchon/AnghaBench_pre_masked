
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mn_softc {scalar_t__ framing; TYPE_1__* f54w; } ;
struct TYPE_2__ {int ipc; int xpm0; int xpm1; int xpm2; int imr0; int imr1; int imr2; int imr3; int imr4; int fmr0; int fmr1; int fmr2; int lim1; int pcd; int pcr; int xsw; int xsp; int xc0; int xc1; int rc0; int rc1; int cmdr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_0(struct mn_softc *VAR_2)
{
 VAR_2->f54w->ipc = 0x07;

 VAR_2->f54w->xpm0 = 0xbd;
 VAR_2->f54w->xpm1 = 0x03;
 VAR_2->f54w->xpm2 = 0x00;

 VAR_2->f54w->imr0 = 0x18;
 VAR_2->f54w->imr1 = 0x08;
 VAR_2->f54w->imr2 = 0x00;
 VAR_2->f54w->imr3 = 0x38;
 VAR_2->f54w->imr4 = 0x00;

 VAR_2->f54w->fmr0 = 0xf0;
 VAR_2->f54w->fmr1 = 0x0e;
 if (VAR_2->framing == VAR_0)
  VAR_2->f54w->fmr2 = 0x03;
 else if (VAR_2->framing == VAR_1)
  VAR_2->f54w->fmr2 = 0x33;

 VAR_2->f54w->lim1 = 0xb0;
 VAR_2->f54w->pcd = 0x0a;
 VAR_2->f54w->pcr = 0x15;
 VAR_2->f54w->xsw = 0x9f;
 if (VAR_2->framing == VAR_0)
  VAR_2->f54w->xsp = 0x1c;
 else if (VAR_2->framing == VAR_1)
  VAR_2->f54w->xsp = 0x3c;
 VAR_2->f54w->xc0 = 0x07;
 VAR_2->f54w->xc1 = 0x3d;
 VAR_2->f54w->rc0 = 0x05;
 VAR_2->f54w->rc1 = 0x00;
 VAR_2->f54w->cmdr = 0x51;
}

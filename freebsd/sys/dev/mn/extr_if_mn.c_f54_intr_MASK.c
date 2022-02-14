
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int timeout_t ;
struct mn_softc {unsigned int falc_irq; char* name; unsigned int falc_state; unsigned int framer_state; TYPE_2__* f54r; int cnt_rbc; int cnt_cec3; int cnt_cec2; int cnt_ebc; int cnt_cec1; int cnt_cvc; int cnt_fec; TYPE_1__** ch; } ;
struct TYPE_10__ {int if_flags; } ;
struct TYPE_9__ {scalar_t__ pp_up; scalar_t__ pp_down; } ;
struct TYPE_8__ {unsigned int gis; int isr0; int isr1; int isr2; unsigned int isr3; int frs0; int frs1; int rsw; unsigned int rsp; scalar_t__ rbc; scalar_t__ cec3; scalar_t__ cec2; scalar_t__ ebc; scalar_t__ cec1; scalar_t__ cvc; scalar_t__ fec; } ;
struct TYPE_7__ {TYPE_3__ ifsppp; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 TYPE_5__* FUNC_0 (TYPE_3__*) ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (char*,char*,unsigned int,...) ;
 TYPE_3__* VAR_4 ;
 int FUNC_2 (int *,TYPE_3__*,int) ;

__attribute__((used)) static void
FUNC_3(struct mn_softc *VAR_5)
{
 unsigned VAR_6, VAR_7, VAR_8;

 VAR_6 = VAR_5->f54r->gis;
 VAR_7 = VAR_5->f54r->isr0 << 24;
 VAR_7 |= VAR_5->f54r->isr1 << 16;
 VAR_7 |= VAR_5->f54r->isr2 << 8;
 VAR_7 |= VAR_5->f54r->isr3;
 VAR_5->falc_irq = VAR_7;

 if (VAR_7 & ~0x40) {







  VAR_8 = VAR_5->f54r->frs0 << 24;
  VAR_8 |= VAR_5->f54r->frs1 << 16;
  VAR_8 |= VAR_5->f54r->rsw << 8;
  VAR_8 |= VAR_5->f54r->rsp;
  VAR_5->falc_state = VAR_8;

  VAR_8 &= ~0x01844038;
  VAR_8 &= ~0x00009fc7;
  VAR_8 &= ~0x00780000;
  VAR_8 &= ~0x06000000;







  if (VAR_8 != VAR_5->framer_state) {
   VAR_5->framer_state = VAR_8;
  }
 }


 if (!(VAR_7 & 0x40))
  return;
 VAR_5->cnt_fec += VAR_5->f54r->fec;
 VAR_5->cnt_cvc += VAR_5->f54r->cvc;
 VAR_5->cnt_cec1 += VAR_5->f54r->cec1;
 VAR_5->cnt_ebc += VAR_5->f54r->ebc;
 VAR_5->cnt_cec2 += VAR_5->f54r->cec2;
 VAR_5->cnt_cec3 += VAR_5->f54r->cec3;
 VAR_5->cnt_rbc += VAR_5->f54r->rbc;
}

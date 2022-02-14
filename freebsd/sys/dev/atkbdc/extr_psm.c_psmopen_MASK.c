
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ dz; scalar_t__ dy; scalar_t__ dx; scalar_t__ obutton; scalar_t__ button; scalar_t__ flags; } ;
struct TYPE_7__ {scalar_t__ tail; scalar_t__ head; scalar_t__ count; } ;
struct TYPE_6__ {int protocol; int level; } ;
struct TYPE_5__ {int protocol; int level; } ;
struct psm_softc {int kbdc; int unit; scalar_t__ pkterrors; scalar_t__ syncerrors; scalar_t__ pqueue_end; scalar_t__ pqueue_start; scalar_t__ button; TYPE_4__ status; TYPE_3__ queue; int * async; int watchdog; TYPE_2__ dflt_mode; TYPE_1__ mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct psm_softc*,int) ;
 int FUNC_1 (struct psm_softc*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 () ;
 int FUNC_8 (int) ;

__attribute__((used)) static int
FUNC_9(struct psm_softc *VAR_8)
{
 int VAR_9;
 int VAR_10;
 int VAR_11;


 VAR_8->mode.level = VAR_8->dflt_mode.level;
 VAR_8->mode.protocol = VAR_8->dflt_mode.protocol;
 VAR_8->watchdog = VAR_1;
 VAR_8->async = ((void*)0);


 VAR_8->queue.count = 0;
 VAR_8->queue.head = 0;
 VAR_8->queue.tail = 0;
 VAR_8->status.flags = 0;
 VAR_8->status.button = 0;
 VAR_8->status.obutton = 0;
 VAR_8->status.dx = 0;
 VAR_8->status.dy = 0;
 VAR_8->status.dz = 0;
 VAR_8->button = 0;
 VAR_8->pqueue_start = 0;
 VAR_8->pqueue_end = 0;


 FUNC_1(VAR_8);
 VAR_8->syncerrors = 0;
 VAR_8->pkterrors = 0;


 if (!FUNC_4(VAR_8->kbdc, VAR_7))
  return (VAR_0);


 VAR_11 = FUNC_7();
 VAR_9 = FUNC_2(VAR_8->kbdc);


 if (VAR_9 == -1 || !FUNC_6(VAR_8->kbdc,
     FUNC_3(VAR_8->kbdc),
     VAR_4 | VAR_3 |
     VAR_5 | VAR_2)) {

  FUNC_4(VAR_8->kbdc, VAR_1);
  FUNC_8(VAR_11);
  FUNC_5(VAR_6,
      "psm%d: unable to set the command byte (psmopen).\n",
      VAR_8->unit);
  return (VAR_0);
 }







 FUNC_8(VAR_11);


 VAR_10 = FUNC_0(VAR_8, VAR_9);


 FUNC_4(VAR_8->kbdc, VAR_1);
 return (VAR_10);
}

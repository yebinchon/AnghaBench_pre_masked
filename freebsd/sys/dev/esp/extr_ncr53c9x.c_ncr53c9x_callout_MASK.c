
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {size_t target_id; int path; int status; } ;
union ccb {TYPE_3__ ccb_h; } ;
struct TYPE_5__ {scalar_t__ offset; } ;
struct TYPE_4__ {scalar_t__ offset; } ;
struct ncr53c9x_tinfo {TYPE_2__ goal; TYPE_1__ curr; } ;
struct ncr53c9x_softc {int sc_phase; struct ncr53c9x_ecb* sc_nexus; int sc_msgout; int sc_msgpriq; scalar_t__ sc_dleft; int sc_prevphase; int sc_state; int sc_dev; struct ncr53c9x_tinfo* sc_tinfo; } ;
struct ncr53c9x_ecb {int flags; char* trace; int stat; int dleft; struct ncr53c9x_softc* sc; union ccb* ccb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct ncr53c9x_softc*) ;
 int FUNC_1 (struct ncr53c9x_softc*,int ) ;
 int FUNC_2 (struct ncr53c9x_softc*,int ) ;
 int VAR_5 ;
 int FUNC_3 (int ,char*,struct ncr53c9x_ecb*,int,int ,int ,int ,struct ncr53c9x_ecb*,int ,int,int ,long,int ,int ,char*) ;
 int FUNC_4 (struct ncr53c9x_softc*,struct ncr53c9x_ecb*) ;
 int FUNC_5 (struct ncr53c9x_softc*,int) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(void *VAR_6)
{
 struct ncr53c9x_ecb *VAR_7 = VAR_6;
 union ccb *VAR_8 = VAR_7->ccb;
 struct ncr53c9x_softc *VAR_9 = VAR_7->sc;
 struct ncr53c9x_tinfo *VAR_10;

 FUNC_1(VAR_9, VAR_3);

 VAR_10 = &VAR_9->sc_tinfo[VAR_8->ccb_h.target_id];
 FUNC_7(VAR_8->ccb_h.path);
 FUNC_3(VAR_9->sc_dev, "timed out [ecb %p (flags 0x%x, dleft %x, "
     "stat %x)], <state %d, nexus %p, phase(l %x, c %x, p %x), "
     "resid %lx, msg(q %x,o %x) %s>",
     VAR_7, VAR_7->flags, VAR_7->dleft, VAR_7->stat,
     VAR_9->sc_state, VAR_9->sc_nexus,
     FUNC_2(VAR_9, VAR_5),
     VAR_9->sc_phase, VAR_9->sc_prevphase,
     (long)VAR_9->sc_dleft, VAR_9->sc_msgpriq, VAR_9->sc_msgout,
     FUNC_0(VAR_9) ? "DMA active" : "");




 if (VAR_7->flags & VAR_2) {

  FUNC_6(" AGAIN\n");
  FUNC_5(VAR_9, 1);
 } else {

  FUNC_6("\n");
  VAR_8->ccb_h.status = VAR_0;
  FUNC_4(VAR_9, VAR_7);


  if (VAR_7 == VAR_9->sc_nexus && VAR_10->curr.offset != 0 &&
      (VAR_9->sc_phase & (VAR_4 | VAR_1)) == 0) {

   VAR_10->goal.offset = 0;
   FUNC_7(VAR_8->ccb_h.path);
   FUNC_6("sync negotiation disabled\n");
  }
 }
}

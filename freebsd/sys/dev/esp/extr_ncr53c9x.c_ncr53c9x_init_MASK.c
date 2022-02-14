
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void* width; scalar_t__ offset; scalar_t__ period; } ;
struct TYPE_3__ {void* width; scalar_t__ offset; scalar_t__ period; } ;
struct ncr53c9x_tinfo {int flags; TYPE_2__ curr; TYPE_1__ goal; int luns; } ;
struct ncr53c9x_softc {scalar_t__ sc_state; int sc_ntarg; scalar_t__ sc_minsync; int sc_cfflags; struct ncr53c9x_tinfo* sc_tinfo; int sc_prevphase; int sc_phase; scalar_t__ sc_msgoutq; scalar_t__ sc_msgout; scalar_t__ sc_msgpriq; scalar_t__ sc_flags; int * sc_nexus; int ready_list; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_2 (struct ncr53c9x_softc*,int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (struct ncr53c9x_softc*,int ) ;
 int FUNC_4 (char*) ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (struct ncr53c9x_tinfo*,int ,int) ;
 int FUNC_7 (struct ncr53c9x_softc*,int ) ;
 int FUNC_8 (struct ncr53c9x_softc*) ;
 int FUNC_9 (struct ncr53c9x_softc*) ;

__attribute__((used)) static void
FUNC_10(struct ncr53c9x_softc *VAR_11, int VAR_12)
{
 struct ncr53c9x_tinfo *VAR_13;
 int VAR_14;

 FUNC_3(VAR_11, VAR_2);

 FUNC_4(("[NCR_INIT(%d) %d] ", VAR_12, VAR_11->sc_state));

 if (VAR_11->sc_state == 0) {


  FUNC_5(&VAR_11->ready_list);
  VAR_11->sc_nexus = ((void*)0);
  FUNC_6(VAR_11->sc_tinfo, 0, sizeof(*VAR_11->sc_tinfo));
  for (VAR_14 = 0; VAR_14 < VAR_11->sc_ntarg; VAR_14++) {
   FUNC_1(&VAR_11->sc_tinfo[VAR_14].luns);
  }
 } else
  FUNC_7(VAR_11, VAR_0);




 FUNC_8(VAR_11);

 VAR_11->sc_flags = 0;
 VAR_11->sc_msgpriq = VAR_11->sc_msgout = VAR_11->sc_msgoutq = 0;
 VAR_11->sc_phase = VAR_11->sc_prevphase = VAR_1;







 if (VAR_11->sc_state == 0) {
  for (VAR_14 = 0; VAR_14 < VAR_11->sc_ntarg; VAR_14++) {
   VAR_13 = &VAR_11->sc_tinfo[VAR_14];


   VAR_13->flags = ((VAR_11->sc_minsync != 0 &&
       (VAR_11->sc_cfflags & (1 << ((VAR_14 & 7) + 8))) == 0) ?
       0 : VAR_9) |
       ((VAR_11->sc_cfflags & (1 << (VAR_14 & 7))) == 0 ?
       0 : VAR_7);
   VAR_13->curr.period = VAR_13->goal.period = 0;
   VAR_13->curr.offset = VAR_13->goal.offset = 0;
   VAR_13->curr.width = VAR_13->goal.width =
       VAR_3;
  }
 } else {
  for (VAR_14 = 0; VAR_14 < VAR_11->sc_ntarg; VAR_14++) {
   VAR_13 = &VAR_11->sc_tinfo[VAR_14];
   VAR_13->flags &= ~(VAR_8 | VAR_10);
   VAR_13->curr.period = 0;
   VAR_13->curr.offset = 0;
   VAR_13->curr.width = VAR_3;
  }
 }

 if (VAR_12) {
  VAR_11->sc_state = VAR_6;
  FUNC_2(VAR_11, VAR_4);

  FUNC_0(250000);
 } else {
  VAR_11->sc_state = VAR_5;
  FUNC_9(VAR_11);
 }
}

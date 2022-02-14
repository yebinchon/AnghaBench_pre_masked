
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_raid_softc {int sc_queue_mtx; } ;
struct g_raid_event {int e_flags; scalar_t__ e_error; int e_event; int e_tgt; } ;


 int FUNC_0 (int,struct g_raid_softc*,char*,struct g_raid_event*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct g_raid_event*) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct g_raid_event*) ;

__attribute__((used)) static void
FUNC_10(struct g_raid_softc *VAR_5, struct g_raid_event *VAR_6)
{

 if ((VAR_6->e_flags & VAR_3) != 0)
  VAR_6->e_error = FUNC_6(VAR_6->e_tgt, VAR_6->e_event);
 else if ((VAR_6->e_flags & VAR_0) != 0)
  VAR_6->e_error = FUNC_3(VAR_6->e_tgt, VAR_6->e_event);
 else if ((VAR_6->e_flags & VAR_2) != 0)
  VAR_6->e_error = FUNC_5(VAR_6->e_tgt, VAR_6->e_event);
 else
  VAR_6->e_error = FUNC_4(VAR_6->e_tgt, VAR_6->e_event);
 if ((VAR_6->e_flags & VAR_4) == 0) {
  FUNC_1(VAR_6->e_error == 0,
      ("Error cannot be handled."));
  FUNC_2(VAR_6);
 } else {
  VAR_6->e_flags |= VAR_1;
  FUNC_0(4, VAR_5, "Waking up %p.", VAR_6);
  FUNC_7(&VAR_5->sc_queue_mtx);
  FUNC_9(VAR_6);
  FUNC_8(&VAR_5->sc_queue_mtx);
 }
}

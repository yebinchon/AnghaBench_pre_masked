
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct cdev {int dummy; } ;
struct apm_softc {int sc_flags; scalar_t__ event_ptr; scalar_t__ event_count; int event_filter; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 struct apm_softc VAR_3 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct cdev*) ;

__attribute__((used)) static int
FUNC_3(struct cdev *VAR_4, int VAR_5, int VAR_6, struct thread *VAR_7)
{
 struct apm_softc *VAR_8 = &VAR_3;

 switch (FUNC_2(VAR_4)) {
 case 129:
  FUNC_0();
  VAR_8->sc_flags &= ~VAR_0;
  FUNC_1(VAR_8->event_filter, sizeof VAR_8->event_filter);
  break;
 case 128:
  VAR_8->sc_flags &= ~VAR_1;
  break;
 }
 if ((VAR_8->sc_flags & VAR_2) == 0) {
  VAR_8->event_count = 0;
  VAR_8->event_ptr = 0;
 }
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct cdev {int dummy; } ;
struct apm_softc {scalar_t__ initialized; int sc_flags; int event_filter; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct apm_softc VAR_6 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct cdev*) ;

__attribute__((used)) static int
FUNC_2(struct cdev *VAR_7, int VAR_8, int VAR_9, struct thread *VAR_10)
{
 struct apm_softc *VAR_11 = &VAR_6;

 if (VAR_11 == ((void*)0) || VAR_11->initialized == 0)
  return (VAR_2);

 switch (FUNC_1(VAR_7)) {
 case 129:
  if (!(VAR_8 & VAR_3))
   return VAR_1;
  if (VAR_11->sc_flags & VAR_4)
   return VAR_0;
  VAR_11->sc_flags |= VAR_4;
  FUNC_0(VAR_11->event_filter, sizeof VAR_11->event_filter);
  break;
 case 128:
  VAR_11->sc_flags |= VAR_5;
  break;
 }
 return 0;
}

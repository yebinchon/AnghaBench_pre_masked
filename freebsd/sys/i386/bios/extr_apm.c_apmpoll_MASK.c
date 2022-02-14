
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct cdev {int dummy; } ;
struct apm_softc {int sc_rsel; scalar_t__ event_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct apm_softc VAR_2 ;
 int FUNC_0 (struct thread*,int *) ;

__attribute__((used)) static int
FUNC_1(struct cdev *VAR_3, int VAR_4, struct thread *VAR_5)
{
 struct apm_softc *VAR_6 = &VAR_2;
 int VAR_7 = 0;

 if (VAR_4 & (VAR_0 | VAR_1)) {
  if (VAR_6->event_count) {
   VAR_7 |= VAR_4 & (VAR_0 | VAR_1);
  } else {
   FUNC_0(VAR_5, &VAR_6->sc_rsel);
  }
 }

 return (VAR_7);
}

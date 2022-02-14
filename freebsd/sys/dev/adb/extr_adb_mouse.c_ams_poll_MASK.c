
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct cdev {int dummy; } ;
struct adb_mouse_softc {scalar_t__ xdelta; scalar_t__ ydelta; scalar_t__ buttons; scalar_t__ last_buttons; scalar_t__ packet_read_len; int sc_mtx; int rsel; } ;


 struct adb_mouse_softc* FUNC_0 (struct cdev*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct thread*,int *) ;

__attribute__((used)) static int
FUNC_4(struct cdev *VAR_3, int VAR_4, struct thread *VAR_5)
{
 struct adb_mouse_softc *VAR_6;

 VAR_6 = FUNC_0(VAR_3);
 if (VAR_6 == ((void*)0))
  return (VAR_0);

 if (VAR_4 & (VAR_1 | VAR_2)) {
  FUNC_1(&VAR_6->sc_mtx);

  if (VAR_6->xdelta == 0 && VAR_6->ydelta == 0 &&
     VAR_6->buttons == VAR_6->last_buttons &&
     VAR_6->packet_read_len == 0) {
   FUNC_3(VAR_5, &VAR_6->rsel);
   VAR_4 = 0;
  } else {
   VAR_4 &= (VAR_1 | VAR_2);
  }

  FUNC_2(&VAR_6->sc_mtx);
 }

 return VAR_4;
}

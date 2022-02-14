
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct cdev {int dummy; } ;
struct adb_mouse_softc {int sc_mtx; scalar_t__ buttons; scalar_t__ ydelta; scalar_t__ xdelta; scalar_t__ packet_read_len; } ;


 struct adb_mouse_softc* FUNC_0 (struct cdev*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(struct cdev *VAR_1, int VAR_2, int VAR_3, struct thread *VAR_4)
{
 struct adb_mouse_softc *VAR_5;

 VAR_5 = FUNC_0(VAR_1);
 if (VAR_5 == ((void*)0))
  return (VAR_0);

 FUNC_1(&VAR_5->sc_mtx);
 VAR_5->packet_read_len = 0;
 VAR_5->xdelta = 0;
 VAR_5->ydelta = 0;
 VAR_5->buttons = 0;
 FUNC_2(&VAR_5->sc_mtx);

 return (0);
}

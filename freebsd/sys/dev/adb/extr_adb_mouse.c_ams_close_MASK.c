
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct cdev {int dummy; } ;
struct adb_mouse_softc {int rsel; int sc_cv; } ;


 struct adb_mouse_softc* FUNC_0 (struct cdev*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static int
FUNC_3(struct cdev *VAR_1, int VAR_2, int VAR_3, struct thread *VAR_4)
{
 struct adb_mouse_softc *VAR_5;

 VAR_5 = FUNC_0(VAR_1);

 FUNC_1(&VAR_5->sc_cv);
 FUNC_2(&VAR_5->rsel, VAR_0);
 return (0);
}

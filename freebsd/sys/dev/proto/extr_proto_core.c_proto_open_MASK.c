
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct proto_softc {scalar_t__ sc_opencnt; int sc_mtx; } ;
struct proto_res {int r_opened; } ;
struct cdev {struct proto_res* si_drv2; struct proto_softc* si_drv1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int
FUNC_2(struct cdev *VAR_2, int VAR_3, int VAR_4, struct thread *VAR_5)
{
 struct proto_res *VAR_6;
 struct proto_softc *VAR_7;
 int VAR_8;

 VAR_7 = VAR_2->si_drv1;
 FUNC_0(&VAR_7->sc_mtx);
 if (VAR_7->sc_opencnt >= 0) {
  VAR_6 = VAR_2->si_drv2;
  if (!VAR_6->r_opened) {
   VAR_6->r_opened = 1;
   VAR_7->sc_opencnt++;
   VAR_8 = 0;
  } else
   VAR_8 = VAR_0;
 } else
  VAR_8 = VAR_1;
 FUNC_1(&VAR_7->sc_mtx);
 return (VAR_8);
}

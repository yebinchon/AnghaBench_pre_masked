
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int dummy; } ;
struct proto_softc {scalar_t__ sc_opencnt; int sc_mtx; } ;
struct TYPE_2__ {int busdma; } ;
struct proto_res {scalar_t__ r_type; scalar_t__ r_opened; TYPE_1__ r_d; } ;
struct cdev {struct proto_res* si_drv2; struct proto_softc* si_drv1; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct proto_softc*,int ) ;

__attribute__((used)) static int
FUNC_3(struct cdev *VAR_2, int VAR_3, int VAR_4, struct thread *VAR_5)
{
 struct proto_res *VAR_6;
 struct proto_softc *VAR_7;
 int VAR_8;

 VAR_7 = VAR_2->si_drv1;
 FUNC_0(&VAR_7->sc_mtx);
 if (VAR_7->sc_opencnt > 0) {
  VAR_6 = VAR_2->si_drv2;
  if (VAR_6->r_opened) {
   if (VAR_6->r_type == VAR_1)
    FUNC_2(VAR_7, VAR_6->r_d.busdma);
   VAR_6->r_opened = 0;
   VAR_7->sc_opencnt--;
   VAR_8 = 0;
  } else
   VAR_8 = VAR_0;
 } else
  VAR_8 = VAR_0;
 FUNC_1(&VAR_7->sc_mtx);
 return (VAR_8);
}

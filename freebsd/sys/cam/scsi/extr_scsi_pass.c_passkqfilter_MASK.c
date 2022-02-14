
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int si_note; } ;
struct pass_softc {TYPE_1__ read_select; } ;
struct knote {int * kn_fop; scalar_t__ kn_hook; } ;
struct cdev {scalar_t__ si_drv1; } ;
struct cam_periph {scalar_t__ softc; } ;
typedef scalar_t__ caddr_t ;


 int FUNC_0 (int *,struct knote*,int ) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_1(struct cdev *VAR_1, struct knote *VAR_2)
{
 struct cam_periph *VAR_3;
 struct pass_softc *VAR_4;

 VAR_3 = (struct cam_periph *)VAR_1->si_drv1;
 VAR_4 = (struct pass_softc *)VAR_3->softc;

 VAR_2->kn_hook = (caddr_t)VAR_3;
 VAR_2->kn_fop = &VAR_0;
 FUNC_0(&VAR_4->read_select.si_note, VAR_2, 0);

 return (0);
}

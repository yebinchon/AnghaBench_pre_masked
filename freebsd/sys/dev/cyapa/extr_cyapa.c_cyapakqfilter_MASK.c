
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct knote {int kn_filter; void* kn_hook; int * kn_fop; } ;
struct knlist {int dummy; } ;
struct TYPE_2__ {struct knlist si_note; } ;
struct cyapa_softc {TYPE_1__ selinfo; } ;
struct cdev {struct cyapa_softc* si_drv1; } ;


 int VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (struct knlist*,struct knote*,int ) ;

__attribute__((used)) static int
FUNC_1(struct cdev *VAR_2, struct knote *VAR_3)
{
 struct cyapa_softc *VAR_4;
 struct knlist *VAR_5;

 VAR_4 = VAR_2->si_drv1;

 switch(VAR_3->kn_filter) {
 case 128:
  VAR_3->kn_fop = &VAR_1;
  VAR_3->kn_hook = (void *)VAR_4;
  break;
 default:
  return (VAR_0);
 }
 VAR_5 = &VAR_4->selinfo.si_note;
 FUNC_0(VAR_5, VAR_3, 0);

 return (0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct knote {int kn_filter; struct beri_softc* kn_hook; int * kn_fop; } ;
struct cdev {struct beri_softc* si_drv1; } ;
struct TYPE_2__ {int si_note; } ;
struct beri_softc {TYPE_1__ beri_rsel; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct knote*,int ) ;

__attribute__((used)) static int
FUNC_1(struct cdev *VAR_3, struct knote *VAR_4)
{
 struct beri_softc *VAR_5;

 VAR_5 = VAR_3->si_drv1;

 switch(VAR_4->kn_filter) {
 case 129:
  VAR_4->kn_fop = &VAR_1;
  break;
 case 128:
  VAR_4->kn_fop = &VAR_2;
  break;
 default:
  return(VAR_0);
 }

 VAR_4->kn_hook = VAR_5;
 FUNC_0(&VAR_5->beri_rsel.si_note, VAR_4, 0);

 return (0);
}

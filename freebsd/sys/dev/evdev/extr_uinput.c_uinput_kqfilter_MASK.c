
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int si_note; } ;
struct uinput_cdev_state {TYPE_1__ ucs_selp; } ;
struct knote {int kn_filter; scalar_t__ kn_hook; int * kn_fop; } ;
struct cdev {int dummy; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;

 int FUNC_0 (void**) ;
 int FUNC_1 (int *,struct knote*,int ) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_2(struct cdev *VAR_2, struct knote *VAR_3)
{
 struct uinput_cdev_state *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0((void **)&VAR_4);
 if (VAR_5 != 0)
  return (VAR_5);

 switch(VAR_3->kn_filter) {
 case 128:
  VAR_3->kn_fop = &VAR_1;
  break;
 default:
  return(VAR_0);
 }
 VAR_3->kn_hook = (caddr_t)VAR_4;

 FUNC_1(&VAR_4->ucs_selp.si_note, VAR_3, 0);
 return (0);
}

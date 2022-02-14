
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct knote {int kn_filter; scalar_t__ kn_hook; int * kn_fop; } ;
struct TYPE_2__ {int si_note; } ;
struct evdev_client {TYPE_1__ ec_selp; scalar_t__ ec_revoked; } ;
struct cdev {int dummy; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (void**) ;
 int VAR_2 ;
 int FUNC_1 (int *,struct knote*,int ) ;

__attribute__((used)) static int
FUNC_2(struct cdev *VAR_3, struct knote *VAR_4)
{
 struct evdev_client *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0((void **)&VAR_5);
 if (VAR_6 != 0)
  return (VAR_6);

 if (VAR_5->ec_revoked)
  return (VAR_1);

 switch(VAR_4->kn_filter) {
 case 128:
  VAR_4->kn_fop = &VAR_2;
  break;
 default:
  return(VAR_0);
 }
 VAR_4->kn_hook = (caddr_t)VAR_5;

 FUNC_1(&VAR_5->ec_selp.si_note, VAR_4, 0);
 return (0);
}

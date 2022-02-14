
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int si_note; } ;
struct TYPE_3__ {int si_note; } ;
struct tty {TYPE_2__ t_outpoll; TYPE_1__ t_inpoll; } ;
struct knote {int kn_filter; int * kn_fop; struct tty* kn_hook; } ;
struct cdev {struct tty* si_drv1; } ;


 int VAR_0 ;


 int FUNC_0 (int *,struct knote*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct tty*) ;
 int FUNC_2 (struct tty*) ;

__attribute__((used)) static int
FUNC_3(struct cdev *VAR_3, struct knote *VAR_4)
{
 struct tty *VAR_5 = VAR_3->si_drv1;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_5);
 if (VAR_6)
  return (VAR_6);

 switch (VAR_4->kn_filter) {
 case 129:
  VAR_4->kn_hook = VAR_5;
  VAR_4->kn_fop = &VAR_1;
  FUNC_0(&VAR_5->t_inpoll.si_note, VAR_4, 1);
  break;
 case 128:
  VAR_4->kn_hook = VAR_5;
  VAR_4->kn_fop = &VAR_2;
  FUNC_0(&VAR_5->t_outpoll.si_note, VAR_4, 1);
  break;
 default:
  VAR_6 = VAR_0;
  break;
 }

 FUNC_1(VAR_5);
 return (VAR_6);
}

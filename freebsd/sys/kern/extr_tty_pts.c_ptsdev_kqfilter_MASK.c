
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tty {int dummy; } ;
struct TYPE_4__ {int si_note; } ;
struct TYPE_3__ {int si_note; } ;
struct pts_softc {TYPE_2__ pts_inpoll; TYPE_1__ pts_outpoll; } ;
struct knote {int kn_filter; int * kn_fop; } ;
struct file {struct tty* f_data; } ;


 int VAR_0 ;


 int FUNC_0 (int *,struct knote*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct tty*) ;
 struct pts_softc* FUNC_2 (struct tty*) ;
 int FUNC_3 (struct tty*) ;

__attribute__((used)) static int
FUNC_4(struct file *VAR_3, struct knote *VAR_4)
{
 struct tty *VAR_5 = VAR_3->f_data;
 struct pts_softc *VAR_6 = FUNC_2(VAR_5);
 int VAR_7 = 0;

 FUNC_1(VAR_5);

 switch (VAR_4->kn_filter) {
 case 129:
  VAR_4->kn_fop = &VAR_1;
  FUNC_0(&VAR_6->pts_outpoll.si_note, VAR_4, 1);
  break;
 case 128:
  VAR_4->kn_fop = &VAR_2;
  FUNC_0(&VAR_6->pts_inpoll.si_note, VAR_4, 1);
  break;
 default:
  VAR_7 = VAR_0;
  break;
 }

 FUNC_3(VAR_5);
 return (VAR_7);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty {int dummy; } ;
struct TYPE_2__ {int si_note; } ;
struct pts_softc {TYPE_1__ pts_outpoll; } ;
struct knote {struct file* kn_fp; } ;
struct file {struct tty* f_data; } ;


 int FUNC_0 (int *,struct knote*,int ) ;
 struct pts_softc* FUNC_1 (struct tty*) ;

__attribute__((used)) static void
FUNC_2(struct knote *VAR_0)
{
 struct file *VAR_1 = VAR_0->kn_fp;
 struct tty *VAR_2 = VAR_1->f_data;
 struct pts_softc *VAR_3 = FUNC_1(VAR_2);

 FUNC_0(&VAR_3->pts_outpoll.si_note, VAR_0, 0);
}

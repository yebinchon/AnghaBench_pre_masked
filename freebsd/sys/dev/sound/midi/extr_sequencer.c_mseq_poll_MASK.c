
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct seq_softc {int unit; int playing; int out_water; int seq_lock; int in_sel; int in_q; int out_sel; int out_q; int out_cv; int state_cv; } ;
struct cdev {struct seq_softc* si_drv1; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (struct thread*,int *) ;

int
FUNC_8(struct cdev *VAR_4, int VAR_5, struct thread *VAR_6)
{
 int VAR_7, VAR_8;
 struct seq_softc *VAR_9 = VAR_4->si_drv1;

 FUNC_2(3, FUNC_6("seq_poll: unit %d.\n", VAR_9->unit));
 FUNC_2(1, FUNC_6("seq_poll: unit %d.\n", VAR_9->unit));

 FUNC_4(&VAR_9->seq_lock);

 VAR_7 = 0;


 if ((VAR_5 & (VAR_1 | VAR_3)) != 0) {

  VAR_9->playing = 1;
  FUNC_3(&VAR_9->state_cv);
  FUNC_3(&VAR_9->out_cv);

  VAR_8 = VAR_9->out_water;

  if (FUNC_0(VAR_9->out_q) < VAR_8)

   FUNC_7(VAR_6, &VAR_9->out_sel);
  else

   VAR_7 |= VAR_5 & (VAR_1 | VAR_3);
 }
 if ((VAR_5 & (VAR_0 | VAR_2)) != 0) {



  VAR_8 = 1;
  if (FUNC_1(VAR_9->in_q) < VAR_8)

   FUNC_7(VAR_6, &VAR_9->in_sel);
  else

   VAR_7 |= VAR_5 & (VAR_0 | VAR_2);
 }
 FUNC_5(&VAR_9->seq_lock);

 return (VAR_7);
}

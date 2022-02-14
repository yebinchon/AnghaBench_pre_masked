
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct snd_midi {int flags; int busy; int lock; int qlock; int cookie; } ;
struct cdev {struct snd_midi* si_drv1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct snd_midi*,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int,...) ;

int
FUNC_5(struct cdev *VAR_7, int VAR_8, int VAR_9, struct thread *VAR_10)
{
 struct snd_midi *VAR_11 = VAR_7->si_drv1;
 int VAR_12;
 int VAR_13;

 FUNC_0(1, FUNC_4("midi_close %p %s %s\n", VAR_10,
     VAR_8 & VAR_1 ? "M_RX" : "", VAR_8 & VAR_2 ? "M_TX" : ""));

 if (VAR_11 == ((void*)0))
  return VAR_0;

 FUNC_2(&VAR_11->lock);
 FUNC_2(&VAR_11->qlock);

 if ((VAR_8 & VAR_1 && !(VAR_11->flags & VAR_3)) ||
     (VAR_8 & VAR_2 && !(VAR_11->flags & VAR_5))) {
  VAR_12 = VAR_0;
  goto err;
 }
 VAR_11->busy--;

 VAR_13 = VAR_11->flags;

 if (VAR_8 & VAR_1)
  VAR_11->flags &= ~(VAR_3 | VAR_4);
 if (VAR_8 & VAR_2)
  VAR_11->flags &= ~VAR_5;

 if ((VAR_11->flags & (VAR_6 | VAR_4)) != (VAR_13 & (VAR_4 | VAR_6)))
  FUNC_1(VAR_11, VAR_11->cookie, VAR_11->flags);

 FUNC_0(1, FUNC_4("midi_close: closed, busy = %d.\n", VAR_11->busy));

 FUNC_3(&VAR_11->qlock);
 FUNC_3(&VAR_11->lock);
 VAR_12 = 0;
err: return VAR_12;
}

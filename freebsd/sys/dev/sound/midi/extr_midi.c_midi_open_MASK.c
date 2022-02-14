
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct snd_midi {int flags; int lock; int qlock; int cookie; int inq; scalar_t__ async; scalar_t__ wchan; scalar_t__ rchan; int busy; int outq; } ;
struct cdev {struct snd_midi* si_drv1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (struct snd_midi*,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,...) ;

int
FUNC_7(struct cdev *VAR_7, int VAR_8, int VAR_9, struct thread *VAR_10)
{
 struct snd_midi *VAR_11 = VAR_7->si_drv1;
 int VAR_12;

 FUNC_2(1, FUNC_6("midiopen %p %s %s\n", VAR_10,
     VAR_8 & VAR_2 ? "M_RX" : "", VAR_8 & VAR_3 ? "M_TX" : ""));
 if (VAR_11 == ((void*)0))
  return VAR_1;

 FUNC_4(&VAR_11->lock);
 FUNC_4(&VAR_11->qlock);

 VAR_12 = 0;

 if (VAR_8 & VAR_2) {
  if (FUNC_1(VAR_11->inq) == 0)
   VAR_12 = VAR_1;
  else if (VAR_11->flags & VAR_4)
   VAR_12 = VAR_0;
  if (VAR_12)
   goto err;
 }
 if (VAR_8 & VAR_3) {
  if (FUNC_1(VAR_11->outq) == 0)
   VAR_12 = VAR_1;
  else if (VAR_11->flags & VAR_6)
   VAR_12 = VAR_0;
  if (VAR_12)
   goto err;
 }
 VAR_11->busy++;

 VAR_11->rchan = 0;
 VAR_11->wchan = 0;
 VAR_11->async = 0;

 if (VAR_8 & VAR_2) {
  VAR_11->flags |= VAR_4 | VAR_5;




  FUNC_0(VAR_11->inq);
 }

 if (VAR_8 & VAR_3)
  VAR_11->flags |= VAR_6;

 FUNC_3(VAR_11, VAR_11->cookie, VAR_11->flags);

 FUNC_2(2, FUNC_6("midi_open: opened.\n"));

err: FUNC_5(&VAR_11->qlock);
 FUNC_5(&VAR_11->lock);
 return VAR_12;
}

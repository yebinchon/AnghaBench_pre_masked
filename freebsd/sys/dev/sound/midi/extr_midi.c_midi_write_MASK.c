
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio {int uio_resid; } ;
struct snd_midi {int flags; int wchan; int lock; int qlock; int cookie; int outq; int busy; } ;
struct cdev {struct snd_midi* si_drv1; } ;
typedef int intmax_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;
 int VAR_3 ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (struct snd_midi*,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (int*,int *,int,char*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (char*,int,struct uio*) ;

int
FUNC_11(struct cdev *VAR_9, struct uio *VAR_10, int VAR_11)
{

 struct snd_midi *VAR_12 = VAR_9->si_drv1;
 int VAR_13;
 int VAR_14;
 char VAR_15[32];


 FUNC_3(4, FUNC_9("midi_write\n"));
 VAR_13 = 0;
 if (VAR_12 == ((void*)0))
  goto err0;

 FUNC_7(&VAR_12->lock);
 FUNC_7(&VAR_12->qlock);

 if (!(VAR_12->flags & VAR_4))
  goto err1;

 while (VAR_10->uio_resid > 0) {
  while (FUNC_0(VAR_12->outq) == 0) {
   VAR_13 = VAR_2;
   if (VAR_11 & VAR_6)
    goto err1;
   FUNC_8(&VAR_12->lock);
   VAR_12->wchan = 1;
   FUNC_3(3, FUNC_9("midi_write msleep\n"));
   VAR_13 = FUNC_6(&VAR_12->wchan, &VAR_12->qlock,
       VAR_7 | VAR_8, "midi TX", 0);




   if (VAR_13 == VAR_0)
    goto err0;
   if (VAR_12 != VAR_9->si_drv1)
    VAR_13 = VAR_1;
   if (VAR_13)
    goto err0;
   FUNC_7(&VAR_12->lock);
   FUNC_7(&VAR_12->qlock);
   VAR_12->wchan = 0;
   if (!VAR_12->busy)
    goto err1;
  }





  VAR_14 = FUNC_4(FUNC_0(VAR_12->outq), VAR_10->uio_resid);
  VAR_14 = FUNC_4(VAR_14, 32);
  FUNC_3(5, FUNC_9("midiout: resid %zd len %jd avail %jd\n",
      VAR_10->uio_resid, (intmax_t)FUNC_2(VAR_12->outq),
      (intmax_t)FUNC_0(VAR_12->outq)));


  FUNC_3(5, FUNC_9("midi_write: uiomove cc=%d\n", VAR_14));
  VAR_13 = FUNC_10(VAR_15, VAR_14, VAR_10);
  if (VAR_13)
   goto err1;
  FUNC_1(VAR_12->outq, VAR_15, VAR_14);



  if (!(VAR_12->flags & VAR_5)) {
   VAR_12->flags |= VAR_5;
   FUNC_5(VAR_12, VAR_12->cookie, VAR_12->flags);
  }
 }



 VAR_13 = 0;
err1: FUNC_8(&VAR_12->qlock);
 FUNC_8(&VAR_12->lock);
err0: return VAR_13;
}

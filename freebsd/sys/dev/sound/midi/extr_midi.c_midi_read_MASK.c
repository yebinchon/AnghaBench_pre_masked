
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio {int uio_resid; } ;
struct snd_midi {int flags; int rchan; int lock; int qlock; int inq; int busy; } ;
struct cdev {struct snd_midi* si_drv1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;
 int VAR_4 ;
 int FUNC_4 (int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int*,int *,int,char*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (char*,int,struct uio*) ;

int
FUNC_10(struct cdev *VAR_9, struct uio *VAR_10, int VAR_11)
{

 struct snd_midi *VAR_12 = VAR_9->si_drv1;
 int VAR_13;
 int VAR_14;
 char VAR_15[32];

 FUNC_3(5, FUNC_8("midiread: count=%lu\n",
     (unsigned long)VAR_10->uio_resid));

 VAR_13 = VAR_1;

 if (VAR_12 == ((void*)0))
  goto err0;

 FUNC_6(&VAR_12->lock);
 FUNC_6(&VAR_12->qlock);

 if (!(VAR_12->flags & VAR_5))
  goto err1;

 while (VAR_10->uio_resid > 0) {
  while (FUNC_1(VAR_12->inq)) {
   VAR_13 = VAR_3;
   if (VAR_11 & VAR_6)
    goto err1;
   FUNC_7(&VAR_12->lock);
   VAR_12->rchan = 1;
   VAR_13 = FUNC_5(&VAR_12->rchan, &VAR_12->qlock,
       VAR_7 | VAR_8, "midi RX", 0);




   if (VAR_13 == VAR_0)
    goto err0;
   if (VAR_12 != VAR_9->si_drv1)
    VAR_13 = VAR_2;

   if (VAR_13)
    goto err0;
   FUNC_6(&VAR_12->lock);
   FUNC_6(&VAR_12->qlock);
   VAR_12->rchan = 0;
   if (!VAR_12->busy)
    goto err1;
  }
  FUNC_3(6, FUNC_8("midi_read start\n"));




  VAR_14 = FUNC_4(FUNC_2(VAR_12->inq), VAR_10->uio_resid);
  VAR_14 = FUNC_4(VAR_14, 32);

  FUNC_3(6, FUNC_8("midiread: uiomove cc=%d\n", VAR_14));
  FUNC_0(VAR_12->inq, VAR_15, VAR_14);
  VAR_13 = FUNC_9(VAR_15, VAR_14, VAR_10);
  if (VAR_13)
   goto err1;
 }




 VAR_13 = 0;
err1: FUNC_7(&VAR_12->qlock);
 FUNC_7(&VAR_12->lock);
err0: FUNC_3(4, FUNC_8("midi_read: ret %d\n", VAR_13));
 return VAR_13;
}

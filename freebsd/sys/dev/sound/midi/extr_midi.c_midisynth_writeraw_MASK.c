
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct synth_midi {struct snd_midi* m; } ;
struct snd_midi {int flags; int wchan; int lock; int qlock; int cookie; int outq; int busy; } ;
typedef int intmax_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int*,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;
 size_t VAR_2 ;
 int FUNC_4 (int,size_t) ;
 int FUNC_5 (struct snd_midi*,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_6 (int*,int *,int,char*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*,...) ;

int
FUNC_10(void *VAR_8, uint8_t *VAR_9, size_t VAR_10)
{
 struct snd_midi *VAR_11 = ((struct synth_midi *)VAR_8)->m;
 int VAR_12;
 int VAR_13;
 int VAR_14;

 FUNC_3(4, FUNC_9("midisynth_writeraw\n"));

 VAR_12 = 0;

 if (VAR_11 == ((void*)0))
  return VAR_1;

 FUNC_7(&VAR_11->lock);
 FUNC_7(&VAR_11->qlock);

 if (!(VAR_11->flags & VAR_3))
  goto err1;

 if (VAR_7)
  FUNC_9("midi dump: ");

 while (VAR_10 > 0) {
  while (FUNC_0(VAR_11->outq) == 0) {
   if (!(VAR_11->flags & VAR_4)) {
    VAR_11->flags |= VAR_4;
    FUNC_5(VAR_11, VAR_11->cookie, VAR_11->flags);
   }
   FUNC_8(&VAR_11->lock);
   VAR_11->wchan = 1;
   FUNC_3(3, FUNC_9("midisynth_writeraw msleep\n"));
   VAR_12 = FUNC_6(&VAR_11->wchan, &VAR_11->qlock,
       VAR_5 | VAR_6, "midi TX", 0);




   if (VAR_12 == VAR_0)
    goto err0;

   if (VAR_12)
    goto err0;
   FUNC_7(&VAR_11->lock);
   FUNC_7(&VAR_11->qlock);
   VAR_11->wchan = 0;
   if (!VAR_11->busy)
    goto err1;
  }





  VAR_13 = FUNC_4(FUNC_0(VAR_11->outq), VAR_10);
  VAR_13 = FUNC_4(VAR_13, VAR_2);
  FUNC_3(5,
      FUNC_9("midi_synth: resid %zu len %jd avail %jd\n",
      VAR_10, (intmax_t)FUNC_2(VAR_11->outq),
      (intmax_t)FUNC_0(VAR_11->outq)));

  if (VAR_7)
   for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++)
    FUNC_9("%x ", VAR_9[VAR_14]);

  FUNC_1(VAR_11->outq, VAR_9, VAR_13);
  VAR_10 -= VAR_13;




  if (!(VAR_11->flags & VAR_4)) {
   VAR_11->flags |= VAR_4;
   FUNC_5(VAR_11, VAR_11->cookie, VAR_11->flags);
  }
 }



 if (VAR_7)
  FUNC_9("\n");

 VAR_12 = 0;
err1: FUNC_8(&VAR_11->qlock);
 FUNC_8(&VAR_11->lock);
err0: return VAR_12;
}

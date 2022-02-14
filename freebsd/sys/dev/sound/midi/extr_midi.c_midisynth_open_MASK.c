
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct synth_midi {struct snd_midi* m; } ;
struct snd_midi {int flags; int synth_flags; int lock; int qlock; int cookie; scalar_t__ wchan; scalar_t__ rchan; int inq; int busy; int outq; } ;


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
FUNC_7(void *VAR_7, void *VAR_8, int VAR_9)
{
 struct snd_midi *VAR_10 = ((struct synth_midi *)VAR_7)->m;
 int VAR_11;

 FUNC_2(1, FUNC_6("midisynth_open %s %s\n",
     VAR_9 & VAR_2 ? "M_RX" : "", VAR_9 & VAR_3 ? "M_TX" : ""));

 if (VAR_10 == ((void*)0))
  return VAR_1;

 FUNC_4(&VAR_10->lock);
 FUNC_4(&VAR_10->qlock);

 VAR_11 = 0;

 if (VAR_9 & VAR_2) {
  if (FUNC_1(VAR_10->inq) == 0)
   VAR_11 = VAR_1;
  else if (VAR_10->flags & VAR_4)
   VAR_11 = VAR_0;
  if (VAR_11)
   goto err;
 }
 if (VAR_9 & VAR_3) {
  if (FUNC_1(VAR_10->outq) == 0)
   VAR_11 = VAR_1;
  else if (VAR_10->flags & VAR_6)
   VAR_11 = VAR_0;
  if (VAR_11)
   goto err;
 }
 VAR_10->busy++;





 if (VAR_9 & VAR_2) {
  VAR_10->flags |= VAR_4 | VAR_5;




  FUNC_0(VAR_10->inq);
  VAR_10->rchan = 0;
 }

 if (VAR_9 & VAR_3) {
  VAR_10->flags |= VAR_6;
  VAR_10->wchan = 0;
 }
 VAR_10->synth_flags = VAR_9 & (VAR_2 | VAR_3);

 FUNC_3(VAR_10, VAR_10->cookie, VAR_10->flags);


err: FUNC_5(&VAR_10->qlock);
 FUNC_5(&VAR_10->lock);
 FUNC_2(2, FUNC_6("midisynth_open: return %d.\n", VAR_11));
 return VAR_11;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct synth_midi {struct snd_midi* m; } ;
struct snd_midi {int synth_flags; int flags; int busy; int lock; int qlock; int cookie; } ;


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
 int FUNC_4 (char*,...) ;

int
FUNC_5(void *VAR_7)
{
 struct snd_midi *VAR_8 = ((struct synth_midi *)VAR_7)->m;
 int VAR_9;
 int VAR_10;

 FUNC_0(1, FUNC_4("midisynth_close %s %s\n",
     VAR_8->synth_flags & VAR_1 ? "M_RX" : "",
     VAR_8->synth_flags & VAR_2 ? "M_TX" : ""));

 if (VAR_8 == ((void*)0))
  return VAR_0;

 FUNC_2(&VAR_8->lock);
 FUNC_2(&VAR_8->qlock);

 if ((VAR_8->synth_flags & VAR_1 && !(VAR_8->flags & VAR_3)) ||
     (VAR_8->synth_flags & VAR_2 && !(VAR_8->flags & VAR_5))) {
  VAR_9 = VAR_0;
  goto err;
 }
 VAR_8->busy--;

 VAR_10 = VAR_8->flags;

 if (VAR_8->synth_flags & VAR_1)
  VAR_8->flags &= ~(VAR_3 | VAR_4);
 if (VAR_8->synth_flags & VAR_2)
  VAR_8->flags &= ~VAR_5;

 if ((VAR_8->flags & (VAR_6 | VAR_4)) != (VAR_10 & (VAR_4 | VAR_6)))
  FUNC_1(VAR_8, VAR_8->cookie, VAR_8->flags);

 FUNC_0(1, FUNC_4("midi_close: closed, busy = %d.\n", VAR_8->busy));

 FUNC_3(&VAR_8->qlock);
 FUNC_3(&VAR_8->lock);
 VAR_9 = 0;
err: return VAR_9;
}

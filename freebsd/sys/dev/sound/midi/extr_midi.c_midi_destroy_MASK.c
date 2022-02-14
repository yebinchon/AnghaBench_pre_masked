
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_midi {struct snd_midi* synth; int lock; int qlock; int outq; int inq; int cookie; TYPE_1__* dev; } ;
struct TYPE_2__ {int * si_drv1; } ;


 int VAR_0 ;
 struct snd_midi* FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct snd_midi*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *,struct snd_midi*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct snd_midi*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int *,int ) ;

__attribute__((used)) static int
FUNC_11(struct snd_midi *VAR_6, int VAR_7)
{
 FUNC_10(&VAR_5, VAR_2);
 FUNC_6(&VAR_6->lock, VAR_0);

 FUNC_1(3, FUNC_9("midi_destroy\n"));
 VAR_6->dev->si_drv1 = ((void*)0);
 FUNC_8(&VAR_6->lock);
 FUNC_4(VAR_6->dev);
 FUNC_3(&VAR_4, VAR_6, VAR_3);
 if (VAR_7)
  FUNC_2(VAR_6, VAR_6->cookie);
 FUNC_5(FUNC_0(VAR_6->inq), VAR_1);
 FUNC_5(FUNC_0(VAR_6->outq), VAR_1);
 FUNC_7(&VAR_6->qlock);
 FUNC_7(&VAR_6->lock);
 FUNC_5(VAR_6->synth, VAR_1);
 FUNC_5(VAR_6, VAR_1);
 return 0;
}

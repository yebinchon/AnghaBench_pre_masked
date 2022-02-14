
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_midi {int flags; scalar_t__ hiwat; int qlock; scalar_t__ async; int wsel; scalar_t__ wchan; int outq; int cookie; } ;
typedef int MIDI_TYPE ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (struct snd_midi*,int ,int) ;
 int VAR_0 ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_9 (scalar_t__,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (char*,...) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (scalar_t__*) ;

int
FUNC_15(struct snd_midi *VAR_2, MIDI_TYPE *VAR_3, int VAR_4)
{
 int VAR_5;




 if (!(VAR_2->flags & VAR_0))
  return 0;

 FUNC_4(2, FUNC_12("midi_out: %p\n", VAR_2));
 FUNC_10(&VAR_2->qlock);
 VAR_5 = FUNC_5(VAR_4, FUNC_3(VAR_2->outq));
 FUNC_4(3, FUNC_12("midi_out: used %d\n", VAR_5));
 if (VAR_5)
  FUNC_1(VAR_2->outq, VAR_3, VAR_5);
 if (FUNC_2(VAR_2->outq)) {
  VAR_2->flags &= ~VAR_0;
  FUNC_6(VAR_2, VAR_2->cookie, VAR_2->flags);
 }
 if (VAR_5 && FUNC_0(VAR_2->outq) > VAR_2->hiwat) {
  if (VAR_2->wchan) {
   FUNC_14(&VAR_2->wchan);
   VAR_2->wchan = 0;
  }
  FUNC_13(&VAR_2->wsel);
  if (VAR_2->async) {
   FUNC_7(VAR_2->async);
   FUNC_9(VAR_2->async, VAR_1);
   FUNC_8(VAR_2->async);
  }
 }
 FUNC_11(&VAR_2->qlock);
 return VAR_5;
}

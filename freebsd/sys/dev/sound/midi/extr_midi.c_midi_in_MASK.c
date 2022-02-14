
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_midi {int flags; int inq_state; int inq_left; scalar_t__ inq_status; int qlock; scalar_t__ async; int rsel; scalar_t__ rchan; int inq; } ;
typedef int intmax_t ;
typedef scalar_t__ MIDI_TYPE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__*,int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (int,int ) ;



 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_10 (scalar_t__,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (char*,...) ;
 int FUNC_14 (int *) ;
 int VAR_7 ;
 int FUNC_15 (scalar_t__*) ;

int
FUNC_16(struct snd_midi *VAR_8, MIDI_TYPE *VAR_9, int VAR_10)
{

 int VAR_11;


 FUNC_4(5, FUNC_13("midi_in: m=%p size=%d\n", VAR_8, VAR_10));




 if (!(VAR_8->flags & VAR_2))
  return VAR_10;

 VAR_11 = 0;

 FUNC_11(&VAR_8->qlock);
  FUNC_4(6, FUNC_13("midi_in: len %jd avail %jd\n",
      (intmax_t)FUNC_3(VAR_8->inq),
      (intmax_t)FUNC_0(VAR_8->inq)));
  if (FUNC_0(VAR_8->inq) > VAR_10) {
   VAR_11 = VAR_10;
   FUNC_1(VAR_8->inq, VAR_9, VAR_10);
  } else {
   FUNC_4(4, FUNC_13("midi_in: Discarding data qu\n"));
   FUNC_12(&VAR_8->qlock);
   return 0;
  }
  if (VAR_8->rchan) {
   FUNC_15(&VAR_8->rchan);
   VAR_8->rchan = 0;
  }
  FUNC_14(&VAR_8->rsel);
  if (VAR_8->async) {
   FUNC_8(VAR_8->async);
   FUNC_10(VAR_8->async, VAR_3);
   FUNC_9(VAR_8->async);
  }



 FUNC_12(&VAR_8->qlock);
 return VAR_11;
}

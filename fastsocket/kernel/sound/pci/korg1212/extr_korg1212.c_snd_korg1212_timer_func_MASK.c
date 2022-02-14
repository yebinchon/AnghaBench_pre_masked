
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ expires; } ;
struct snd_korg1212 {scalar_t__ stop_pending_cnt; int dsp_stop_is_processed; size_t cardState; int lock; int wait; TYPE_1__* sharedBufferPtr; TYPE_2__ timer; } ;
struct TYPE_3__ {scalar_t__ cardCommand; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int * VAR_1 ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(unsigned long VAR_2)
{
        struct snd_korg1212 *VAR_3 = (struct snd_korg1212 *) VAR_2;
 unsigned long VAR_4;

 FUNC_4(&VAR_3->lock, VAR_4);
 if (VAR_3->sharedBufferPtr->cardCommand == 0) {

  VAR_3->stop_pending_cnt = 0;
  VAR_3->dsp_stop_is_processed = 1;
  FUNC_6(&VAR_3->wait);
  FUNC_1("K1212_DEBUG: Stop ack'ed [%s]\n",
        VAR_1[VAR_3->cardState]);
 } else {
  if (--VAR_3->stop_pending_cnt > 0) {

   VAR_3->timer.expires = VAR_0 + 1;
   FUNC_2(&VAR_3->timer);
  } else {
   FUNC_3("korg1212_timer_func timeout\n");
   VAR_3->sharedBufferPtr->cardCommand = 0;
   VAR_3->dsp_stop_is_processed = 1;
   FUNC_6(&VAR_3->wait);
   FUNC_0("K1212_DEBUG: Stop timeout [%s]\n",
        VAR_1[VAR_3->cardState]);
  }
 }
 FUNC_5(&VAR_3->lock, VAR_4);
}

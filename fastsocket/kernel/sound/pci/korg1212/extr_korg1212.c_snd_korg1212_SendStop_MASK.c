
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ expires; } ;
struct snd_korg1212 {TYPE_2__ timer; scalar_t__ stop_pending_cnt; TYPE_1__* sharedBufferPtr; } ;
struct TYPE_3__ {int cardCommand; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_1(struct snd_korg1212 *VAR_2)
{
 if (! VAR_2->stop_pending_cnt) {
  VAR_2->sharedBufferPtr->cardCommand = 0xffffffff;

  VAR_2->stop_pending_cnt = VAR_0;
  VAR_2->timer.expires = VAR_1 + 1;
  FUNC_0(&VAR_2->timer);
 }
}

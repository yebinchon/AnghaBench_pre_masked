
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_timer_instance {int flags; int active_list; int ack_list; struct snd_timer* timer; } ;
struct TYPE_2__ {int (* start ) (struct snd_timer*) ;int (* stop ) (struct snd_timer*) ;} ;
struct snd_timer {int flags; int lock; TYPE_1__ hw; int running; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct snd_timer_instance*,int) ;
 int FUNC_3 (struct snd_timer*,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct snd_timer*) ;
 int FUNC_7 (struct snd_timer*) ;

__attribute__((used)) static int FUNC_8(struct snd_timer_instance * VAR_9,
      int VAR_10, int VAR_11)
{
 struct snd_timer *VAR_12;
 unsigned long VAR_13;

 if (FUNC_1(!VAR_9))
  return -VAR_1;

 if (VAR_9->flags & VAR_6) {
  if (!VAR_10) {
   FUNC_4(&VAR_8, VAR_13);
   VAR_9->flags &= ~VAR_5;
   FUNC_5(&VAR_8, VAR_13);
  }
  goto __end;
 }
 VAR_12 = VAR_9->timer;
 if (!VAR_12)
  return -VAR_0;
 FUNC_4(&VAR_12->lock, VAR_13);
 FUNC_0(&VAR_9->ack_list);
 FUNC_0(&VAR_9->active_list);
 if ((VAR_9->flags & VAR_5) &&
     !(--VAR_12->running)) {
  VAR_12->hw.stop(VAR_12);
  if (VAR_12->flags & VAR_4) {
   VAR_12->flags &= ~VAR_4;
   FUNC_3(VAR_12, 0);
   if (VAR_12->flags & VAR_3) {
    VAR_12->flags &= ~VAR_3;
    VAR_12->hw.start(VAR_12);
   }
  }
 }
 if (!VAR_10)
  VAR_9->flags &=
   ~(VAR_5 | VAR_7);
 FUNC_5(&VAR_12->lock, VAR_13);
      __end:
 if (VAR_11 != VAR_2)
  FUNC_2(VAR_9, VAR_11);
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_timer_instance {int flags; int active_list; } ;
struct TYPE_2__ {int flags; int (* start ) (struct snd_timer*) ;} ;
struct snd_timer {unsigned long sticks; scalar_t__ running; TYPE_1__ hw; int flags; int active_list_head; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct snd_timer*) ;

__attribute__((used)) static int FUNC_3(struct snd_timer *VAR_4, struct snd_timer_instance *VAR_5,
       unsigned long VAR_6)
{
 FUNC_1(&VAR_5->active_list);
 FUNC_0(&VAR_5->active_list, &VAR_4->active_list_head);
 if (VAR_4->running) {
  if (VAR_4->hw.flags & VAR_1)
   goto __start_now;
  VAR_4->flags |= VAR_0;
  VAR_5->flags |= VAR_3;
  return 1;
 } else {
  VAR_4->sticks = VAR_6;
  VAR_4->hw.start(VAR_4);
       __start_now:
  VAR_4->running++;
  VAR_5->flags |= VAR_2;
  return 0;
 }
}

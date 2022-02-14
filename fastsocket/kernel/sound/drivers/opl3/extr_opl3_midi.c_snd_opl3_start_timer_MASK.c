
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ expires; } ;
struct snd_opl3 {int sys_timer_status; int sys_timer_lock; TYPE_1__ tlist; } ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct snd_opl3 *VAR_1)
{
 unsigned long VAR_2;
 FUNC_1(&VAR_1->sys_timer_lock, VAR_2);
 if (! VAR_1->sys_timer_status) {
  VAR_1->tlist.expires = VAR_0 + 1;
  FUNC_0(&VAR_1->tlist);
  VAR_1->sys_timer_status = 1;
 }
 FUNC_2(&VAR_1->sys_timer_lock, VAR_2);
}

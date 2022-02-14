
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_timer_instance {TYPE_1__* master; int active_list; int flags; } ;
struct TYPE_2__ {int slave_active_head; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int VAR_1 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct snd_timer_instance *VAR_2)
{
 unsigned long VAR_3;

 FUNC_1(&VAR_1, VAR_3);
 VAR_2->flags |= VAR_0;
 if (VAR_2->master)
  FUNC_0(&VAR_2->active_list,
         &VAR_2->master->slave_active_head);
 FUNC_2(&VAR_1, VAR_3);
 return 1;
}

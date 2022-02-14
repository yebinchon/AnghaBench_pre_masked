
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ct_timer_instance {int instance_list; int substream; struct ct_atc_pcm* apcm; struct ct_timer* timer_base; int running_list; int lock; } ;
struct ct_timer {int list_lock; int instance_head; TYPE_1__* ops; } ;
struct ct_atc_pcm {int substream; } ;
struct TYPE_2__ {int (* init ) (struct ct_timer_instance*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct ct_timer_instance* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct ct_timer_instance*) ;

struct ct_timer_instance *
FUNC_7(struct ct_timer *VAR_1, struct ct_atc_pcm *VAR_2)
{
 struct ct_timer_instance *VAR_3;

 VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);
 FUNC_3(&VAR_3->lock);
 FUNC_0(&VAR_3->instance_list);
 FUNC_0(&VAR_3->running_list);
 VAR_3->timer_base = VAR_1;
 VAR_3->apcm = VAR_2;
 VAR_3->substream = VAR_2->substream;
 if (VAR_1->ops->init)
  VAR_1->ops->init(VAR_3);

 FUNC_4(&VAR_1->list_lock);
 FUNC_2(&VAR_3->instance_list, &VAR_1->instance_head);
 FUNC_5(&VAR_1->list_lock);

 return VAR_3;
}

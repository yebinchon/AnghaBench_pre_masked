
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_4__ {scalar_t__ max_queue_sz; int accu_queue_sz; int queue_sz_counts; int sent_info; } ;
struct TYPE_5__ {scalar_t__ out_queue_size; TYPE_1__ stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*,struct sk_buff*) ;
 scalar_t__ FUNC_4 (int) ;

int FUNC_5(struct sk_buff *VAR_3)
{
 int VAR_4;

 FUNC_1(&VAR_1);

 VAR_4 = FUNC_3(VAR_2, VAR_3);
 if (FUNC_4(VAR_4 == -VAR_0))
  FUNC_0(VAR_3);
 else
  VAR_2->stats.sent_info++;

 if (VAR_2->out_queue_size > VAR_2->stats.max_queue_sz)
  VAR_2->stats.max_queue_sz = VAR_2->out_queue_size;
 VAR_2->stats.queue_sz_counts++;
 VAR_2->stats.accu_queue_sz += VAR_2->out_queue_size;

 FUNC_2(&VAR_1);
 return VAR_4;
}

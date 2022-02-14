
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct msg_queue {int dummy; } ;
struct msg_msg {int dummy; } ;
struct TYPE_2__ {int (* msg_queue_msgrcv ) (struct msg_queue*,struct msg_msg*,struct task_struct*,long,int) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct msg_queue*,struct msg_msg*,struct task_struct*,long,int) ;

int FUNC_1(struct msg_queue *VAR_1, struct msg_msg *VAR_2,
          struct task_struct *VAR_3, long VAR_4, int VAR_5)
{
 return VAR_0->msg_queue_msgrcv(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
}

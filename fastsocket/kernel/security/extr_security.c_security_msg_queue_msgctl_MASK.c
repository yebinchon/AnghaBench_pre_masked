
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msg_queue {int dummy; } ;
struct TYPE_2__ {int (* msg_queue_msgctl ) (struct msg_queue*,int) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct msg_queue*,int) ;

int FUNC_1(struct msg_queue *VAR_1, int VAR_2)
{
 return VAR_0->msg_queue_msgctl(VAR_1, VAR_2);
}

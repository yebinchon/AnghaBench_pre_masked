
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmbus_channel {int ch_task; int ch_tq; } ;


 int FUNC_0 (int ,int *) ;

void
FUNC_1(struct vmbus_channel *VAR_0)
{

 FUNC_0(VAR_0->ch_tq, &VAR_0->ch_task);
}

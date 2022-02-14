
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmbus_channel {struct taskqueue* ch_mgmt_tq; } ;
struct taskqueue {int dummy; } ;



struct taskqueue *
FUNC_0(const struct vmbus_channel *VAR_0)
{

 return (VAR_0->ch_mgmt_tq);
}

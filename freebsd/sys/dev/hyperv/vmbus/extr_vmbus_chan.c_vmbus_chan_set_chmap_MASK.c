
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmbus_channel {size_t ch_id; TYPE_1__* ch_vmbus; } ;
struct TYPE_2__ {struct vmbus_channel** vmbus_chmap; } ;


 int FUNC_0 () ;

__attribute__((used)) static void
FUNC_1(struct vmbus_channel *VAR_0)
{
 FUNC_0();
 VAR_0->ch_vmbus->vmbus_chmap[VAR_0->ch_id] = VAR_0;
}

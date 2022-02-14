
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmbus_channel {int ch_orphan_lock; int * ch_orphan_xact; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct vmbus_channel *VAR_0)
{

 FUNC_0(&VAR_0->ch_orphan_lock);
 VAR_0->ch_orphan_xact = ((void*)0);
 FUNC_1(&VAR_0->ch_orphan_lock);
}

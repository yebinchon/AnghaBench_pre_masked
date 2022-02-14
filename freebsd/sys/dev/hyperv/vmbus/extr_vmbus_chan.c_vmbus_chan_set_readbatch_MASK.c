
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmbus_channel {int ch_flags; } ;


 int VAR_0 ;

void
FUNC_0(struct vmbus_channel *VAR_1, bool VAR_2)
{
 if (!VAR_2)
  VAR_1->ch_flags &= ~VAR_0;
 else
  VAR_1->ch_flags |= VAR_0;
}

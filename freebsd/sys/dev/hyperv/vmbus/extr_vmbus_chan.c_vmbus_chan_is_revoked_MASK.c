
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmbus_channel {int ch_stflags; } ;


 int VAR_0 ;

bool
FUNC_0(const struct vmbus_channel *VAR_1)
{

 if (VAR_1->ch_stflags & VAR_0)
  return (1);
 return (0);
}

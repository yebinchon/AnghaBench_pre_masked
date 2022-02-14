
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int child_channel; int parent_channel; } ;


 int FUNC_0 (int ) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (char*) ;

void
FUNC_2 (void)
{
  int VAR_1;

  VAR_1 = FUNC_0 (VAR_0.parent_channel);
  if (VAR_1 < 0)
    {
      FUNC_1 ("error getting parent pipe for startup semaphore");
      return;
    }

  VAR_1 = FUNC_0 (VAR_0.child_channel);
  if (VAR_1 < 0)
    {
      FUNC_1 ("error getting child pipe for startup semaphore");
      return;
    }
}

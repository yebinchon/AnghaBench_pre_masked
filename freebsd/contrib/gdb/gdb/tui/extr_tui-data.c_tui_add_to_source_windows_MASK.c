
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tui_win_info {int dummy; } ;
struct TYPE_2__ {int count; void** list; } ;


 TYPE_1__ VAR_0 ;

void
FUNC_0 (struct tui_win_info * VAR_1)
{
  if (VAR_0.count < 2)
    VAR_0.list[VAR_0.count++] = (void *) VAR_1;
}

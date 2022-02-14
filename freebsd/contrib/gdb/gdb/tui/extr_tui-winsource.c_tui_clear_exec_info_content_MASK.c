
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* execution_info; } ;
struct TYPE_6__ {TYPE_2__ source_info; } ;
struct tui_win_info {TYPE_3__ detail; } ;
struct TYPE_4__ {int content_in_use; } ;


 int VAR_0 ;
 int FUNC_0 (struct tui_win_info*) ;

void
FUNC_1 (struct tui_win_info * VAR_1)
{
  VAR_1->detail.source_info.execution_info->content_in_use = VAR_0;
  FUNC_0 (VAR_1);

  return;
}

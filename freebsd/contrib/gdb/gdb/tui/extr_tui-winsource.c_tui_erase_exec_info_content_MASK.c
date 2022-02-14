
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct tui_gen_win_info* execution_info; } ;
struct TYPE_4__ {TYPE_1__ source_info; } ;
struct tui_win_info {TYPE_2__ detail; } ;
struct tui_gen_win_info {int handle; } ;


 int FUNC_0 (struct tui_gen_win_info*) ;
 int FUNC_1 (int ) ;

void
FUNC_2 (struct tui_win_info * VAR_0)
{
  struct tui_gen_win_info * VAR_1 = VAR_0->detail.source_info.execution_info;

  FUNC_1 (VAR_1->handle);
  FUNC_0 (VAR_1);
}

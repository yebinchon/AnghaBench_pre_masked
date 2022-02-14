
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union tui_line_or_address {int dummy; } tui_line_or_address ;
struct TYPE_3__ {scalar_t__ horizontal_offset; } ;
struct TYPE_4__ {TYPE_1__ source_info; } ;
struct tui_win_info {TYPE_2__ detail; } ;
struct symtab {int dummy; } ;


 int FUNC_0 (struct tui_win_info*,struct symtab*,union tui_line_or_address,int) ;

void
FUNC_1 (struct tui_win_info * VAR_0, struct symtab *VAR_1,
     union tui_line_or_address VAR_2, int VAR_3)
{
  VAR_0->detail.source_info.horizontal_offset = 0;
  FUNC_0 (VAR_0, VAR_1, VAR_2, VAR_3);

  return;
}

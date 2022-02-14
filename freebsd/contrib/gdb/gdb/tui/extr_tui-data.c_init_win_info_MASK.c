
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* tui_win_content ;
struct TYPE_10__ {int curch; int cur_line; } ;
struct TYPE_9__ {int regs_column_count; int current_group; void* display_regs; int regs_display_type; int regs_content_count; void* regs_content; int data_content_count; void* data_content; } ;
struct TYPE_7__ {int addr; } ;
struct TYPE_8__ {int filename; TYPE_1__ start_line_or_addr; int horizontal_offset; void* has_locator; struct tui_gen_win_info* execution_info; } ;
struct TYPE_11__ {int * opaque; TYPE_4__ command_info; TYPE_3__ data_display_info; TYPE_2__ source_info; } ;
struct TYPE_12__ {int type; } ;
struct tui_win_info {TYPE_5__ detail; TYPE_6__ generic; void* is_highlighted; void* can_highlight; } ;
struct tui_gen_win_info {int dummy; } ;





 void* VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (TYPE_6__*) ;

void
FUNC_1 (struct tui_win_info * VAR_2)
{
  FUNC_0 (&VAR_2->generic);
  VAR_2->can_highlight =
    VAR_2->is_highlighted = VAR_0;
  switch (VAR_2->generic.type)
    {
    case 128:
    case 129:
      VAR_2->detail.source_info.execution_info = (struct tui_gen_win_info *) ((void*)0);
      VAR_2->detail.source_info.has_locator = VAR_0;
      VAR_2->detail.source_info.horizontal_offset = 0;
      VAR_2->detail.source_info.start_line_or_addr.addr = 0;
      VAR_2->detail.source_info.filename = 0;
      break;
    case 130:
      VAR_2->detail.data_display_info.data_content = (tui_win_content) ((void*)0);
      VAR_2->detail.data_display_info.data_content_count = 0;
      VAR_2->detail.data_display_info.regs_content = (tui_win_content) ((void*)0);
      VAR_2->detail.data_display_info.regs_content_count = 0;
      VAR_2->detail.data_display_info.regs_display_type =
 VAR_1;
      VAR_2->detail.data_display_info.regs_column_count = 1;
      VAR_2->detail.data_display_info.display_regs = VAR_0;
      VAR_2->detail.data_display_info.current_group = 0;
      break;
    case 131:
      VAR_2->detail.command_info.cur_line = 0;
      VAR_2->detail.command_info.curch = 0;
      break;
    default:
      VAR_2->detail.opaque = ((void*)0);
      break;
    }
}

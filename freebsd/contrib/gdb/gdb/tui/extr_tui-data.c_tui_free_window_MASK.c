
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* tui_win_content ;
struct tui_gen_win_info {int type; struct tui_win_info* title; int * handle; int content_size; int * content; } ;
struct TYPE_5__ {int regs_column_count; int display_regs; int regs_display_type; int data_content_count; void* data_content; int regs_content_count; void* regs_content; } ;
struct TYPE_4__ {struct tui_gen_win_info* execution_info; struct tui_win_info* filename; } ;
struct TYPE_6__ {TYPE_2__ data_display_info; TYPE_1__ source_info; } ;
struct tui_win_info {struct tui_gen_win_info generic; TYPE_3__ detail; } ;
typedef int WINDOW ;




 int VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (void*,int ) ;
 int FUNC_2 (struct tui_gen_win_info*) ;
 struct tui_gen_win_info* FUNC_3 () ;
 int FUNC_4 (struct tui_win_info*) ;

void
FUNC_5 (struct tui_win_info * VAR_2)
{
  struct tui_gen_win_info * VAR_3;

  switch (VAR_2->generic.type)
    {
    case 128:
    case 129:
      VAR_3 = FUNC_3 ();
      if (VAR_3 != (struct tui_gen_win_info *) ((void*)0))
 {
   FUNC_0 (VAR_3->handle);
   VAR_3->handle = (WINDOW *) ((void*)0);
 }
      FUNC_2 (VAR_3);
      if (VAR_2->detail.source_info.filename)
        {
          FUNC_4 (VAR_2->detail.source_info.filename);
          VAR_2->detail.source_info.filename = 0;
        }
      VAR_3 = VAR_2->detail.source_info.execution_info;
      if (VAR_3 != (struct tui_gen_win_info *) ((void*)0))
 {
   FUNC_0 (VAR_3->handle);
   VAR_3->handle = (WINDOW *) ((void*)0);
   FUNC_2 (VAR_3);
 }
      break;
    case 130:
      if (VAR_2->generic.content != ((void*)0))
 {
   FUNC_1 (VAR_2->detail.data_display_info.regs_content,
     VAR_2->detail.data_display_info.regs_content_count);
   VAR_2->detail.data_display_info.regs_content =
     (tui_win_content) ((void*)0);
   VAR_2->detail.data_display_info.regs_content_count = 0;
   FUNC_1 (VAR_2->detail.data_display_info.data_content,
     VAR_2->detail.data_display_info.data_content_count);
   VAR_2->detail.data_display_info.data_content =
     (tui_win_content) ((void*)0);
   VAR_2->detail.data_display_info.data_content_count = 0;
   VAR_2->detail.data_display_info.regs_display_type =
     VAR_1;
   VAR_2->detail.data_display_info.regs_column_count = 1;
   VAR_2->detail.data_display_info.display_regs = VAR_0;
   VAR_2->generic.content = ((void*)0);
   VAR_2->generic.content_size = 0;
 }
      break;
    default:
      break;
    }
  if (VAR_2->generic.handle != (WINDOW *) ((void*)0))
    {
      FUNC_0 (VAR_2->generic.handle);
      VAR_2->generic.handle = (WINDOW *) ((void*)0);
      FUNC_2 (&VAR_2->generic);
    }
  if (VAR_2->generic.title)
    FUNC_4 (VAR_2->generic.title);
  FUNC_4 (VAR_2);
}

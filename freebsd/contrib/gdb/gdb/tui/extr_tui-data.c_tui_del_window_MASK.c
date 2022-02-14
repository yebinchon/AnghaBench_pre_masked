
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int type; void* is_visible; int * handle; int * content; } ;
struct TYPE_6__ {int data_content_count; int data_content; int regs_content_count; int regs_content; } ;
struct TYPE_5__ {struct tui_gen_win_info* execution_info; int filename; } ;
struct TYPE_7__ {TYPE_2__ data_display_info; TYPE_1__ source_info; } ;
struct tui_win_info {TYPE_4__ generic; TYPE_3__ detail; } ;
struct tui_gen_win_info {void* is_visible; int * handle; } ;
typedef int WINDOW ;




 void* VAR_0 ;

 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 struct tui_gen_win_info* FUNC_2 () ;
 int FUNC_3 (int ) ;

void
FUNC_4 (struct tui_win_info * VAR_1)
{
  struct tui_gen_win_info * VAR_2;

  switch (VAR_1->generic.type)
    {
    case 128:
    case 129:
      VAR_2 = FUNC_2 ();
      if (VAR_2 != (struct tui_gen_win_info *) ((void*)0))
 {
   FUNC_1 (VAR_2->handle);
   VAR_2->handle = (WINDOW *) ((void*)0);
   VAR_2->is_visible = VAR_0;
 }
      if (VAR_1->detail.source_info.filename)
        {
          FUNC_3 (VAR_1->detail.source_info.filename);
          VAR_1->detail.source_info.filename = 0;
        }
      VAR_2 = VAR_1->detail.source_info.execution_info;
      if (VAR_2 != (struct tui_gen_win_info *) ((void*)0))
 {
   FUNC_1 (VAR_2->handle);
   VAR_2->handle = (WINDOW *) ((void*)0);
   VAR_2->is_visible = VAR_0;
 }
      break;
    case 130:
      if (VAR_1->generic.content != ((void*)0))
 {
   FUNC_0 (VAR_1->detail.data_display_info.regs_content,
    VAR_1->detail.data_display_info.regs_content_count);
   FUNC_0 (VAR_1->detail.data_display_info.data_content,
    VAR_1->detail.data_display_info.data_content_count);
 }
      break;
    default:
      break;
    }
  if (VAR_1->generic.handle != (WINDOW *) ((void*)0))
    {
      FUNC_1 (VAR_1->generic.handle);
      VAR_1->generic.handle = (WINDOW *) ((void*)0);
      VAR_1->generic.is_visible = VAR_0;
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


union tui_line_or_address {int addr; int line_no; } ;
struct TYPE_10__ {int curch; int cur_line; } ;
struct TYPE_8__ {int addr; int line_no; } ;
struct TYPE_9__ {TYPE_1__ start_line_or_addr; TYPE_5__* execution_info; } ;
struct TYPE_11__ {TYPE_3__ command_info; TYPE_2__ source_info; } ;
struct TYPE_12__ {int type; int handle; int * content; } ;
struct tui_win_info {TYPE_4__ detail; TYPE_5__ generic; } ;
struct symtab_and_line {int line; struct symtab* symtab; } ;
struct symtab {int dummy; } ;
struct frame_info {int dummy; } ;






 int VAR_0 ;
 struct frame_info* VAR_1 ;
 int FUNC_0 (struct symtab*,int ,int *) ;
 struct symtab* FUNC_1 (int ) ;
 struct symtab_and_line FUNC_2 () ;
 int FUNC_3 (struct frame_info*) ;
 int FUNC_4 (struct tui_win_info*) ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_5__*) ;
 TYPE_5__* FUNC_7 () ;
 int FUNC_8 (TYPE_5__*) ;
 int FUNC_9 () ;
 int FUNC_10 (struct tui_win_info*,struct symtab*,union tui_line_or_address,int ) ;
 int FUNC_11 (struct tui_win_info*) ;
 int FUNC_12 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_13 (struct tui_win_info * VAR_2)
{
  struct symtab *VAR_3;

  FUNC_8 (&VAR_2->generic);
  FUNC_4 (VAR_2);
  switch (VAR_2->generic.type)
    {
    case 128:
    case 129:
      FUNC_6 (VAR_2->detail.source_info.execution_info);
      FUNC_8 (VAR_2->detail.source_info.execution_info);
      if (VAR_2->generic.content != ((void*)0))
 {
   union tui_line_or_address VAR_4;
   struct symtab_and_line VAR_5
     = FUNC_2 ();

   if (VAR_2->generic.type == 128)
     VAR_4.line_no =
       VAR_2->detail.source_info.start_line_or_addr.line_no;
   else
     VAR_4.addr =
       VAR_2->detail.source_info.start_line_or_addr.addr;
   FUNC_6 (&VAR_2->generic);
   FUNC_10 (VAR_2, VAR_5.symtab, VAR_4, VAR_0);
 }
      else if (VAR_1 != (struct frame_info *) ((void*)0))
 {
   union tui_line_or_address VAR_6;
   struct symtab_and_line VAR_7 = FUNC_2 ();


   VAR_3 = FUNC_1 (FUNC_3 (VAR_1));
   if (VAR_2->generic.type == 128)
     VAR_6.line_no = VAR_7.line;
   else
     {
       FUNC_0 (VAR_3, VAR_7.line, &VAR_6.addr);
     }
   FUNC_10 (VAR_2, VAR_3, VAR_6, VAR_0);
 }
      if (FUNC_11 (VAR_2))
 {
   FUNC_8 (FUNC_7 ());
   FUNC_9 ();
 }
      break;
    case 130:
      FUNC_5 ();
      break;
    case 131:
      VAR_2->detail.command_info.cur_line = 0;
      VAR_2->detail.command_info.curch = 0;
      FUNC_12 (VAR_2->generic.handle,
      VAR_2->detail.command_info.cur_line,
      VAR_2->detail.command_info.curch);
      break;
    default:
      break;
    }
}

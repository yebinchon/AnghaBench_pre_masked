
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int line_no; int addr; } ;
union tui_which_element {TYPE_2__ locator; } ;
union tui_line_or_address {int line_no; int addr; } ;
struct TYPE_5__ {int viewport_height; } ;
struct tui_win_info {TYPE_1__ generic; } ;
struct tui_win_element {union tui_which_element which_element; } ;
struct tui_gen_win_info {scalar_t__* content; } ;
struct symtab_and_line {TYPE_3__* symtab; int line; } ;
struct frame_info {int dummy; } ;
struct TYPE_8__ {int count; scalar_t__* list; } ;
struct TYPE_7__ {char* filename; } ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 struct tui_win_info* VAR_2 ;
 struct tui_win_info* VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct frame_info*,struct symtab_and_line*) ;
 scalar_t__ FUNC_2 (int ,char**,int *,int ) ;
 int FUNC_3 (struct frame_info*) ;
 int FUNC_4 (int ,struct tui_win_info*,int ) ;
 int FUNC_5 (struct tui_win_info*,int ) ;
 int * FUNC_6 (struct frame_info*) ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int,struct tui_win_info*,int ) ;
 struct tui_gen_win_info* FUNC_9 () ;
 int FUNC_10 (union tui_line_or_address,struct tui_win_info*) ;
 int FUNC_11 (char*,int *,int ,int ) ;
 int FUNC_12 () ;
 scalar_t__ FUNC_13 (char*) ;
 TYPE_4__* FUNC_14 () ;
 int FUNC_15 (struct tui_win_info*) ;
 int FUNC_16 (struct tui_win_info*,TYPE_3__*,union tui_line_or_address,int ) ;

void
FUNC_17 (struct frame_info *VAR_4)
{
  struct tui_win_info * VAR_5;
  int VAR_6;

  if (VAR_4)
    {
      int VAR_7, VAR_8;
      CORE_ADDR VAR_9;
      struct tui_gen_win_info * VAR_10 = FUNC_9 ();
      int VAR_11;
      struct symtab_and_line VAR_12;

      FUNC_1 (VAR_4, &VAR_12);

      VAR_11 = VAR_12.symtab != 0
        && FUNC_13 (VAR_12.symtab->filename);
      FUNC_11 (VAR_12.symtab == 0 ? "??" : VAR_12.symtab->filename,
                            FUNC_6 (VAR_4),
                            VAR_12.line,
                            FUNC_3 (VAR_4));
      FUNC_12 ();
      VAR_7 = 0;
      for (VAR_8 = 0; VAR_8 < (FUNC_14 ())->count; VAR_8++)
 {
   union tui_which_element *VAR_13;
   VAR_5 = (struct tui_win_info *) (FUNC_14 ())->list[VAR_8];

   VAR_13 = &((struct tui_win_element *) VAR_10->content[0])->which_element;
   if (VAR_5 == VAR_3)
     {
       VAR_7 = (VAR_13->locator.line_no -
      (VAR_5->generic.viewport_height / 2)) + 1;
       if (VAR_7 <= 0)
  VAR_7 = 1;
     }
   else
     {
       if (FUNC_2 (FUNC_3 (VAR_4), (char **) ((void*)0),
         &VAR_9, (CORE_ADDR) ((void*)0)) == 0)
  FUNC_0 ("No function contains program counter for selected frame.\n");
       else
  VAR_9 = FUNC_7 (VAR_9, FUNC_3 (VAR_4));
     }

   if (VAR_5 == VAR_3)
     {
       union tui_line_or_address VAR_14;
       VAR_14.line_no = VAR_7;
       if (!(VAR_11
      && FUNC_8 (VAR_13->locator.line_no, VAR_5, VAR_1)))
  FUNC_16 (VAR_5, VAR_12.symtab, VAR_14, VAR_1);
       else
  {
    VAR_14.line_no = VAR_13->locator.line_no;
    FUNC_10 (VAR_14, VAR_5);
  }
     }
   else
     {
       if (VAR_5 == VAR_2)
  {
    union tui_line_or_address VAR_15;
    VAR_15.addr = VAR_9;
    if (!FUNC_4 (VAR_13->locator.addr, VAR_5, VAR_1))
      FUNC_16 (VAR_5, VAR_12.symtab, VAR_15, VAR_1);
    else
      {
        VAR_15.addr = VAR_13->locator.addr;
        FUNC_10 (VAR_15, VAR_5);
      }
  }
     }
   FUNC_15 (VAR_5);
 }
    }
  else
    {
      FUNC_11 (((void*)0), ((void*)0), 0, (CORE_ADDR) 0);
      FUNC_12 ();
      for (VAR_6 = 0; VAR_6 < (FUNC_14 ())->count; VAR_6++)
 {
   VAR_5 = (struct tui_win_info *) (FUNC_14 ())->list[VAR_6];
   FUNC_5 (VAR_5, VAR_0);
   FUNC_15 (VAR_5);
 }
    }
}

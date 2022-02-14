
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ addr; } ;
struct tui_source_element {char* line; int is_exec_point; int has_break; TYPE_6__ line_or_addr; } ;
struct TYPE_13__ {scalar_t__ addr; } ;
struct TYPE_14__ {struct tui_source_element source; TYPE_4__ locator; } ;
struct tui_win_element {TYPE_5__ which_element; } ;
struct tui_gen_win_info {scalar_t__* content; } ;
struct tui_asm_line {char* addr_string; char* insn; scalar_t__ addr; } ;
typedef enum tui_status { ____Placeholder_tui_status } tui_status ;
struct TYPE_16__ {int height; int width; int content_size; scalar_t__* content; } ;
struct TYPE_10__ {scalar_t__ addr; } ;
struct TYPE_11__ {int horizontal_offset; TYPE_1__ start_line_or_addr; } ;
struct TYPE_12__ {TYPE_2__ source_info; } ;
struct TYPE_17__ {TYPE_7__ generic; TYPE_3__ detail; } ;
typedef scalar_t__ CORE_ADDR ;


 TYPE_8__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct tui_asm_line*,int ,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_8__*) ;
 int FUNC_7 () ;
 int FUNC_8 (struct tui_asm_line*,scalar_t__,int) ;
 struct tui_gen_win_info* FUNC_9 () ;
 int FUNC_10 (char*) ;

enum tui_status
FUNC_11 (CORE_ADDR VAR_4)
{
  enum tui_status VAR_5 = VAR_1;
  int VAR_6;
  int VAR_7 = VAR_0->detail.source_info.horizontal_offset;
  int VAR_8, VAR_9;
  CORE_ADDR VAR_10;
  struct tui_gen_win_info * VAR_11 = FUNC_9 ();
  int VAR_12 = FUNC_7 ();
  struct tui_asm_line* VAR_13;
  int VAR_14;
  int VAR_15, VAR_16;
  char* VAR_17;

  if (VAR_4 == 0)
    return VAR_1;

  VAR_5 = FUNC_6 (VAR_0);
  if (VAR_5 != VAR_2)
    return VAR_5;

  VAR_0->detail.source_info.start_line_or_addr.addr = VAR_4;
  VAR_10 = (CORE_ADDR)
    (((struct tui_win_element *) VAR_11->content[0])->which_element.locator.addr);

  VAR_9 = VAR_0->generic.height - 2;


  VAR_13 = (struct tui_asm_line*) FUNC_0 (sizeof (struct tui_asm_line)
                                         * VAR_9);
  FUNC_2 (VAR_13, 0, sizeof (struct tui_asm_line) * VAR_9);

  VAR_8 = VAR_0->generic.width - 1;

  FUNC_8 (VAR_13, VAR_4, VAR_9);


  VAR_15 = 0;
  VAR_16 = 0;
  for (VAR_6 = 0; VAR_6 < VAR_9; VAR_6++)
    {
      size_t VAR_18 = FUNC_5 (VAR_13[VAR_6].addr_string);
      if (VAR_18 > VAR_15)
        VAR_15 = VAR_18;

      VAR_18 = FUNC_5 (VAR_13[VAR_6].insn) + VAR_12;
      if (VAR_18 > VAR_16)
        VAR_16 = VAR_18;
    }
  VAR_16 += VAR_15 + VAR_12;


  VAR_17 = (char*) FUNC_0 (VAR_16);
  VAR_14 = (1 + (VAR_15 / VAR_12)) * VAR_12;


  for (VAR_6 = 0; VAR_6 < VAR_9; VAR_6++)
    {
      struct tui_win_element * VAR_19;
      struct tui_source_element* VAR_20;
      int VAR_21;

      VAR_19 = (struct tui_win_element *) VAR_0->generic.content[VAR_6];
      VAR_20 = &VAR_19->which_element.source;
      FUNC_4 (VAR_17, VAR_13[VAR_6].addr_string);
      VAR_21 = FUNC_5 (VAR_17);


      while (VAR_21 < VAR_14)
        {
          FUNC_3 (VAR_17, " ");
          VAR_21++;
        }

      FUNC_3 (VAR_17, VAR_13[VAR_6].insn);


      if (FUNC_5 (VAR_17) > VAR_7)
        FUNC_4 (VAR_20->line, &VAR_17[VAR_7]);
      else
        VAR_20->line[0] = '\0';

      VAR_20->line_or_addr.addr = VAR_13[VAR_6].addr;
      VAR_20->is_exec_point = VAR_13[VAR_6].addr == VAR_10;


      VAR_20->has_break = (!VAR_20->is_exec_point
                       && FUNC_1 (VAR_4) != VAR_3);

      FUNC_10 (VAR_13[VAR_6].addr_string);
      FUNC_10 (VAR_13[VAR_6].insn);
    }
  VAR_0->generic.content_size = VAR_6;
  return VAR_2;
}

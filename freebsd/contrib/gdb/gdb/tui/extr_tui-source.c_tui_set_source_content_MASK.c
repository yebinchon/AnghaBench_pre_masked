
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


struct TYPE_13__ {int line_no; } ;
struct TYPE_14__ {char* line; int is_exec_point; TYPE_4__ line_or_addr; } ;
struct TYPE_15__ {int line_no; int file_name; } ;
struct TYPE_16__ {TYPE_5__ source; TYPE_6__ locator; } ;
struct tui_win_element {TYPE_7__ which_element; } ;
struct TYPE_11__ {int line_no; } ;
struct tui_source_info {char* filename; int horizontal_offset; TYPE_2__ start_line_or_addr; } ;
struct tui_gen_win_info {scalar_t__* content; } ;
struct symtab {char* filename; int nlines; int * line_charpos; } ;
typedef enum tui_status { ____Placeholder_tui_status } tui_status ;
struct TYPE_12__ {int width; int height; char* title; int content_size; scalar_t__* content; } ;
struct TYPE_10__ {struct tui_source_info source_info; } ;
struct TYPE_17__ {TYPE_3__ generic; TYPE_1__ detail; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_8__* VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct symtab*,int) ;
 scalar_t__ FUNC_7 (int,int ,int ) ;
 int FUNC_8 (struct symtab*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 (char*,int,char*,int) ;
 int FUNC_12 (char*,char*,...) ;
 scalar_t__ FUNC_13 (int ,char*) ;
 int FUNC_14 (char*,char*) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (TYPE_8__*) ;
 int FUNC_17 () ;
 struct tui_gen_win_info* FUNC_18 () ;
 int FUNC_19 (char*) ;
 scalar_t__ FUNC_20 (int) ;
 void* FUNC_21 (char*) ;

enum tui_status
FUNC_22 (struct symtab *VAR_6, int VAR_7, int VAR_8)
{
  enum tui_status VAR_9 = VAR_2;

  if (VAR_6 != (struct symtab *) ((void*)0) && VAR_6->filename != (char *) ((void*)0))
    {
      FILE *VAR_10;
      int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
      char *VAR_16 = 0;

      if ((VAR_9 = FUNC_16 (VAR_3)) == VAR_4)
 {
   VAR_14 = VAR_3->generic.width - 1;


   VAR_15 = (VAR_7 + (VAR_3->generic.height - 2)) - VAR_7;
   VAR_12 = FUNC_8 (VAR_6);
   if (VAR_12 < 0)
     {
       if (!VAR_8)
  {
    char *VAR_17 = FUNC_0 (FUNC_15 (VAR_6->filename) + 100);
    FUNC_12 (VAR_17, "%s:%d", VAR_6->filename, VAR_7);
    FUNC_10 (VAR_17, VAR_5);
  }
       VAR_9 = VAR_2;
     }
   else
     {
       if (VAR_6->line_charpos == 0)
  FUNC_6 (VAR_6, VAR_12);

       if (VAR_7 < 1 || VAR_7 > VAR_6->nlines)
  {
    FUNC_2 (VAR_12);
    FUNC_11 (
     "Line number %d out of range; %s has %d lines.\n",
          VAR_7, VAR_6->filename, VAR_6->nlines);
  }
       else if (FUNC_7 (VAR_12, VAR_6->line_charpos[VAR_7 - 1], 0) < 0)
  {
    FUNC_2 (VAR_12);
    FUNC_9 (VAR_6->filename);
  }
       else
  {
    int VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;
    struct tui_gen_win_info * VAR_23 = FUNC_18 ();
                  struct tui_source_info * VAR_24 = &VAR_3->detail.source_info;

                  if (VAR_3->generic.title)
                    FUNC_19 (VAR_3->generic.title);
                  VAR_3->generic.title = FUNC_21 (VAR_6->filename);

                  if (VAR_24->filename)
                    FUNC_19 (VAR_24->filename);
                  VAR_24->filename = FUNC_21 (VAR_6->filename);



    VAR_18 = VAR_24->horizontal_offset;
    VAR_22 = (VAR_14 - 1) + VAR_18;
    VAR_10 = FUNC_4 (VAR_12, VAR_1);
    FUNC_1 (VAR_10);
    VAR_20 = 0;
    VAR_19 = VAR_24->start_line_or_addr.line_no = VAR_7;
    if (VAR_18 > 0)
      VAR_16 = (char *) FUNC_20 (
        (VAR_22 + 1) * sizeof (char));
    while (VAR_20 < VAR_15)
      {
        struct tui_win_element * VAR_25 = (struct tui_win_element *)
        VAR_3->generic.content[VAR_20];


        VAR_13 = FUNC_5 (VAR_10);

        if (VAR_18 == 0)
   VAR_16 = ((struct tui_win_element *)
       VAR_3->generic.content[
     VAR_20])->which_element.source.line;

        FUNC_12 (VAR_16, "%-6d", VAR_19);
        VAR_21 = FUNC_15 (VAR_16);
        VAR_11 = VAR_21 -
   ((VAR_21 / FUNC_17 ()) * FUNC_17 ());
        while (VAR_11 < FUNC_17 ())
   {
     VAR_16[VAR_21] = ' ';
     VAR_11++;
     VAR_21++;
   }
        VAR_16[VAR_21] = (char) 0;



        VAR_25->which_element.source.line_or_addr.line_no =
   VAR_19;
        VAR_25->which_element.source.is_exec_point =
   (FUNC_13 (((struct tui_win_element *)
   VAR_23->content[0])->which_element.locator.file_name,
     VAR_6->filename) == 0
    && VAR_19 == ((struct tui_win_element *)
    VAR_23->content[0])->which_element.locator.line_no);
        if (VAR_13 != VAR_0)
   {
     VAR_11 = FUNC_15 (VAR_16) - 1;
     do
       {
         if ((VAR_13 != '\n') &&
      (VAR_13 != '\r') && (++VAR_11 < VAR_22))
    {
      if (VAR_13 < 040 && VAR_13 != '\t')
        {
          VAR_16[VAR_11++] = '^';
          VAR_16[VAR_11] = VAR_13 + 0100;
        }
      else if (VAR_13 == 0177)
        {
          VAR_16[VAR_11++] = '^';
          VAR_16[VAR_11] = '?';
        }
      else
        {




          if (VAR_13 == '\t')
     {
       int VAR_26, VAR_27 = FUNC_17 ();

       for (VAR_26 = VAR_11 - (
            (VAR_11 / VAR_27) * VAR_27);
            ((VAR_26 < VAR_27) &&
      VAR_11 < VAR_22);
            VAR_11++, VAR_26++)
         VAR_16[VAR_11] = ' ';
       VAR_11--;
     }
          else
     VAR_16[VAR_11] = VAR_13;
        }
      VAR_16[VAR_11 + 1] = 0;
    }
         else
    {

      while (VAR_13 != VAR_0 && VAR_13 != '\n' && VAR_13 != '\r')
        VAR_13 = FUNC_5 (VAR_10);
    }
       }
     while (VAR_13 != VAR_0 && VAR_13 != '\n' && VAR_13 != '\r' &&
     VAR_11 < VAR_22 && (VAR_13 = FUNC_5 (VAR_10)));
   }

        if (FUNC_15 (VAR_16) > VAR_18)
   FUNC_14 (((struct tui_win_element *) VAR_3->generic.content[
     VAR_20])->which_element.source.line,
    &VAR_16[VAR_18]);
        else
   ((struct tui_win_element *)
    VAR_3->generic.content[
     VAR_20])->which_element.source.line[0] = (char) 0;
        VAR_20++;
        VAR_19++;
      }
    if (VAR_18 > 0)
      FUNC_19 (VAR_16);
    FUNC_3 (VAR_10);
    VAR_3->generic.content_size = VAR_15;
    VAR_9 = VAR_4;
  }
     }
 }
    }
  return VAR_9;
}

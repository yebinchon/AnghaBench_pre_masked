
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct symtabs_and_lines {int nelts; struct symtab_and_line* sals; } ;
struct symtab_and_line {int pc; } ;
struct symtab {int dummy; } ;
struct frame_info {int dummy; } ;
struct TYPE_2__ {struct cleanup* pointer; } ;
struct continuation_arg {TYPE_1__ data; int * next; } ;
struct cleanup {int dummy; } ;
struct breakpoint {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct continuation_arg*) ;
 int VAR_1 ;
 int FUNC_1 () ;
 struct symtabs_and_lines FUNC_2 (char**,int,struct symtab*,int ,char***,int *) ;
 int VAR_2 ;
 struct symtab* VAR_3 ;
 scalar_t__ VAR_4 ;
 struct frame_info* VAR_5 ;
 int FUNC_3 (struct cleanup*) ;
 int FUNC_4 (char*) ;
 scalar_t__ VAR_6 ;
 struct symtab_and_line FUNC_5 (int ,int ) ;
 int FUNC_6 (struct frame_info*) ;
 int FUNC_7 (struct frame_info*) ;
 struct frame_info* FUNC_8 (struct frame_info*) ;
 struct cleanup* FUNC_9 (struct breakpoint*) ;
 struct cleanup* FUNC_10 (struct breakpoint*) ;
 int VAR_7 ;
 int FUNC_11 (int,int ,int ) ;
 int FUNC_12 (struct symtab_and_line*) ;
 struct breakpoint* FUNC_13 (struct symtab_and_line,int ,int ) ;
 scalar_t__ FUNC_14 () ;
 int VAR_8 ;
 int FUNC_15 (struct symtab_and_line*) ;
 scalar_t__ FUNC_16 (int) ;

void
FUNC_17 (char *VAR_9, int VAR_10, int VAR_11)
{
  struct symtabs_and_lines VAR_12;
  struct symtab_and_line VAR_13;
  struct frame_info *VAR_14 = FUNC_8 (VAR_5);
  struct breakpoint *VAR_15;
  struct cleanup *VAR_16;
  struct continuation_arg *VAR_17;


  FUNC_1 ();




  if (VAR_4)
    VAR_12 = FUNC_2 (&VAR_9, 1, VAR_3,
     VAR_2, (char ***) ((void*)0), ((void*)0));
  else
    VAR_12 = FUNC_2 (&VAR_9, 1, (struct symtab *) ((void*)0),
     0, (char ***) ((void*)0), ((void*)0));

  if (VAR_12.nelts != 1)
    FUNC_4 ("Couldn't get information on specified line.");

  VAR_13 = VAR_12.sals[0];
  FUNC_15 (VAR_12.sals);

  if (*VAR_9)
    FUNC_4 ("Junk at end of arguments.");

  FUNC_12 (&VAR_13);

  if (VAR_11)


    VAR_15 = FUNC_13 (VAR_13, VAR_7, VAR_1);
  else


    VAR_15 = FUNC_13 (VAR_13,
        FUNC_6 (VAR_5),
        VAR_1);

  if (!VAR_6 || !FUNC_14 ())
    VAR_16 = FUNC_9 (VAR_15);
  else
    VAR_16 = FUNC_10 (VAR_15);
  if (VAR_6 && FUNC_14 ())
    {




      VAR_17 =
 (struct continuation_arg *) FUNC_16 (sizeof (struct continuation_arg));
      VAR_17->next = ((void*)0);
      VAR_17->data.pointer = VAR_16;

      FUNC_0 (VAR_8, VAR_17);
    }



  if (VAR_14)
    {
      VAR_13 = FUNC_5 (FUNC_7 (VAR_14), 0);
      VAR_13.pc = FUNC_7 (VAR_14);
      VAR_15 = FUNC_13 (VAR_13, FUNC_6 (VAR_14),
          VAR_1);
      if (!VAR_6 || !FUNC_14 ())
 FUNC_9 (VAR_15);
      else
 FUNC_10 (VAR_15);
    }

  FUNC_11 (-1, VAR_0, 0);


  if (!VAR_6 || !FUNC_14 ())
    FUNC_3 (VAR_16);
}

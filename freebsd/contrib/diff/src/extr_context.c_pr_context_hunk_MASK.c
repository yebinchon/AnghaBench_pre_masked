
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct change {scalar_t__ line0; scalar_t__ deleted; scalar_t__ inserted; scalar_t__ line1; struct change* link; } ;
typedef scalar_t__ lin ;
typedef enum changes { ____Placeholder_changes } changes ;
struct TYPE_5__ {scalar_t__ fastmap; } ;
struct TYPE_4__ {scalar_t__ prefix_lines; scalar_t__ valid_lines; int * linbuf; } ;
typedef int FILE ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct change*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_2 () ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 char* FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int *,char*) ;
 TYPE_2__ VAR_4 ;
 int * VAR_5 ;
 int FUNC_5 (char const*,int *) ;
 int FUNC_6 (int *,char const*) ;
 int FUNC_7 (TYPE_1__*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_8 (struct change *VAR_6)
{
  lin VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
  char const *VAR_12;
  char const *VAR_13;
  FILE *VAR_14;



  enum changes VAR_15 = FUNC_1 (VAR_6, &VAR_7, &VAR_8, &VAR_9, &VAR_10);
  if (! VAR_15)
    return;



  VAR_11 = - VAR_3[0].prefix_lines;
  VAR_7 = FUNC_0 (VAR_7 - VAR_2, VAR_11);
  VAR_9 = FUNC_0 (VAR_9 - VAR_2, VAR_11);
  if (VAR_8 < VAR_3[0].valid_lines - VAR_2)
    VAR_8 += VAR_2;
  else
    VAR_8 = VAR_3[0].valid_lines - 1;
  if (VAR_10 < VAR_3[1].valid_lines - VAR_2)
    VAR_10 += VAR_2;
  else
    VAR_10 = VAR_3[1].valid_lines - 1;


  VAR_13 = 0;
  if (VAR_4.fastmap)
    VAR_13 = FUNC_3 (VAR_3[0].linbuf, VAR_7);

  FUNC_2 ();
  VAR_14 = VAR_5;

  FUNC_4 (VAR_14, "***************");

  if (VAR_13)
    FUNC_6 (VAR_14, VAR_13);

  FUNC_4 (VAR_14, "\n*** ");
  FUNC_7 (&VAR_3[0], VAR_7, VAR_8);
  FUNC_4 (VAR_14, " ****\n");

  if (VAR_15 & VAR_1)
    {
      struct change *VAR_16 = VAR_6;

      for (VAR_11 = VAR_7; VAR_11 <= VAR_8; VAR_11++)
 {



   while (VAR_16 && VAR_16->line0 + VAR_16->deleted <= VAR_11)
     VAR_16 = VAR_16->link;



   VAR_12 = " ";
   if (VAR_16 && VAR_16->line0 <= VAR_11)



     VAR_12 = (VAR_16->inserted > 0 ? "!" : "-");

   FUNC_5 (VAR_12, &VAR_3[0].linbuf[VAR_11]);
 }
    }

  FUNC_4 (VAR_14, "--- ");
  FUNC_7 (&VAR_3[1], VAR_9, VAR_10);
  FUNC_4 (VAR_14, " ----\n");

  if (VAR_15 & VAR_0)
    {
      struct change *VAR_17 = VAR_6;

      for (VAR_11 = VAR_9; VAR_11 <= VAR_10; VAR_11++)
 {



   while (VAR_17 && VAR_17->line1 + VAR_17->inserted <= VAR_11)
     VAR_17 = VAR_17->link;



   VAR_12 = " ";
   if (VAR_17 && VAR_17->line1 <= VAR_11)



     VAR_12 = (VAR_17->deleted > 0 ? "!" : "+");

   FUNC_5 (VAR_12, &VAR_3[1].linbuf[VAR_11]);
 }
    }
}

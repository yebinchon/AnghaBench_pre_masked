
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct change {scalar_t__ line0; scalar_t__ deleted; scalar_t__ inserted; struct change* link; } ;
typedef scalar_t__ lin ;
struct TYPE_5__ {scalar_t__ fastmap; } ;
struct TYPE_4__ {scalar_t__ prefix_lines; scalar_t__ valid_lines; int * linbuf; } ;
typedef int FILE ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (struct change*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_2 () ;
 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 char* FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int *,char*) ;
 TYPE_2__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int * VAR_4 ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *,char const*) ;
 int FUNC_7 (TYPE_1__*,scalar_t__,scalar_t__) ;
 int FUNC_8 (char,int *) ;

__attribute__((used)) static void
FUNC_9 (struct change *VAR_5)
{
  lin VAR_6, VAR_7, VAR_8, VAR_9;
  lin VAR_10, VAR_11, VAR_12;
  struct change *VAR_13;
  char const *VAR_14;
  FILE *VAR_15;



  if (! FUNC_1 (VAR_5, &VAR_6, &VAR_7, &VAR_8, &VAR_9))
    return;



  VAR_10 = - VAR_1[0].prefix_lines;
  VAR_6 = FUNC_0 (VAR_6 - VAR_0, VAR_10);
  VAR_8 = FUNC_0 (VAR_8 - VAR_0, VAR_10);
  if (VAR_7 < VAR_1[0].valid_lines - VAR_0)
    VAR_7 += VAR_0;
  else
    VAR_7 = VAR_1[0].valid_lines - 1;
  if (VAR_9 < VAR_1[1].valid_lines - VAR_0)
    VAR_9 += VAR_0;
  else
    VAR_9 = VAR_1[1].valid_lines - 1;


  VAR_14 = 0;
  if (VAR_2.fastmap)
    VAR_14 = FUNC_3 (VAR_1[0].linbuf, VAR_6);

  FUNC_2 ();
  VAR_15 = VAR_4;

  FUNC_4 (VAR_15, "@@ -");
  FUNC_7 (&VAR_1[0], VAR_6, VAR_7);
  FUNC_4 (VAR_15, " +");
  FUNC_7 (&VAR_1[1], VAR_8, VAR_9);
  FUNC_4 (VAR_15, " @@");

  if (VAR_14)
    FUNC_6 (VAR_15, VAR_14);

  FUNC_8 ('\n', VAR_15);

  VAR_13 = VAR_5;
  VAR_10 = VAR_6;
  VAR_11 = VAR_8;

  while (VAR_10 <= VAR_7 || VAR_11 <= VAR_9)
    {



      if (!VAR_13 || VAR_10 < VAR_13->line0)
 {
   FUNC_8 (VAR_3 ? '\t' : ' ', VAR_15);
   FUNC_5 (0, &VAR_1[0].linbuf[VAR_10++]);
   VAR_11++;
 }
      else
 {


   VAR_12 = VAR_13->deleted;
   while (VAR_12--)
     {
       FUNC_8 ('-', VAR_15);
       if (VAR_3)
  FUNC_8 ('\t', VAR_15);
       FUNC_5 (0, &VAR_1[0].linbuf[VAR_10++]);
     }



   VAR_12 = VAR_13->inserted;
   while (VAR_12--)
     {
       FUNC_8 ('+', VAR_15);
       if (VAR_3)
  FUNC_8 ('\t', VAR_15);
       FUNC_5 (0, &VAR_1[1].linbuf[VAR_11++]);
     }



   VAR_13 = VAR_13->link;
 }
    }
}

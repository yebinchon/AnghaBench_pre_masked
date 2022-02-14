
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {int name; } ;
struct TYPE_13__ {int name; TYPE_3__ coverage; struct TYPE_13__* next; int num_lines; int lines; } ;
typedef TYPE_1__ source_t ;
struct TYPE_14__ {int name; struct TYPE_14__* next; } ;
typedef TYPE_2__ function_t ;
typedef TYPE_3__ coverage_t ;
typedef int coverage ;
typedef int FILE ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_6 (int ,char*,...) ;
 int * FUNC_7 (char*,char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (TYPE_3__*,char*) ;
 TYPE_2__* VAR_3 ;
 int VAR_4 ;
 char* FUNC_10 (char const*,int ) ;
 int FUNC_11 (TYPE_3__*,int ,int) ;
 int FUNC_12 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_13 () ;
 scalar_t__ FUNC_14 () ;
 int FUNC_15 (TYPE_2__*) ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_16 (const char *VAR_8)
{
  source_t *VAR_9;
  function_t *VAR_10;

  FUNC_3 (VAR_8);
  if (FUNC_14 ())
    return;

  if (!VAR_3)
    {
      FUNC_6 (VAR_6, "%s:no functions found\n", VAR_0);
      return;
    }

  if (FUNC_13 ())
    return;

  for (VAR_10 = VAR_3; VAR_10; VAR_10 = VAR_10->next)
    FUNC_15 (VAR_10);
  for (VAR_9 = VAR_5; VAR_9; VAR_9 = VAR_9->next)
    VAR_9->lines = FUNC_0 (VAR_4, VAR_9->num_lines);
  for (VAR_10 = VAR_3; VAR_10; VAR_10 = VAR_10->next)
    {
      coverage_t VAR_11;

      FUNC_11 (&VAR_11, 0, sizeof (VAR_11));
      VAR_11.name = VAR_10->name;
      FUNC_2 (VAR_1 ? &VAR_11 : ((void*)0), VAR_10);
      if (VAR_1)
 {
   FUNC_9 (&VAR_11, "Function");
   FUNC_6 (VAR_7, "\n");
 }
    }

  for (VAR_9 = VAR_5; VAR_9; VAR_9 = VAR_9->next)
    {
      FUNC_1 (VAR_9);
      FUNC_9 (&VAR_9->coverage, "File");
      if (VAR_2)
 {
   char *VAR_12 = FUNC_10 (VAR_8, VAR_9->name);
   FILE *VAR_13 = FUNC_7 (VAR_12, "w");

   if (VAR_13)
     {
       FUNC_6 (VAR_7, "%s:creating '%s'\n",
         VAR_9->name, VAR_12);
       FUNC_12 (VAR_13, VAR_9);
       if (FUNC_5 (VAR_13))
      FUNC_6 (VAR_6, "%s:error writing output file '%s'\n",
        VAR_9->name, VAR_12);
       FUNC_4 (VAR_13);
     }
   else
     FUNC_6 (VAR_6, "%s:could not open output file '%s'\n",
       VAR_9->name, VAR_12);
   FUNC_8 (VAR_12);
 }
      FUNC_6 (VAR_7, "\n");
    }
}

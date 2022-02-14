
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ valueT ;
typedef int val ;
typedef int symbolS ;
struct TYPE_6__ {TYPE_2__* line; } ;
struct TYPE_5__ {int line; TYPE_1__* file; } ;
struct TYPE_4__ {char* filename; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 char* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 () ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int ,char*,...) ;
 int VAR_2 ;
 int FUNC_6 (int ) ;
 int VAR_3 ;
 char* FUNC_7 (scalar_t__) ;
 int FUNC_8 (char*,char*,unsigned long) ;
 int FUNC_9 (char*,scalar_t__) ;
 scalar_t__ FUNC_10 (char*) ;
 TYPE_3__* FUNC_11 (int *) ;
 int * FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void
FUNC_14 (void)
{
  extern symbolS *VAR_5;
  int VAR_6 = 0;

  symbolS *VAR_7;
  VAR_1 = 1;
  FUNC_6 (0);

  for (VAR_7 = VAR_5; VAR_7 != (symbolS *) ((void*)0); VAR_7 = FUNC_12 (VAR_7))
    {
      if (FUNC_0 (FUNC_2 (VAR_7))
   || FUNC_2 (VAR_7) == VAR_0)
 {

   if (FUNC_13 (VAR_7))
     continue;

   if (FUNC_1 (VAR_7))
     {
       char VAR_8[30], VAR_9[8];
       valueT VAR_10 = FUNC_3 (VAR_7);



       if (sizeof (VAR_10) == 4 && sizeof (int) == 4)
  FUNC_8 (VAR_8, "%08lx", (unsigned long) VAR_10);
       else if (sizeof (VAR_10) <= sizeof (unsigned long))
  {
    FUNC_8 (VAR_9, "%%0%lulx",
      (unsigned long) (sizeof (VAR_10) * 2));
    FUNC_8 (VAR_8, VAR_9, (unsigned long) VAR_10);
  }




       else
  FUNC_4 ();

       if (!VAR_6)
  {
    FUNC_5 (VAR_2, "DEFINED SYMBOLS\n");
    VAR_3++;
    VAR_6 = 1;
  }

       if (FUNC_11 (VAR_7) && FUNC_11 (VAR_7)->line)
  {
    FUNC_5 (VAR_2, "%20s:%-5d  %s:%s %s\n",
      FUNC_11 (VAR_7)->line->file->filename,
      FUNC_11 (VAR_7)->line->line,
      FUNC_7 (FUNC_2 (VAR_7)),
      VAR_8, FUNC_1 (VAR_7));
  }
       else
  {
    FUNC_5 (VAR_2, "%33s:%s %s\n",
      FUNC_7 (FUNC_2 (VAR_7)),
      VAR_8, FUNC_1 (VAR_7));
  }

       VAR_3++;
       FUNC_6 (0);
     }
 }

    }
  if (!VAR_6)
    {
      FUNC_5 (VAR_2, "NO DEFINED SYMBOLS\n");
      VAR_3++;
    }
  FUNC_5 (VAR_2, "\n");
  VAR_3++;
  FUNC_6 (0);

  VAR_6 = 0;

  for (VAR_7 = VAR_5; VAR_7 != (symbolS *) ((void*)0); VAR_7 = FUNC_12 (VAR_7))
    {
      if (FUNC_1 (VAR_7) && FUNC_10 (FUNC_1 (VAR_7)) != 0)
 {
   if (FUNC_2 (VAR_7) == VAR_4)
     {
       if (!VAR_6)
  {
    VAR_6 = 1;
    FUNC_5 (VAR_2, "UNDEFINED SYMBOLS\n");
    VAR_3++;
    FUNC_6 (0);
  }
       FUNC_5 (VAR_2, "%s\n", FUNC_1 (VAR_7));
       VAR_3++;
       FUNC_6 (0);
     }
 }
    }
  if (!VAR_6)
    {
      FUNC_5 (VAR_2, "NO UNDEFINED SYMBOLS\n");
      VAR_3++;
      FUNC_6 (0);
    }
}

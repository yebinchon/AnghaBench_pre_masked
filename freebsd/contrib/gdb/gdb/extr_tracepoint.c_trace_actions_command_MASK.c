
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tracepoint {int number; scalar_t__ step_count; } ;


 int FUNC_0 (struct tracepoint*) ;
 struct tracepoint* FUNC_1 (char**,int ,int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (char*,char*,char*) ;
 int FUNC_4 (struct tracepoint*) ;
 int FUNC_5 (char*,char*,char*) ;
 int FUNC_6 () ;
 int FUNC_7 (char*,char*,int) ;
 int FUNC_8 (char*,char*,char*) ;
 int FUNC_9 () ;

__attribute__((used)) static void
FUNC_10 (char *VAR_0, int VAR_1)
{
  struct tracepoint *VAR_2;
  char VAR_3[128];
  char *VAR_4 = "End with a line saying just \"end\".";

  VAR_2 = FUNC_1 (&VAR_0, 0, 1);
  if (VAR_2)
    {
      FUNC_7 (VAR_3, "Enter actions for tracepoint %d, one per line.",
        VAR_2->number);

      if (VAR_1)
 {
   if (&FUNC_5)
     FUNC_5) ("%s  %s\n", VAR_3, VAR_4);
   else if (FUNC_2 ())
     FUNC_3 ("%s\n%s\n", VAR_3, VAR_4);
 }

      FUNC_0 (VAR_2);
      VAR_2->step_count = 0;
      FUNC_4 (VAR_2);

      if (&FUNC_6)
 FUNC_6) ();

    }

}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int * VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 () ;
 int VAR_3 ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (char*,int ) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (char*) ;
 scalar_t__ VAR_4 ;
 int FUNC_8 () ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_9 (char *VAR_6, int VAR_7)
{




  if (FUNC_6 (VAR_2, VAR_3))
    FUNC_0 ("The program is not being run.");
  if (!FUNC_7 ("Kill the program being debugged? "))
    FUNC_0 ("Not confirmed.");
  FUNC_8 ();

  FUNC_3 ();



  if (VAR_4)
    {
      FUNC_5 ("In %s,\n", VAR_5);
      if (VAR_0 == ((void*)0))
 FUNC_1 ("No selected stack frame.\n", VAR_1);
      else
 FUNC_4 (VAR_0,
      FUNC_2 (VAR_0), 1);
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dwProcessId; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 char* FUNC_2 () ;
 int FUNC_3 (int ,int) ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (char*,int ,char*) ;
 int FUNC_6 (int ) ;
 int VAR_4 ;
 char* FUNC_7 (int ) ;
 scalar_t__ FUNC_8 () ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_9 (char*,char*,int ) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void
FUNC_11 (char *VAR_7, int VAR_8)
{
  int VAR_9 = 1;

  if (FUNC_8 ())
    {
      FUNC_4 (((void*)0), 0);
      FUNC_3 (VAR_0, -1);
      if (!FUNC_0 (VAR_3.dwProcessId))
 {
   FUNC_5 ("Can't detach process %lu (error %lu)",
   VAR_3.dwProcessId, FUNC_2 ());
   VAR_9 = 0;
 }
      FUNC_1 (VAR_1);
    }
  if (VAR_9 && VAR_8)
    {
      char *VAR_10 = FUNC_7 (0);
      if (VAR_10 == 0)
 VAR_10 = "";
      FUNC_9 ("Detaching from program: %s, Pid %lu\n", VAR_10,
    VAR_3.dwProcessId);
      FUNC_6 (VAR_4);
    }
  VAR_5 = VAR_6;
  FUNC_10 (&VAR_2);
}

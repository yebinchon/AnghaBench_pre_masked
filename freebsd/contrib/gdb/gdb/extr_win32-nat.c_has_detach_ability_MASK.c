
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * HMODULE ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* FUNC_0 (int *,char*) ;
 int * FUNC_1 (char*) ;

__attribute__((used)) static int
FUNC_2 (void)
{
  static HMODULE VAR_2 = ((void*)0);

  if (!VAR_2)
    VAR_2 = FUNC_1 ("kernel32.dll");
  if (VAR_2)
    {
      if (!VAR_1)
 VAR_1 = FUNC_0 (VAR_2,
       "DebugSetProcessKillOnExit");
      if (!VAR_0)
 VAR_0 = FUNC_0 (VAR_2,
       "DebugActiveProcessStop");
      if (VAR_1 && VAR_0)
 return 1;
    }
  return 0;
}

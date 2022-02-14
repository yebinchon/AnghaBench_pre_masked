
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;
typedef int DEBUG_EVENT ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int *,int *) ;
 int FUNC_1 (char*,int ,int ) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int
FUNC_2 (DEBUG_EVENT * VAR_2, DWORD VAR_3)
{
  if (VAR_1 < 0)
    return 1;
  FUNC_1 ("WaitForDebugEvent ms", VAR_0, VAR_3);
  return FUNC_0 ("WaitForDebugEvent event", VAR_0, VAR_2, ((void*)0));
}

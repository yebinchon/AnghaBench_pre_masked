
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gdb_wince_result ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int *,int *) ;
 int FUNC_1 (char*,int ,int ) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int
FUNC_2 (DWORD VAR_2, DWORD VAR_3, DWORD VAR_4)
{
  gdb_wince_result VAR_5;
  if (VAR_1 < 0)
    return 0;
  FUNC_1 ("ContinueDebugEvent pid", VAR_0, VAR_2);
  FUNC_1 ("ContinueDebugEvent tid", VAR_0, VAR_3);
  FUNC_1 ("ContinueDebugEvent status", VAR_0, VAR_4);
  return FUNC_0 ("ContinueDebugEvent result", VAR_0, &VAR_5, ((void*)0));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gdb_wince_len ;
typedef int LPVOID ;
typedef int LPCVOID ;
typedef int HANDLE ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ,int *) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (char*,int ,int ) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int
FUNC_4 (HANDLE VAR_2, LPCVOID VAR_3, LPVOID VAR_4, gdb_wince_len VAR_5, gdb_wince_len * VAR_6)
{
  if (VAR_1 < 0)
    return 1;
  FUNC_1 ("ReadProcessMemory handle", VAR_0, VAR_2);
  FUNC_3 ("ReadProcessMemory location", VAR_0, VAR_3);
  FUNC_2 ("ReadProcessMemory size", VAR_0, VAR_5);

  return FUNC_0 ("ReadProcessMemory buf", VAR_0, VAR_4, VAR_6);
}

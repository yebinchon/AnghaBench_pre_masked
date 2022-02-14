
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ gdb_wince_result ;
typedef scalar_t__ gdb_wince_len ;
typedef int LPVOID ;
typedef int HANDLE ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ,scalar_t__,scalar_t__*) ;
 int FUNC_1 (char*,int,int ) ;
 scalar_t__ FUNC_2 (char*,int,int ) ;
 int FUNC_3 (char*,int,int ) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (char*,scalar_t__,int,int ,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_6 (int VAR_1)
{
  HANDLE VAR_2 = FUNC_1 (L"ReadProcessMemory handle", VAR_1, VAR_0);
  LPVOID VAR_3 = FUNC_3 (L"ReadProcessMemory base", VAR_1, VAR_0);
  gdb_wince_len VAR_4 = FUNC_2 (L"ReadProcessMemory size", VAR_1, VAR_0);
  LPVOID VAR_5 = FUNC_4 ((unsigned int) VAR_4);
  DWORD VAR_6;
  gdb_wince_result VAR_7;

  VAR_6 = 0;
  VAR_7 = (gdb_wince_result) FUNC_0 (VAR_2, VAR_3, VAR_5, VAR_4, &VAR_6);
  FUNC_5 (L"ReadProcessMemory data", VAR_7, VAR_1, VAR_0,
      VAR_5, (gdb_wince_len) VAR_6);
}

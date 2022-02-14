
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gdb_wince_result ;
typedef scalar_t__ gdb_wince_len ;
typedef int LPVOID ;
typedef int HANDLE ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,scalar_t__,scalar_t__*) ;
 int FUNC_1 (char*,int,int ) ;
 int FUNC_2 (char*,int,int ,scalar_t__*) ;
 int FUNC_3 (char*,int,int ) ;
 int FUNC_4 (char*,int ,int,int ,scalar_t__*,int) ;

__attribute__((used)) static void
FUNC_5 (int VAR_1)
{
  HANDLE VAR_2 = FUNC_1 (L"WriteProcessMemory handle", VAR_1, VAR_0);
  LPVOID VAR_3 = FUNC_3 (L"WriteProcessMemory base", VAR_1, VAR_0);
  gdb_wince_len VAR_4;
  LPVOID VAR_5 = FUNC_2 (L"WriteProcessMemory buf", VAR_1, VAR_0, &VAR_4);
  DWORD VAR_6;
  gdb_wince_result VAR_7;

  VAR_6 = 0;
  VAR_7 = FUNC_0 (VAR_2, VAR_3, VAR_5, (DWORD) VAR_4, &VAR_6);
  FUNC_4 (L"WriteProcessMemory data", VAR_7, VAR_1, VAR_0,
      (gdb_wince_len *) & VAR_6, sizeof (gdb_wince_len));
}

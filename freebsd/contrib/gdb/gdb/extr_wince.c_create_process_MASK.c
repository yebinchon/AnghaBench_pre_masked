
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gdb_wince_len ;
typedef int PROCESS_INFORMATION ;
typedef int LPWSTR ;
typedef int LPSTR ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int *,int *) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (char*,int ,int ,int ) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static int
FUNC_4 (LPSTR VAR_1, LPSTR VAR_2, DWORD VAR_3, PROCESS_INFORMATION * VAR_4)
{
  gdb_wince_len VAR_5;
  LPWSTR VAR_6;

  VAR_6 = FUNC_3 (VAR_1, &VAR_5);
  FUNC_2 ("CreateProcess exec_file", VAR_0, VAR_6, VAR_5);
  VAR_6 = FUNC_3 (VAR_2, &VAR_5);
  FUNC_2 ("CreateProcess args", VAR_0, VAR_6, VAR_5);
  FUNC_1 ("CreateProcess flags", VAR_0, VAR_3);
  return FUNC_0 ("CreateProcess result", VAR_0, VAR_4, ((void*)0));
}

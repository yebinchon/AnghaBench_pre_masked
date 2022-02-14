
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int pi ;
typedef int gdb_wince_result ;
struct TYPE_4__ {int hProcess; } ;
typedef TYPE_1__ PROCESS_INFORMATION ;
typedef int LPWSTR ;
typedef int DWORD ;


 int FUNC_0 (int ,int ,int *,int *,int ,int ,int *,int *,int *,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int,int ) ;
 int FUNC_2 (char*,int,int ,int *) ;
 int FUNC_3 (char*,int ,int,int ,TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_4 (int VAR_3)
{
  LPWSTR VAR_4 = FUNC_2 (L"CreateProcess exec_file", VAR_3, VAR_1, ((void*)0));
  LPWSTR VAR_5 = FUNC_2 (L"CreateProcess args", VAR_3, VAR_1, ((void*)0));
  DWORD VAR_6 = FUNC_1 (L"CreateProcess flags", VAR_3, VAR_1);
  PROCESS_INFORMATION VAR_7;
  gdb_wince_result VAR_8;

  VAR_8 = FUNC_0 (VAR_4,
   VAR_5,
   ((void*)0),
   ((void*)0),
   VAR_0,
   VAR_6,
   ((void*)0),
   ((void*)0),
   ((void*)0),
   &VAR_7);
  FUNC_3 (L"CreateProcess", VAR_8, VAR_3, VAR_1, &VAR_7, sizeof (VAR_7));
  VAR_2 = VAR_7.hProcess;
}

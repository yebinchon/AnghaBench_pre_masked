
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int res ;
typedef scalar_t__ gdb_wince_result ;
typedef int HANDLE ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int,int ) ;
 int FUNC_2 (char*,scalar_t__,int,int ,scalar_t__*,int) ;

__attribute__((used)) static void
FUNC_3 (int VAR_1)
{
  gdb_wince_result VAR_2;
  HANDLE VAR_3 = FUNC_1 (L"CloseHandle handle", VAR_1, VAR_0);
  VAR_2 = (gdb_wince_result) FUNC_0 (VAR_3);
  FUNC_2 (L"CloseHandle result", VAR_2, VAR_1, VAR_0, &VAR_2, sizeof (VAR_2));
}

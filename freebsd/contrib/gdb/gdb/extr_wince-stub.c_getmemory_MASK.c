
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ gdb_wince_len ;
typedef int gdb_wince_id ;
typedef int LPWSTR ;
typedef int LPVOID ;
typedef int LPCWSTR ;


 scalar_t__ FUNC_0 (int ,int,int ) ;
 int FUNC_1 (unsigned int) ;
 scalar_t__ FUNC_2 (int ,int,int ,scalar_t__) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static LPWSTR
FUNC_4 (LPCWSTR VAR_0, int VAR_1, gdb_wince_id VAR_2, gdb_wince_len *VAR_3)
{
  LPVOID VAR_4;
  gdb_wince_len VAR_5;

  if (!VAR_3)
    VAR_3 = &VAR_5;

  *VAR_3 = FUNC_0 (VAR_0, VAR_1, VAR_2);

  VAR_4 = FUNC_1 ((unsigned int) *VAR_3);

  if ((gdb_wince_len) FUNC_2 (VAR_0, VAR_1, VAR_4, *VAR_3) != *VAR_3)
    FUNC_3 (L"error getting string from host.");

  return VAR_4;
}

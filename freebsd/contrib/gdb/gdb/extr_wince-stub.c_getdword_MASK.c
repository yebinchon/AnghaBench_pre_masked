
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int what ;
typedef int n ;
typedef scalar_t__ gdb_wince_id ;
typedef int LPCWSTR ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int,scalar_t__*,int) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static DWORD
FUNC_2 (LPCWSTR VAR_1, int VAR_2, gdb_wince_id VAR_3)
{
  DWORD VAR_4;
  gdb_wince_id VAR_5;

  if (VAR_0)
    VAR_0 = 0;
  else
    do
      if (FUNC_0 (VAR_1, VAR_2, &VAR_5, sizeof (VAR_5)) != sizeof (VAR_5))
 FUNC_1 (L"error getting record type from host - %s.", VAR_1);
    while (VAR_3 != VAR_5);

  if (FUNC_0 (VAR_1, VAR_2, &VAR_4, sizeof (VAR_4)) != sizeof (VAR_4))
    FUNC_1 (L"error getting %s from host.", VAR_1);

  return VAR_4;
}

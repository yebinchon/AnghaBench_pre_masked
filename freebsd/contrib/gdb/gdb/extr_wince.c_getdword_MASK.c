
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int what ;
typedef int n ;
typedef scalar_t__ gdb_wince_id ;
typedef int LPCSTR ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,scalar_t__*,int) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static DWORD
FUNC_2 (LPCSTR VAR_1, gdb_wince_id VAR_2)
{
  DWORD VAR_3;
  gdb_wince_id VAR_4;
  do
    if (FUNC_0 (VAR_1, VAR_0, &VAR_4, sizeof (VAR_4)) != sizeof (VAR_4))
      FUNC_1 ("error getting record type from host - %s.", VAR_1);
  while (VAR_2 != VAR_4);

  if (FUNC_0 (VAR_1, VAR_0, &VAR_3, sizeof (VAR_3)) != sizeof (VAR_3))
    FUNC_1 ("error getting %s from host.", VAR_1);

  return VAR_3;
}

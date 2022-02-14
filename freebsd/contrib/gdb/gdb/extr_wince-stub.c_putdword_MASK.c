
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int what ;
typedef int n ;
typedef int gdb_wince_id ;
typedef int LPCWSTR ;
typedef int DWORD ;


 int FUNC_0 (int ,int,int *,int) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static void
FUNC_2 (LPCWSTR VAR_0, int VAR_1, gdb_wince_id VAR_2, DWORD VAR_3)
{
  if (FUNC_0 (VAR_0, VAR_1, &VAR_2, sizeof (VAR_2)) != sizeof (VAR_2))
    FUNC_1 (L"error writing record id for %s to host.", VAR_0);
  if (FUNC_0 (VAR_0, VAR_1, &VAR_3, sizeof (VAR_3)) != sizeof (VAR_3))
    FUNC_1 (L"error writing %s to host.", VAR_0);
}

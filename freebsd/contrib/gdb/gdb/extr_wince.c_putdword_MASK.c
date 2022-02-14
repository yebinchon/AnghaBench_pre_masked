
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int what ;
typedef int n ;
typedef int gdb_wince_id ;
typedef int LPCSTR ;
typedef int DWORD ;


 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static void
FUNC_2 (LPCSTR VAR_0, gdb_wince_id VAR_1, DWORD VAR_2)
{
  if (FUNC_0 (VAR_0, &VAR_1, sizeof (VAR_1)) != sizeof (VAR_1))
    FUNC_1 ("error writing record id to host for %s", VAR_0);
  if (FUNC_0 (VAR_0, &VAR_2, sizeof (VAR_2)) != sizeof (VAR_2))
    FUNC_1 ("error writing %s to host.", VAR_0);
}

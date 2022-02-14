
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ gdb_wince_len ;
typedef int gdb_wince_id ;
typedef int LPVOID ;
typedef int LPCSTR ;


 int FUNC_0 (short) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ,int ,int ,scalar_t__) ;
 int FUNC_3 (char*,int ) ;

int
FUNC_4 (LPCSTR VAR_1, gdb_wince_id VAR_2, LPVOID VAR_3, gdb_wince_len * VAR_4)
{
  gdb_wince_len VAR_5;
  if (VAR_4 == ((void*)0))
    VAR_4 = &VAR_5;

  *VAR_4 = FUNC_1 (VAR_1, VAR_2);

  if ((short) *VAR_4 < 0)
    {
      FUNC_0 (-(short) *VAR_4);
      return 0;
    }

  if ((gdb_wince_len) FUNC_2 (VAR_1, VAR_0, VAR_3, *VAR_4) != *VAR_4)
    FUNC_3 ("couldn't read information from wince stub - %s", VAR_1);

  return 1;
}

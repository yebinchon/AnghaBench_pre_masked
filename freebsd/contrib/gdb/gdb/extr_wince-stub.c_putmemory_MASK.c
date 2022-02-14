
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ gdb_wince_len ;
typedef int gdb_wince_id ;
typedef int LPCWSTR ;


 int FUNC_0 (int ,int,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int,void const*,scalar_t__) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3 (LPCWSTR VAR_0, int VAR_1, gdb_wince_id VAR_2, const void *VAR_3, gdb_wince_len VAR_4)
{
  FUNC_0 (VAR_0, VAR_1, VAR_2, VAR_4);
  if (((short) VAR_4 > 0) && (gdb_wince_len) FUNC_1 (VAR_0, VAR_1, VAR_3, VAR_4) != VAR_4)
    FUNC_2 (L"error writing memory to host.");
}

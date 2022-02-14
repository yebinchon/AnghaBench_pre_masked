
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ gdb_wince_len ;
typedef int gdb_wince_id ;
typedef int LPCSTR ;


 int FUNC_0 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,void const*,scalar_t__) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static void
FUNC_3 (LPCSTR VAR_0, gdb_wince_id VAR_1, const void *VAR_2, gdb_wince_len VAR_3)
{
  FUNC_0 (VAR_0, VAR_1, VAR_3);
  if (((short) VAR_3 > 0) && FUNC_1 (VAR_0, VAR_2, VAR_3) != VAR_3)
    FUNC_2 ("error writing %s to host.", VAR_0);
}

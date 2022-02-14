
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gdb_wince_len ;
typedef int LPCVOID ;
typedef scalar_t__ CORE_ADDR ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int,int*) ;

__attribute__((used)) static int
FUNC_1 (CORE_ADDR VAR_1, char *VAR_2, int VAR_3)
{
  gdb_wince_len VAR_4;
  if (!FUNC_0 (VAR_0, (LPCVOID) VAR_1,
        (LPCVOID) VAR_2, VAR_3, &VAR_4))
    return -1;
  return VAR_4;
}

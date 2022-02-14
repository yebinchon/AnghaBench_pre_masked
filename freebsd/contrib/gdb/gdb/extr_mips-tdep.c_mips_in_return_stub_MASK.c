
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ CORE_ADDR ;


 scalar_t__ FUNC_0 (scalar_t__,int *,scalar_t__*,int *) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_3 (CORE_ADDR VAR_0, char *VAR_1)
{
  CORE_ADDR VAR_2;


  if (FUNC_0 (VAR_0, ((void*)0), &VAR_2, ((void*)0)) == 0)
    return 0;


  if (FUNC_1 (VAR_1, "__mips16_ret_sf") == 0
      || FUNC_1 (VAR_1, "__mips16_ret_df") == 0)
    return 1;



  if (FUNC_2 (VAR_1, "__mips16_call_stub_", 19) == 0
      && (VAR_1[19] == 's' || VAR_1[19] == 'd') && VAR_0 != VAR_2)
    return 1;

  return 0;
}

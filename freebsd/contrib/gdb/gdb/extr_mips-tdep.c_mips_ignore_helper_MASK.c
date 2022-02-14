
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CORE_ADDR ;


 scalar_t__ FUNC_0 (int ,char**,int *,int *) ;
 scalar_t__ FUNC_1 (char*,char*) ;

int
FUNC_2 (CORE_ADDR VAR_0)
{
  char *VAR_1;


  if (FUNC_0 (VAR_0, &VAR_1, ((void*)0), ((void*)0)) == 0)
    return 0;



  return (FUNC_1 (VAR_1, "__mips16_ret_sf") == 0
   || FUNC_1 (VAR_1, "__mips16_ret_df") == 0);
}

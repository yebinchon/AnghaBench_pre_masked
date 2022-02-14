
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ word32 ;
typedef int u8 ;
typedef int Cmac ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,int *,scalar_t__*) ;
 scalar_t__ FUNC_2 (int *,int const*,size_t const) ;
 scalar_t__ FUNC_3 (int *,int const*,size_t,int ,int *) ;

int FUNC_4(const u8 *VAR_2, size_t VAR_3, size_t VAR_4,
       const u8 *VAR_5[], const size_t *VAR_6, u8 *VAR_7)
{
 Cmac VAR_8;
 size_t VAR_9;
 word32 VAR_10;

 if (FUNC_0())
  return -1;

 if (FUNC_3(&VAR_8, VAR_2, VAR_3, VAR_1, ((void*)0)) != 0)
  return -1;

 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++)
  if (FUNC_2(&VAR_8, VAR_5[VAR_9], VAR_6[VAR_9]) != 0)
   return -1;

 VAR_10 = VAR_0;
 if (FUNC_1(&VAR_8, VAR_7, &VAR_10) != 0 || VAR_10 != VAR_0)
  return -1;

 return 0;
}

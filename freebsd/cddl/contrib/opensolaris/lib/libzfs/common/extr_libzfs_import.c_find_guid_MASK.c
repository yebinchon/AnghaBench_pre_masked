
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint_t ;
typedef int uint64_t ;
typedef int nvlist_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int ,int ***,size_t*) ;
 scalar_t__ FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int) ;

boolean_t
FUNC_3(nvlist_t *VAR_4, uint64_t VAR_5)
{
 uint64_t VAR_6;
 nvlist_t **VAR_7;
 uint_t VAR_8, VAR_9;

 FUNC_2(FUNC_1(VAR_4, VAR_3, &VAR_6) == 0);
 if (VAR_6 == VAR_5)
  return (VAR_1);

 if (FUNC_0(VAR_4, VAR_2,
     &VAR_7, &VAR_9) == 0) {
  for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++)
   if (FUNC_3(VAR_7[VAR_8], VAR_5))
    return (VAR_1);
 }

 return (VAR_0);
}

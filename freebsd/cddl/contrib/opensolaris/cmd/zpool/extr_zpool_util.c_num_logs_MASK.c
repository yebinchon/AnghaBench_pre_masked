
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint_t ;
typedef scalar_t__ uint64_t ;
typedef int nvlist_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ,int ***,size_t*) ;
 int FUNC_1 (int *,int ,scalar_t__*) ;

uint_t
FUNC_2(nvlist_t *VAR_3)
{
 uint_t VAR_4 = 0;
 uint_t VAR_5, VAR_6;
 nvlist_t **VAR_7;

 if (FUNC_0(VAR_3, VAR_1,
     &VAR_7, &VAR_6) != 0)
  return (0);

 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
  uint64_t VAR_8 = VAR_0;

  (void) FUNC_1(VAR_7[VAR_5], VAR_2,
      &VAR_8);
  if (VAR_8)
   VAR_4++;
 }
 return (VAR_4);
}

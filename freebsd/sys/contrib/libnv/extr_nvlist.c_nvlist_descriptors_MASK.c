
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;
typedef int fds ;


 int* FUNC_0 (int) ;
 size_t FUNC_1 (int const*) ;
 int FUNC_2 (int const*,int*) ;

int *
FUNC_3(const nvlist_t *VAR_0, size_t *VAR_1)
{
 size_t VAR_2;
 int *VAR_3;

 VAR_2 = FUNC_1(VAR_0);
 VAR_3 = FUNC_0(sizeof(VAR_3[0]) * (VAR_2 + 1));
 if (VAR_3 == ((void*)0))
  return (((void*)0));
 if (VAR_2 > 0)
  FUNC_2(VAR_0, VAR_3);
 VAR_3[VAR_2] = -1;
 if (VAR_1 != ((void*)0))
  *VAR_1 = VAR_2;
 return (VAR_3);
}

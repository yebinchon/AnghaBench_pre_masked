
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvpair_t ;
typedef int nvlist_t ;


 int FUNC_0 (int const*) ;
 int * FUNC_1 (int const*) ;
 int * FUNC_2 (int const*,void*) ;
 char const* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

const char *
FUNC_5(const nvlist_t *VAR_0, int *VAR_1, void **VAR_2)
{
 nvpair_t *VAR_3;

 FUNC_0(VAR_0);

 if (VAR_2 == ((void*)0) || *VAR_2 == ((void*)0))
  VAR_3 = FUNC_1(VAR_0);
 else
  VAR_3 = FUNC_2(VAR_0, *VAR_2);
 if (VAR_3 == ((void*)0))
  return (((void*)0));
 if (VAR_1 != ((void*)0))
  *VAR_1 = FUNC_4(VAR_3);
 if (VAR_2 != ((void*)0))
  *VAR_2 = VAR_3;
 return (FUNC_3(VAR_3));
}

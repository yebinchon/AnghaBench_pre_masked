
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvpair_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 int * FUNC_0 (int const*,int ,char const*) ;
 int FUNC_1 (int ,char const*) ;
 void const* FUNC_2 (int *,size_t*) ;

const void *
FUNC_3(const nvlist_t *VAR_1, const char *VAR_2, size_t *VAR_3)
{
 nvpair_t *VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_0, VAR_2);
 if (VAR_4 == ((void*)0))
  FUNC_1(VAR_0, VAR_2);

 return (FUNC_2(VAR_4, VAR_3));
}

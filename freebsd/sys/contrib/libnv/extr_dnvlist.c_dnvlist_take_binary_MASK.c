
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;


 scalar_t__ FUNC_0 (int *,char const*) ;
 void* FUNC_1 (int *,char const*,size_t*) ;

void *
FUNC_2(nvlist_t *VAR_0, const char *VAR_1, size_t *VAR_2,
    void *VAR_3, size_t VAR_4)
{
 void *VAR_5;

 if (FUNC_0(VAR_0, VAR_1))
  VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_2);
 else {
  if (VAR_2 != ((void*)0))
   *VAR_2 = VAR_4;
  VAR_5 = VAR_3;
 }
 return (VAR_5);
}

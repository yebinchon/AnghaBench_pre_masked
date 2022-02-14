
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvpair_t ;
typedef int nvlist_t ;


 int * FUNC_0 (int *,int *) ;

size_t
FUNC_1(nvlist_t *VAR_0)
{
 size_t VAR_1 = 0;
 nvpair_t *VAR_2;

 for (VAR_2 = FUNC_0(VAR_0, 0); VAR_2 != ((void*)0);
     VAR_2 = FUNC_0(VAR_0, VAR_2))
  VAR_1++;
 return (VAR_1);
}

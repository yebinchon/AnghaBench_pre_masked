
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 int FUNC_0 (int **,int) ;
 int ** FUNC_1 (int,int ) ;

__attribute__((used)) static void
FUNC_2(nvlist_t ***VAR_1, uint64_t *VAR_2, uint64_t VAR_3)
{
 nvlist_t **VAR_4;
 uint64_t VAR_5;

 if (VAR_3 < *VAR_2)
  return;
 VAR_4 = FUNC_1((VAR_3 + 1) * sizeof(nvlist_t *),
     VAR_0);
 for (VAR_5 = 0; VAR_5 < *VAR_2; VAR_5++)
  VAR_4[VAR_5] = (*VAR_1)[VAR_5];
 if (*VAR_1 != ((void*)0))
  FUNC_0(*VAR_1, *VAR_2 * sizeof(void *));
 *VAR_1 = VAR_4;
 *VAR_2 = VAR_3 + 1;
}

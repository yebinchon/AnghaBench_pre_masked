
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dt_ahashent_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int **,int **) ;
 int FUNC_2 (int **,int **) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int
FUNC_3(const void *VAR_1, const void *VAR_2)
{
 dt_ahashent_t **VAR_3 = *((dt_ahashent_t ***)VAR_1);
 dt_ahashent_t **VAR_4 = *((dt_ahashent_t ***)VAR_2);
 int VAR_5, VAR_6;

 if (VAR_0) {







  for (VAR_5 = 0; VAR_3[VAR_5 + 1] != ((void*)0); VAR_5++)
   continue;

  FUNC_0(VAR_5 != 0);
  FUNC_0(VAR_4[VAR_5 + 1] == ((void*)0));

  if ((VAR_6 = FUNC_1(&VAR_3[VAR_5], &VAR_4[VAR_5])) != 0)
   return (VAR_6);
 }

 for (VAR_5 = 0; ; VAR_5++) {
  if (VAR_3[VAR_5 + 1] == ((void*)0)) {
   if (VAR_0)
    return (0);

   FUNC_0(VAR_5 != 0);
   FUNC_0(VAR_4[VAR_5 + 1] == ((void*)0));
   return (FUNC_1(&VAR_3[VAR_5], &VAR_4[VAR_5]));
  } else {
   if ((VAR_6 = FUNC_2(&VAR_3[VAR_5], &VAR_4[VAR_5])) != 0)
    return (VAR_6);
  }
 }
}

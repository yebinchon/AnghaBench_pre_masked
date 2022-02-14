
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *,int ,int **) ;
 scalar_t__ FUNC_1 (int *,int ,int ***,size_t*) ;
 int FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static void
FUNC_3(nvlist_t *VAR_5)
{
 nvlist_t **VAR_6;
 nvlist_t *VAR_7 = ((void*)0);
 uint_t VAR_8, VAR_9;

 if (FUNC_1(VAR_5, VAR_1, &VAR_6,
     &VAR_9) == 0) {
  for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++)
   FUNC_3(VAR_6[VAR_8]);
 }

 if (FUNC_0(VAR_5, VAR_4, &VAR_7) == 0)
  FUNC_3(VAR_7);

 FUNC_2(VAR_5, VAR_3, VAR_0);
 FUNC_2(VAR_5, VAR_2, VAR_0);
}

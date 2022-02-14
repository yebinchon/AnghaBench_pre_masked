
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ zfs_prop_t ;
typedef int nvpair_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

 scalar_t__ FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int **,int ,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *,int *) ;
 int * FUNC_6 (int *,int *) ;
 scalar_t__ FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int FUNC_10 (scalar_t__ const) ;

__attribute__((used)) static nvlist_t *
FUNC_11(nvlist_t *VAR_2)
{
 nvlist_t *VAR_3;
 nvpair_t *VAR_4, *VAR_5;
 static const zfs_prop_t VAR_6[] = { 128, 0 };
 int VAR_7;

 FUNC_0(FUNC_2(&VAR_3, VAR_1, VAR_0) == 0);

 for (VAR_4 = FUNC_5(VAR_2, ((void*)0)); VAR_4 != ((void*)0);
     VAR_4 = FUNC_5(VAR_2, VAR_4)) {




  for (VAR_7 = 0; VAR_6[VAR_7] != 0; VAR_7++) {
   if (FUNC_9(FUNC_10(VAR_6[VAR_7]),
       FUNC_8(VAR_4)) == 0) {
    break;
   }
  }
  if (VAR_6[VAR_7] != 0) {
   VAR_5 = FUNC_6(VAR_2, VAR_4);
   FUNC_0(FUNC_1(VAR_3, VAR_4) == 0);
   FUNC_0(FUNC_7(VAR_2, VAR_4) == 0);
   VAR_4 = VAR_5;
  }
 }

 if (FUNC_3(VAR_3)) {
  FUNC_4(VAR_3);
  VAR_3 = ((void*)0);
 }
 return (VAR_3);
}

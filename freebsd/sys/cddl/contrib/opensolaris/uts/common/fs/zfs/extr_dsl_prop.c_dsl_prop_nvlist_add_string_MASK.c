
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zfs_prop_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *,char const*,int *) ;
 scalar_t__ FUNC_2 (int *,int ,char const*) ;
 scalar_t__ FUNC_3 (int **,int ,int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,char const*,int **) ;
 char* FUNC_6 (int ) ;

void
FUNC_7(nvlist_t *VAR_3, zfs_prop_t VAR_4, const char *VAR_5)
{
 nvlist_t *VAR_6;
 const char *VAR_7 = FUNC_6(VAR_4);

 if (FUNC_5(VAR_3, VAR_7, &VAR_6) == 0) {
  FUNC_0(FUNC_2(VAR_6, VAR_2, VAR_5) == 0);
  return;
 }

 FUNC_0(FUNC_3(&VAR_6, VAR_1, VAR_0) == 0);
 FUNC_0(FUNC_2(VAR_6, VAR_2, VAR_5) == 0);
 FUNC_0(FUNC_1(VAR_3, VAR_7, VAR_6) == 0);
 FUNC_4(VAR_6);
}

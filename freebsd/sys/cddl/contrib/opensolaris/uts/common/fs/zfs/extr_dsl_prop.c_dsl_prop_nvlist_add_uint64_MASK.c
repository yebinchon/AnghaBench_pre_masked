
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zfs_prop_t ;
typedef scalar_t__ uint64_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,int,int,scalar_t__*) ;
 scalar_t__ FUNC_2 (int *,char const*,int *) ;
 scalar_t__ FUNC_3 (int *,int ,char*) ;
 scalar_t__ FUNC_4 (int *,int ,scalar_t__) ;
 scalar_t__ FUNC_5 (int **,int ,int ) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,char const*,int **) ;
 char* FUNC_8 (int ) ;

void
FUNC_9(nvlist_t *VAR_4, zfs_prop_t VAR_5, uint64_t VAR_6)
{
 nvlist_t *VAR_7;
 const char *VAR_8 = FUNC_8(VAR_5);
 uint64_t VAR_9;

 if (FUNC_7(VAR_4, VAR_8, &VAR_7) == 0) {
  FUNC_0(FUNC_4(VAR_7, VAR_3, VAR_6) == 0);
  return;
 }

 FUNC_0(FUNC_5(&VAR_7, VAR_1, VAR_0) == 0);
 FUNC_0(FUNC_4(VAR_7, VAR_3, VAR_6) == 0);

 if (FUNC_1(VAR_5, 8, 1, &VAR_9) == 0 &&
     VAR_6 == VAR_9) {
  FUNC_0(FUNC_3(VAR_7, VAR_2, "") == 0);
 }
 FUNC_0(FUNC_2(VAR_4, VAR_8, VAR_7) == 0);
 FUNC_6(VAR_7);
}

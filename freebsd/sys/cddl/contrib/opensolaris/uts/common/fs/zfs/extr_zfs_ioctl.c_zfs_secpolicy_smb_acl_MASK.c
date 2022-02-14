
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zfs_cmd_t ;
typedef int nvlist_t ;
typedef int cred_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int *) ;

int
FUNC_4(zfs_cmd_t *VAR_2, nvlist_t *VAR_3, cred_t *VAR_4)
{
 if (!FUNC_0(VAR_1))
  return (FUNC_1(VAR_0));

 if (FUNC_2(VAR_4) == 0) {
  return (0);
 } else {
  return (FUNC_3(VAR_2, VAR_3, VAR_4));
 }
}

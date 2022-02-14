
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zfs_prop_t ;
typedef int uint64_t ;
typedef int objset_t ;
typedef int nvlist_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int ,int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(objset_t *VAR_0, nvlist_t *VAR_1, zfs_prop_t VAR_2)
{
 uint64_t VAR_3;
 int VAR_4;





 if ((VAR_4 = FUNC_2(VAR_0, VAR_2, &VAR_3)) != 0)
  return (VAR_4);
 FUNC_0(FUNC_1(VAR_1, FUNC_3(VAR_2), VAR_3) == 0);
 return (0);
}

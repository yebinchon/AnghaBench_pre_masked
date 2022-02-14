
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zfs_ioc_poolcheck_t ;
typedef scalar_t__ zfs_ioc_namecheck_t ;
typedef int spa_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (char const*,int **,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int
FUNC_6(const char *VAR_9, zfs_ioc_namecheck_t VAR_10,
    zfs_ioc_poolcheck_t VAR_11)
{
 spa_t *VAR_12;
 int VAR_13;

 FUNC_0(VAR_10 == VAR_8 || VAR_10 == VAR_0 ||
     VAR_10 == VAR_2);

 if (VAR_11 & VAR_5)
  return (0);

 VAR_13 = FUNC_3(VAR_9, &VAR_12, VAR_4);
 if (VAR_13 == 0) {
  if ((VAR_11 & VAR_7) && FUNC_4(VAR_12))
   VAR_13 = FUNC_1(VAR_1);
  else if ((VAR_11 & VAR_6) && !FUNC_5(VAR_12))
   VAR_13 = FUNC_1(VAR_3);
  FUNC_2(VAR_12, VAR_4);
 }
 return (VAR_13);
}

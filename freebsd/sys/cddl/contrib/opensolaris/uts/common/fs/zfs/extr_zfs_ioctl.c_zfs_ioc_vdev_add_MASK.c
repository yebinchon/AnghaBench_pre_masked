
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int zc_iflags; int zc_nvlist_conf_size; int zc_nvlist_conf; int zc_name; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef scalar_t__ uint_t ;
typedef int spa_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ,int **) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ***,scalar_t__*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int ,int **,int ) ;
 int FUNC_7 (int *,int *) ;

__attribute__((used)) static int
FUNC_8(zfs_cmd_t *VAR_4)
{
 spa_t *VAR_5;
 int VAR_6;
 nvlist_t *VAR_7, **VAR_8, **VAR_9;
 uint_t VAR_10 = 0, VAR_11 = 0;

 VAR_6 = FUNC_6(VAR_4->zc_name, &VAR_5, VAR_1);
 if (VAR_6 != 0)
  return (VAR_6);

 VAR_6 = FUNC_1(VAR_4->zc_nvlist_conf, VAR_4->zc_nvlist_conf_size,
     VAR_4->zc_iflags, &VAR_7);
 (void) FUNC_3(VAR_7, VAR_2,
     &VAR_8, &VAR_10);

 (void) FUNC_3(VAR_7, VAR_3,
     &VAR_9, &VAR_11);
 if (VAR_6 == 0) {
  VAR_6 = FUNC_7(VAR_5, VAR_7);
  FUNC_2(VAR_7);
 }
 FUNC_5(VAR_5, VAR_1);
 return (VAR_6);
}

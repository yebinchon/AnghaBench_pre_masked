
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int zc_cookie; int zc_guid; int zc_iflags; int zc_nvlist_conf_size; int zc_nvlist_conf; int zc_name; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef int spa_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int **) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int **,int ) ;
 int FUNC_4 (int *,int ,int *,int) ;

__attribute__((used)) static int
FUNC_5(zfs_cmd_t *VAR_1)
{
 spa_t *VAR_2;
 int VAR_3 = VAR_1->zc_cookie;
 nvlist_t *VAR_4;
 int VAR_5;

 if ((VAR_5 = FUNC_3(VAR_1->zc_name, &VAR_2, VAR_0)) != 0)
  return (VAR_5);

 if ((VAR_5 = FUNC_0(VAR_1->zc_nvlist_conf, VAR_1->zc_nvlist_conf_size,
     VAR_1->zc_iflags, &VAR_4)) == 0) {
  VAR_5 = FUNC_4(VAR_2, VAR_1->zc_guid, VAR_4, VAR_3);
  FUNC_1(VAR_4);
 }

 FUNC_2(VAR_2, VAR_0);
 return (VAR_5);
}

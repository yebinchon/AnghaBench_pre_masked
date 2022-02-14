
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ zc_nvlist_dst; int zc_name; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int **) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,int *) ;

__attribute__((used)) static int
FUNC_5(zfs_cmd_t *VAR_1)
{
 int VAR_2 = 0;
 nvlist_t *VAR_3;






 if (!FUNC_1(VAR_1->zc_name))
  return (FUNC_0(VAR_0));

 if (VAR_1->zc_nvlist_dst != 0 &&
     (VAR_2 = FUNC_2(VAR_1->zc_name, &VAR_3)) == 0) {
  VAR_2 = FUNC_4(VAR_1, VAR_3);
  FUNC_3(VAR_3);
 }

 return (VAR_2);
}

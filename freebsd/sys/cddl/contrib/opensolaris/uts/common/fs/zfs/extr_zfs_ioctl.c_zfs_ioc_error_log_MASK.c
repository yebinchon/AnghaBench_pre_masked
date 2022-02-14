
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t zc_nvlist_dst_size; scalar_t__ zc_nvlist_dst; int zc_name; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef int spa_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,void*,size_t*) ;
 size_t FUNC_2 (int *) ;
 int FUNC_3 (int ,int **,int ) ;

__attribute__((used)) static int
FUNC_4(zfs_cmd_t *VAR_1)
{
 spa_t *VAR_2;
 int VAR_3;
 size_t VAR_4 = (size_t)VAR_1->zc_nvlist_dst_size;

 if ((VAR_3 = FUNC_3(VAR_1->zc_name, &VAR_2, VAR_0)) != 0)
  return (VAR_3);

 VAR_3 = FUNC_1(VAR_2, (void *)(uintptr_t)VAR_1->zc_nvlist_dst,
     &VAR_4);
 if (VAR_3 == 0)
  VAR_1->zc_nvlist_dst_size = VAR_4;
 else
  VAR_1->zc_nvlist_dst_size = FUNC_2(VAR_2);

 FUNC_0(VAR_2, VAR_0);

 return (VAR_3);
}

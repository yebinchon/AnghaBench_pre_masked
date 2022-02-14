
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int zc_iflags; int zc_nvlist_dst_size; int zc_nvlist_dst; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,char*,int **) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int ,int ,int ,int **) ;
 int FUNC_5 (TYPE_1__*,int *) ;

__attribute__((used)) static int
FUNC_6(zfs_cmd_t *VAR_1)
{
 nvlist_t *VAR_2, *VAR_3 = ((void*)0);
 int VAR_4;

 if ((VAR_4 = FUNC_4(VAR_1->zc_nvlist_dst,
     VAR_1->zc_nvlist_dst_size, VAR_1->zc_iflags, &VAR_2)) != 0)
  return (VAR_4);
 if (FUNC_2(VAR_2, "used", &VAR_3) == 0) {
  FUNC_0(VAR_2, "allocated", VAR_3);
  FUNC_3(VAR_2, "used", VAR_0);
 }

 if (FUNC_2(VAR_2, "available", &VAR_3) == 0) {
  FUNC_0(VAR_2, "free", VAR_3);
  FUNC_3(VAR_2, "available", VAR_0);
 }


 VAR_4 = FUNC_5(VAR_1, VAR_2);

 FUNC_1(VAR_2);

 return (VAR_4);
}

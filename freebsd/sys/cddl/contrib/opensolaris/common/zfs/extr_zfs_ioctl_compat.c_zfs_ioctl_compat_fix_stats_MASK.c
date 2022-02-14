
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int zc_iflags; int zc_nvlist_dst_size; int zc_nvlist_dst; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef int nvpair_t ;
typedef int nvlist_t ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *,int **) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int ,int **) ;
 int FUNC_5 (TYPE_1__*,int *) ;

__attribute__((used)) static int
FUNC_6(zfs_cmd_t *VAR_0, const int VAR_1)
{
 nvlist_t *VAR_2, *VAR_3 = ((void*)0);
 nvpair_t *VAR_4;
 int VAR_5;

 if ((VAR_5 = FUNC_4(VAR_0->zc_nvlist_dst,
     VAR_0->zc_nvlist_dst_size, VAR_0->zc_iflags, &VAR_2)) != 0)
  return (VAR_5);

 if (VAR_1 == 5) {
  VAR_4 = ((void*)0);
  while ((VAR_4 = FUNC_1(VAR_2, VAR_4)) != ((void*)0)) {
   if (FUNC_2(VAR_4, &VAR_3) == 0)
    FUNC_3(VAR_3);
  }
  VAR_4 = ((void*)0);
 } else
  FUNC_3(VAR_2);

 VAR_5 = FUNC_5(VAR_0, VAR_2);

 FUNC_0(VAR_2);

 return (VAR_5);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int dds_inconsistent; } ;
struct TYPE_5__ {scalar_t__ zc_nvlist_dst; TYPE_4__ zc_objset_stats; int zc_name; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef int objset_t ;
typedef int nvlist_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int *,TYPE_4__*) ;
 int FUNC_3 (int ,int ,int **) ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int ) ;
 scalar_t__ FUNC_7 (int **,int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_1__*,int *) ;

__attribute__((used)) static int
FUNC_10(zfs_cmd_t *VAR_9)
{
 objset_t *VAR_10;
 int VAR_11;


 if ((VAR_11 = FUNC_3(VAR_9->zc_name, VAR_2, &VAR_10)))
  return (VAR_11);

 FUNC_2(VAR_10, &VAR_9->zc_objset_stats);






 if (VAR_9->zc_nvlist_dst != 0 &&
     !VAR_9->zc_objset_stats.dds_inconsistent &&
     FUNC_5(VAR_10) == VAR_0) {
  nvlist_t *VAR_12;

  FUNC_1(FUNC_7(&VAR_12, VAR_4, VAR_3) == 0);
  if ((VAR_11 = FUNC_6(VAR_10, VAR_12, VAR_8)) == 0 &&
      (VAR_11 = FUNC_6(VAR_10, VAR_12, VAR_6)) == 0 &&
      (VAR_11 = FUNC_6(VAR_10, VAR_12, VAR_7)) == 0 &&
      (VAR_11 = FUNC_6(VAR_10, VAR_12, VAR_5)) == 0)
   VAR_11 = FUNC_9(VAR_9, VAR_12);
  FUNC_8(VAR_12);
 } else {
  VAR_11 = FUNC_0(VAR_1);
 }
 FUNC_4(VAR_10, VAR_2);
 return (VAR_11);
}

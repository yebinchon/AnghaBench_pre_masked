
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uintmax_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_13__ {int spa_mos; } ;
typedef TYPE_1__ spa_t ;
struct TYPE_14__ {scalar_t__ dd_child_dir_zapobj; } ;
typedef TYPE_2__ dsl_dir_phys_t ;
struct TYPE_15__ {scalar_t__ ds_dir_obj; } ;
typedef TYPE_3__ dsl_dataset_phys_t ;
struct TYPE_16__ {int dn_datablkszsec; int dn_bonus; } ;
typedef TYPE_4__ dnode_phys_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__ const*,TYPE_4__*,int ,scalar_t__,int) ;
 int FUNC_1 (TYPE_1__ const*,TYPE_4__*,int (*) (char const*,scalar_t__)) ;
 int FUNC_2 (TYPE_4__*,int (*) (char const*,scalar_t__)) ;
 int FUNC_3 (TYPE_1__ const*,int *,scalar_t__,TYPE_4__*) ;
 int FUNC_4 (char*,int ) ;
 scalar_t__ VAR_1 ;

int
FUNC_5(const spa_t *VAR_2, uint64_t VAR_3, int (*VAR_4)(const char *, uint64_t))
{
 uint64_t VAR_5, VAR_6, VAR_7;
 dnode_phys_t VAR_8, VAR_9, VAR_10;
 dsl_dataset_phys_t *VAR_11;
 dsl_dir_phys_t *VAR_12;
 int VAR_13;

 VAR_13 = FUNC_3(VAR_2, &VAR_2->spa_mos, VAR_3, &VAR_10);
 if (VAR_13 != 0) {
  FUNC_4("ZFS: can't find dataset %ju\n", (uintmax_t)VAR_3);
  return (VAR_13);
 }
 VAR_11 = (dsl_dataset_phys_t *) &VAR_10.dn_bonus;
 VAR_5 = VAR_11->ds_dir_obj;

 VAR_13 = FUNC_3(VAR_2, &VAR_2->spa_mos, VAR_5, &VAR_9);
 if (VAR_13 != 0) {
  FUNC_4("ZFS: can't find dirobj %ju\n", (uintmax_t)VAR_5);
  return (VAR_13);
 }
 VAR_12 = (dsl_dir_phys_t *)&VAR_9.dn_bonus;

 VAR_6 = VAR_12->dd_child_dir_zapobj;
 VAR_13 = FUNC_3(VAR_2, &VAR_2->spa_mos, VAR_6, &VAR_8);
 if (VAR_13 != 0) {
  FUNC_4("ZFS: can't find child zap %ju\n", (uintmax_t)VAR_5);
  return (VAR_13);
 }

 VAR_13 = FUNC_0(VAR_2, &VAR_8, 0, VAR_1, VAR_8.dn_datablkszsec * 512);
 if (VAR_13 != 0)
  return (VAR_13);

 VAR_7 = *(uint64_t *) VAR_1;
 if (VAR_7 == VAR_0)
  return FUNC_2(&VAR_8, VAR_4);
 else
  return FUNC_1(VAR_2, &VAR_8, VAR_4);
}

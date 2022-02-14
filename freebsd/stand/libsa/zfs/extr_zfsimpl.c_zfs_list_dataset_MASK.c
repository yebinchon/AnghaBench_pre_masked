
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uintmax_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_10__ {int spa_mos; } ;
typedef TYPE_1__ spa_t ;
struct TYPE_11__ {scalar_t__ dd_child_dir_zapobj; } ;
typedef TYPE_2__ dsl_dir_phys_t ;
struct TYPE_12__ {scalar_t__ ds_dir_obj; } ;
typedef TYPE_3__ dsl_dataset_phys_t ;
struct TYPE_13__ {int dn_bonus; } ;
typedef TYPE_4__ dnode_phys_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__ const*,int *,scalar_t__,TYPE_4__*) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__ const*,TYPE_4__*) ;

__attribute__((used)) static int
FUNC_3(const spa_t *VAR_1, uint64_t VAR_2 )
{
 uint64_t VAR_3, VAR_4;
 dnode_phys_t VAR_5, VAR_6, VAR_7;
 dsl_dataset_phys_t *VAR_8;
 dsl_dir_phys_t *VAR_9;

 if (FUNC_0(VAR_1, &VAR_1->spa_mos, VAR_2, &VAR_7)) {
  FUNC_1("ZFS: can't find dataset %ju\n", (uintmax_t)VAR_2);
  return (VAR_0);
 }
 VAR_8 = (dsl_dataset_phys_t *) &VAR_7.dn_bonus;
 VAR_3 = VAR_8->ds_dir_obj;

 if (FUNC_0(VAR_1, &VAR_1->spa_mos, VAR_3, &VAR_6)) {
  FUNC_1("ZFS: can't find dirobj %ju\n", (uintmax_t)VAR_3);
  return (VAR_0);
 }
 VAR_9 = (dsl_dir_phys_t *)&VAR_6.dn_bonus;

 VAR_4 = VAR_9->dd_child_dir_zapobj;
 if (FUNC_0(VAR_1, &VAR_1->spa_mos, VAR_4, &VAR_5) != 0) {
  FUNC_1("ZFS: can't find child zap %ju\n", (uintmax_t)VAR_3);
  return (VAR_0);
 }

 return (FUNC_2(VAR_1, &VAR_5) != 0);
}

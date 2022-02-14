
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uintmax_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_8__ {int spa_mos; } ;
typedef TYPE_1__ spa_t ;
typedef int objset_phys_t ;
struct TYPE_9__ {int ds_bp; } ;
typedef TYPE_2__ dsl_dataset_phys_t ;
struct TYPE_10__ {int dn_bonus; } ;
typedef TYPE_3__ dnode_phys_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__ const*,int *,scalar_t__,TYPE_3__*) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__ const*,int *,int *) ;

__attribute__((used)) static int
FUNC_3(const spa_t *VAR_1, uint64_t VAR_2, objset_phys_t *VAR_3)
{
 dnode_phys_t VAR_4;
 dsl_dataset_phys_t *VAR_5;

 if (FUNC_0(VAR_1, &VAR_1->spa_mos, VAR_2, &VAR_4)) {
  FUNC_1("ZFS: can't find dataset %ju\n", (uintmax_t)VAR_2);
  return (VAR_0);
 }

 VAR_5 = (dsl_dataset_phys_t *) &VAR_4.dn_bonus;
 if (FUNC_2(VAR_1, &VAR_5->ds_bp, VAR_3)) {
  FUNC_1("ZFS: can't read object set for dataset %ju\n",
      (uintmax_t)VAR_2);
  return (VAR_0);
 }

 return (0);
}

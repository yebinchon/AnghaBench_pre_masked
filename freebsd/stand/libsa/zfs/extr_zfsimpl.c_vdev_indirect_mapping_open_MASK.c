
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int vim_havecounts; scalar_t__ dn_bonuslen; struct TYPE_6__* vim_dn; int * vim_entries; int vim_object; int * vim_objset; int * vim_phys; int * vim_spa; } ;
typedef TYPE_1__ vdev_indirect_mapping_t ;
typedef int vdev_indirect_mapping_phys_t ;
typedef int uint64_t ;
typedef int spa_t ;
typedef int objset_phys_t ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 void* FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int * FUNC_3 (int) ;
 int FUNC_4 (int *,int *,int ,TYPE_1__*) ;

vdev_indirect_mapping_t *
FUNC_5(spa_t *VAR_1, objset_phys_t *VAR_2,
    uint64_t VAR_3)
{
 vdev_indirect_mapping_t *VAR_4;
 vdev_indirect_mapping_phys_t *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_1(1, sizeof (*VAR_4));
 if (VAR_4 == ((void*)0))
  return (((void*)0));

 VAR_4->vim_dn = FUNC_1(1, sizeof (*VAR_4->vim_dn));
 if (VAR_4->vim_dn == ((void*)0)) {
  FUNC_2(VAR_4);
  return (((void*)0));
 }

 VAR_6 = FUNC_4(VAR_1, VAR_2, VAR_3, VAR_4->vim_dn);
 if (VAR_6 != 0) {
  FUNC_2(VAR_4->vim_dn);
  FUNC_2(VAR_4);
  return (((void*)0));
 }

 VAR_4->vim_spa = VAR_1;
 VAR_4->vim_phys = FUNC_3(sizeof (*VAR_4->vim_phys));
 if (VAR_4->vim_phys == ((void*)0)) {
  FUNC_2(VAR_4->vim_dn);
  FUNC_2(VAR_4);
  return (((void*)0));
 }

 VAR_5 = (vdev_indirect_mapping_phys_t *)FUNC_0(VAR_4->vim_dn);
 *VAR_4->vim_phys = *VAR_5;

 VAR_4->vim_objset = VAR_2;
 VAR_4->vim_object = VAR_3;
 VAR_4->vim_entries = ((void*)0);

 VAR_4->vim_havecounts =
     (VAR_4->vim_dn->dn_bonuslen > VAR_0);
 return (VAR_4);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vdev_indirect_birth_phys_t ;
typedef int uint64_t ;
typedef int objset_t ;
typedef int dmu_tx_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int ,int ,int,int *) ;
 int FUNC_2 (int *) ;

uint64_t
FUNC_3(objset_t *VAR_2, dmu_tx_t *VAR_3)
{
 FUNC_0(FUNC_2(VAR_3));

 return (FUNC_1(VAR_2,
     VAR_0, VAR_1,
     VAR_0, sizeof (vdev_indirect_birth_phys_t),
     VAR_3));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_size_t ;
typedef scalar_t__ vm_ooffset_t ;
typedef int * vm_object_t ;
struct nvdimm_spa_dev {scalar_t__ spa_len; int * spa_obj; } ;
struct cdev {struct nvdimm_spa_dev* si_drv1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int
FUNC_1(struct cdev *VAR_2, vm_ooffset_t *VAR_3, vm_size_t VAR_4,
    vm_object_t *VAR_5, int VAR_6)
{
 struct nvdimm_spa_dev *VAR_7;

 VAR_7 = VAR_2->si_drv1;
 if (VAR_7->spa_obj == ((void*)0))
  return (VAR_1);
 if (*VAR_3 >= VAR_7->spa_len || *VAR_3 + VAR_4 < *VAR_3 ||
     *VAR_3 + VAR_4 > VAR_7->spa_len)
  return (VAR_0);
 FUNC_0(VAR_7->spa_obj);
 *VAR_5 = VAR_7->spa_obj;
 return (0);
}

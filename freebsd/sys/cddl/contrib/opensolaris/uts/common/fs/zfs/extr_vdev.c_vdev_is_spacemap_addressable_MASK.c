
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int vdev_ashift; unsigned long long vdev_asize; int vdev_spa; } ;
typedef TYPE_1__ vdev_t ;
typedef int uint64_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;

boolean_t
FUNC_1(vdev_t *VAR_3)
{
 if (FUNC_0(VAR_3->vdev_spa, VAR_2))
  return (VAR_0);
 uint64_t VAR_4 = VAR_3->vdev_ashift + VAR_1;

 if (VAR_4 >= 63)
  return (VAR_0);

 return (VAR_3->vdev_asize < (1ULL << VAR_4));
}

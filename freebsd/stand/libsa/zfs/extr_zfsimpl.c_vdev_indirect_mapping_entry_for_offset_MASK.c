
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* vim_phys; } ;
typedef TYPE_2__ vdev_indirect_mapping_t ;
typedef int vdev_indirect_mapping_entry_phys_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_5__ {scalar_t__ vimp_num_entries; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__*,int *) ;
 int * FUNC_2 (TYPE_2__*,scalar_t__) ;

__attribute__((used)) static vdev_indirect_mapping_entry_phys_t *
FUNC_3(vdev_indirect_mapping_t *VAR_0,
    uint64_t VAR_1)
{
 FUNC_0(VAR_0->vim_phys->vimp_num_entries > 0);

 vdev_indirect_mapping_entry_phys_t *VAR_2;

 uint64_t VAR_3 = VAR_0->vim_phys->vimp_num_entries - 1;
 uint64_t VAR_4 = 0;





 uint64_t VAR_5;
 int VAR_6;

 while (VAR_3 >= VAR_4) {
  VAR_5 = VAR_4 + ((VAR_3 - VAR_4) >> 1);

  VAR_2 = FUNC_2(VAR_0, VAR_5);
  if (VAR_2 == ((void*)0))
   break;
  VAR_6 = FUNC_1(&VAR_1, VAR_2);

  if (VAR_6 == 0) {
   break;
  } else if (VAR_6 < 0) {
   VAR_3 = VAR_5 - 1;
  } else {
   VAR_4 = VAR_5 + 1;
  }
 }
 return (VAR_2);
}

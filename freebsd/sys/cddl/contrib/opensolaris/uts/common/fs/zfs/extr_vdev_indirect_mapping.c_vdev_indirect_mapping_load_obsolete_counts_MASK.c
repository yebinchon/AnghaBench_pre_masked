
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* vim_phys; int vim_objset; scalar_t__ vim_havecounts; } ;
typedef TYPE_2__ vdev_indirect_mapping_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_5__ {int vimp_num_entries; int vimp_counts_object; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ,int ,int ,int,int *,int ) ;
 int * FUNC_4 (int,int ) ;
 int FUNC_5 (TYPE_2__*) ;

uint32_t *
FUNC_6(vdev_indirect_mapping_t *VAR_2)
{
 FUNC_0(FUNC_5(VAR_2));

 uint64_t VAR_3 =
     VAR_2->vim_phys->vimp_num_entries * sizeof (uint32_t);
 uint32_t *VAR_4 = FUNC_4(VAR_3, VAR_1);
 if (VAR_2->vim_havecounts) {
  FUNC_1(FUNC_3(VAR_2->vim_objset,
      VAR_2->vim_phys->vimp_counts_object,
      0, VAR_3,
      VAR_4, VAR_0));
 } else {
  FUNC_2(VAR_4, VAR_3);
 }
 return (VAR_4);
}

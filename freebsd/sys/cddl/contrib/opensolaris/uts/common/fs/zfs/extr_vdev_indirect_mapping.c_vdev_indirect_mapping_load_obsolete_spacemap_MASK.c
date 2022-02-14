
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vdev_indirect_mapping_t ;
typedef int uint32_t ;
typedef int space_map_t ;
struct TYPE_3__ {int * losma_vim; int * losma_counts; } ;
typedef TYPE_1__ load_obsolete_space_map_arg_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,TYPE_1__*) ;

void
FUNC_2(vdev_indirect_mapping_t *VAR_1,
    uint32_t *VAR_2, space_map_t *VAR_3)
{
 load_obsolete_space_map_arg_t VAR_4;
 VAR_4.losma_counts = VAR_2;
 VAR_4.losma_vim = VAR_1;
 FUNC_0(FUNC_1(VAR_3,
     VAR_0, &VAR_4));
}

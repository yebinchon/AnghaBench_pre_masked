
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int vic_prev_indirect_vdev; } ;
struct TYPE_7__ {TYPE_2__ vdev_indirect_config; int * v_read; int v_state; int v_guid; int v_children; } ;
typedef TYPE_1__ vdev_t ;
typedef int vdev_read_t ;
typedef TYPE_2__ vdev_indirect_config_t ;
typedef int uint64_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_1__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static vdev_t *
FUNC_4(uint64_t VAR_4, vdev_read_t *VAR_5)
{
 vdev_t *VAR_6;
 vdev_indirect_config_t *VAR_7;

 VAR_6 = FUNC_2(sizeof(vdev_t));
 FUNC_3(VAR_6, 0, sizeof(vdev_t));
 FUNC_0(&VAR_6->v_children);
 VAR_6->v_guid = VAR_4;
 VAR_6->v_state = VAR_1;
 VAR_6->v_read = VAR_5;

 VAR_7 = &VAR_6->vdev_indirect_config;
 VAR_7->vic_prev_indirect_vdev = VAR_0;
 FUNC_1(&VAR_3, VAR_6, VAR_2);

 return (VAR_6);
}

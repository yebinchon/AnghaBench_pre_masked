
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int sem; int context; int evt; int node; } ;
typedef TYPE_1__ ocs_xport_post_node_event_t ;
typedef int ocs_hw_t ;
typedef int int32_t ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int32_t
FUNC_2(ocs_hw_t *VAR_0, int32_t VAR_1, uint8_t *VAR_2, void *VAR_3)
{
 ocs_xport_post_node_event_t *VAR_4 = VAR_3;

 if (VAR_4 != ((void*)0)) {
  FUNC_0(VAR_4->node, VAR_4->evt, VAR_4->context);
  FUNC_1(&VAR_4->sem);
 }

        return 0;
}

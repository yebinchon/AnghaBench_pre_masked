
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct osm_remote_node {scalar_t__ port; scalar_t__ forwarded_to; int * node; } ;
struct osm_remote_guids_count {unsigned int count; struct osm_remote_node* guids; } ;
struct TYPE_6__ {int p_node; } ;
typedef TYPE_1__ osm_switch_t ;
struct TYPE_7__ {TYPE_3__* p_remote_physp; } ;
typedef TYPE_2__ osm_physp_t ;
typedef int osm_node_t ;
typedef int boolean_t ;
struct TYPE_8__ {int * p_node; } ;


 TYPE_2__* FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static struct osm_remote_node *FUNC_2(osm_switch_t * VAR_0,
             uint8_t VAR_1,
             boolean_t VAR_2, struct
             osm_remote_guids_count
             *VAR_3)
{
 unsigned VAR_4;
 osm_physp_t *VAR_5 = FUNC_0(VAR_0->p_node, VAR_1);
 osm_node_t *VAR_6 = VAR_5->p_remote_physp->p_node;
 uint8_t VAR_7 = FUNC_1(VAR_5->p_remote_physp);

 for (VAR_4 = 0; VAR_4 < VAR_3->count; VAR_4++)
  if (VAR_3->guids[VAR_4].node == VAR_6)
   if (!VAR_2 || (VAR_3->guids[VAR_4].port == VAR_7))
    return &VAR_3->guids[VAR_4];

 VAR_3->guids[VAR_4].node = VAR_6;
 VAR_3->guids[VAR_4].forwarded_to = 0;
 VAR_3->guids[VAR_4].port = VAR_7;
 VAR_3->count++;
 return &VAR_3->guids[VAR_4];
}

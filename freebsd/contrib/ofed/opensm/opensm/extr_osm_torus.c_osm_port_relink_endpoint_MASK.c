
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct t_switch {struct endpoint** port; TYPE_2__* osm_switch; } ;
struct endpoint {scalar_t__ n_id; TYPE_3__* osm_port; TYPE_1__* link; } ;
struct TYPE_11__ {struct t_switch* priv; } ;
typedef TYPE_2__ osm_switch_t ;
struct TYPE_12__ {struct endpoint* priv; TYPE_4__* p_node; int * p_physp; } ;
typedef TYPE_3__ osm_port_t ;
typedef int osm_physp_t ;
struct TYPE_13__ {TYPE_2__* sw; } ;
typedef TYPE_4__ osm_node_t ;
typedef scalar_t__ guid_t ;
struct TYPE_10__ {struct endpoint* end; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_4__*) ;
 TYPE_4__* FUNC_1 (TYPE_4__*,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static
struct endpoint *FUNC_4(const osm_port_t *VAR_1)
{
 guid_t VAR_2;
 uint8_t VAR_3, VAR_4;
 struct t_switch *VAR_5;
 struct endpoint *VAR_6 = ((void*)0);
 osm_switch_t *VAR_7;
 osm_physp_t *VAR_8;
 osm_node_t *VAR_9, *VAR_10;






 VAR_8 = VAR_1->p_physp;
 VAR_9 = VAR_1->p_node;
 VAR_3 = FUNC_3(VAR_8);
 VAR_2 = FUNC_0(VAR_9);



 if (VAR_3 == 0 &&
     FUNC_2(VAR_9) == VAR_0) {

  VAR_7 = VAR_9->sw;
  if (VAR_7 && VAR_7->priv) {
   VAR_5 = VAR_7->priv;
   if (VAR_5->osm_switch == VAR_7 &&
       VAR_5->port[0]->n_id == VAR_2) {

    VAR_6 = VAR_5->port[0];
    goto relink_priv;
   }
  }
 }




 VAR_10 = FUNC_1(VAR_9, VAR_3, &VAR_4);
 if (!VAR_10)
  goto out;

 VAR_7 = VAR_10->sw;
 if (!VAR_7)
  goto out;

 VAR_5 = VAR_7->priv;
 if (!(VAR_5 && VAR_5->osm_switch == VAR_7))
  goto out;

 VAR_6 = VAR_5->port[VAR_4];
 if (!(VAR_6 && VAR_6->link))
  goto out;

 if (VAR_6->link->end[0].n_id == VAR_2) {
  VAR_6 = &VAR_6->link->end[0];
  goto relink_priv;
 }
 if (VAR_6->link->end[1].n_id == VAR_2) {
  VAR_6 = &VAR_6->link->end[1];
  goto relink_priv;
 }
 VAR_6 = ((void*)0);
 goto out;

relink_priv:
 ((osm_port_t *)VAR_1)->priv = VAR_6;
 VAR_6->osm_port = (osm_port_t *)VAR_1;
out:
 return VAR_6;
}

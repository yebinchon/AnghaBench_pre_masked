
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lacp_port {int lp_state; int lp_actor; int lp_partner; } ;
struct TYPE_2__ {int lip_state; } ;
struct lacp_aggregator {TYPE_1__ la_actor; TYPE_1__ la_partner; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *) ;

__attribute__((used)) static void
FUNC_1(struct lacp_aggregator *VAR_1, const struct lacp_port *VAR_2)
{
 FUNC_0(&VAR_1->la_partner, &VAR_2->lp_partner);
 FUNC_0(&VAR_1->la_actor, &VAR_2->lp_actor);

 VAR_1->la_actor.lip_state = VAR_2->lp_state & VAR_0;
}

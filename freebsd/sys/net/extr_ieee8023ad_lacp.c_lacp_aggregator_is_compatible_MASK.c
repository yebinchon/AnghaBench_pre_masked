
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int lip_state; } ;
struct lacp_port {int lp_state; TYPE_2__ lp_actor; TYPE_2__ lp_partner; } ;
struct TYPE_3__ {int lip_state; } ;
struct lacp_aggregator {TYPE_1__ la_actor; TYPE_1__ la_partner; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static int
FUNC_1(const struct lacp_aggregator *VAR_1,
    const struct lacp_port *VAR_2)
{
 if (!(VAR_2->lp_state & VAR_0) ||
     !(VAR_2->lp_partner.lip_state & VAR_0)) {
  return (0);
 }

 if (!(VAR_1->la_actor.lip_state & VAR_0)) {
  return (0);
 }

 if (!FUNC_0(&VAR_1->la_partner, &VAR_2->lp_partner)) {
  return (0);
 }

 if (!FUNC_0(&VAR_1->la_actor, &VAR_2->lp_actor)) {
  return (0);
 }

 return (1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct zonelist {int dummy; } ;
struct zone {int node; } ;
struct TYPE_3__ {int preferred_node; int nodes; } ;
struct mempolicy {int flags; int mode; TYPE_1__ v; } ;
typedef enum zone_type { ____Placeholder_zone_type } zone_type ;
struct TYPE_4__ {struct zonelist* node_zonelists; } ;


 int FUNC_0 () ;
 int VAR_0 ;

 int VAR_1 ;


 TYPE_2__* FUNC_1 (int) ;
 int FUNC_2 (struct zonelist*,int,int *,struct zone**) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct mempolicy*) ;
 int FUNC_5 () ;

unsigned FUNC_6(struct mempolicy *VAR_2)
{
 if (!VAR_2 || VAR_2->flags & VAR_1)
  return FUNC_5();

 switch (VAR_2->mode) {
 case 128:



  return VAR_2->v.preferred_node;

 case 129:
  return FUNC_4(VAR_2);

 case 130: {




  struct zonelist *VAR_3;
  struct zone *VAR_4;
  enum zone_type VAR_5 = FUNC_3(VAR_0);
  VAR_3 = &FUNC_1(FUNC_5())->node_zonelists[0];
  (void)FUNC_2(VAR_3, VAR_5,
       &VAR_2->v.nodes,
       &VAR_4);
  return VAR_4->node;
 }

 default:
  FUNC_0();
 }
}

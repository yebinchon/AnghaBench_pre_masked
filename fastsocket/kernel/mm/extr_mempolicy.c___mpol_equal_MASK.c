
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int preferred_node; int nodes; } ;
struct mempolicy {int mode; int flags; TYPE_1__ v; } ;


 int FUNC_0 () ;

 int VAR_0 ;


 int FUNC_1 (struct mempolicy*,struct mempolicy*) ;
 int FUNC_2 (int ,int ) ;

int FUNC_3(struct mempolicy *VAR_1, struct mempolicy *VAR_2)
{
 if (!VAR_1 || !VAR_2)
  return 0;
 if (VAR_1->mode != VAR_2->mode)
  return 0;
 if (VAR_1->mode != VAR_0 && !FUNC_1(VAR_1, VAR_2))
  return 0;
 switch (VAR_1->mode) {
 case 130:

 case 129:
  return FUNC_2(VAR_1->v.nodes, VAR_2->v.nodes);
 case 128:
  return VAR_1->v.preferred_node == VAR_2->v.preferred_node &&
   VAR_1->flags == VAR_2->flags;
 default:
  FUNC_0();
  return 0;
 }
}

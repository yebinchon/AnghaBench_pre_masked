
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int preferred_node; int nodes; } ;
struct mempolicy {int mode; int flags; TYPE_1__ v; } ;
typedef int nodemask_t ;


 int FUNC_0 () ;

 int VAR_0 ;


 struct mempolicy VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct mempolicy *VAR_2, nodemask_t *VAR_3)
{
 FUNC_2(*VAR_3);
 if (VAR_2 == &VAR_1)
  return;

 switch (VAR_2->mode) {
 case 130:

 case 129:
  *VAR_3 = VAR_2->v.nodes;
  break;
 case 128:
  if (!(VAR_2->flags & VAR_0))
   FUNC_1(VAR_2->v.preferred_node, *VAR_3);

  break;
 default:
  FUNC_0();
 }
}

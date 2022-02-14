
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zonelist {int dummy; } ;
struct TYPE_2__ {int preferred_node; int nodes; } ;
struct mempolicy {int mode; int flags; TYPE_1__ v; } ;
typedef int gfp_t ;


 int FUNC_0 () ;

 int VAR_0 ;


 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 struct zonelist* FUNC_3 (int,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static struct zonelist *FUNC_5(gfp_t VAR_2, struct mempolicy *VAR_3,
 int VAR_4)
{
 switch (VAR_3->mode) {
 case 128:
  if (!(VAR_3->flags & VAR_0))
   VAR_4 = VAR_3->v.preferred_node;
  break;
 case 130:






  if (FUNC_4(VAR_2 & VAR_1) &&
    FUNC_4(!FUNC_2(VAR_4, VAR_3->v.nodes)))
   VAR_4 = FUNC_1(VAR_3->v.nodes);
  break;
 case 129:
  break;
 default:
  FUNC_0();
 }
 return FUNC_3(VAR_4, VAR_2);
}

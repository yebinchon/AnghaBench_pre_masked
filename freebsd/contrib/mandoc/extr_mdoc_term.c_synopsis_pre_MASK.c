
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct termp {int dummy; } ;
struct roff_node {int flags; scalar_t__ tok; TYPE_1__* prev; } ;
struct TYPE_2__ {scalar_t__ tok; } ;
 int VAR_0 ;
 int FUNC_0 (struct termp*) ;
 int FUNC_1 (struct termp*) ;

__attribute__((used)) static void
FUNC_2(struct termp *VAR_1, const struct roff_node *VAR_2)
{




 if (((void*)0) == VAR_2->prev || ! (VAR_0 & VAR_2->flags))
  return;






 if (VAR_2->prev->tok == VAR_2->tok &&
     130 != VAR_2->tok &&
     131 != VAR_2->tok &&
     132 != VAR_2->tok) {
  FUNC_0(VAR_1);
  return;
 }






 switch (VAR_2->prev->tok) {
 case 133:
 case 132:
 case 131:
 case 129:
 case 128:
  FUNC_1(VAR_1);
  break;
 case 130:
  if (132 != VAR_2->tok && 131 != VAR_2->tok) {
   FUNC_1(VAR_1);
   break;
  }

 default:
  FUNC_0(VAR_1);
  break;
 }
}

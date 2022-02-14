
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct roff_node {int flags; scalar_t__ tok; TYPE_1__* prev; } ;
struct TYPE_2__ {scalar_t__ tok; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_0(struct roff_node *VAR_4)
{
 if (VAR_4->prev == ((void*)0) || ! (VAR_4->flags & VAR_2))
  return;

 if (VAR_4->prev->tok == VAR_4->tok &&
     VAR_4->tok != 130 &&
     VAR_4->tok != 131 &&
     VAR_4->tok != 132) {
  VAR_3 |= VAR_0;
  return;
 }

 switch (VAR_4->prev->tok) {
 case 133:
 case 132:
 case 131:
 case 129:
 case 128:
  VAR_3 |= VAR_1;
  break;
 case 130:
  if (VAR_4->tok != 132 && VAR_4->tok != 131) {
   VAR_3 |= VAR_1;
   break;
  }

 default:
  VAR_3 |= VAR_0;
  break;
 }
}

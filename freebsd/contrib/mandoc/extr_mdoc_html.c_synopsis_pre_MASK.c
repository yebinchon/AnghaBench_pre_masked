
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct roff_node {int flags; scalar_t__ tok; TYPE_1__* prev; } ;
struct html {int dummy; } ;
struct TYPE_2__ {scalar_t__ tok; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct html*) ;
 int FUNC_1 (struct html*,int ,char*,...) ;

__attribute__((used)) static void
FUNC_2(struct html *VAR_3, const struct roff_node *VAR_4)
{

 if (((void*)0) == VAR_4->prev || ! (VAR_0 & VAR_4->flags))
  return;

 if (VAR_4->prev->tok == VAR_4->tok &&
     131 != VAR_4->tok &&
     130 != VAR_4->tok &&
     132 != VAR_4->tok) {
  FUNC_1(VAR_3, VAR_1, "");
  return;
 }

 switch (VAR_4->prev->tok) {
 case 133:
 case 132:
 case 131:
 case 129:
 case 128:
  break;
 case 130:
  if (VAR_4->tok != 132 && VAR_4->tok != 131)
   break;

 default:
  FUNC_1(VAR_3, VAR_1, "");
  return;
 }
 FUNC_0(VAR_3);
 FUNC_1(VAR_3, VAR_2, "c", "Pp");
}

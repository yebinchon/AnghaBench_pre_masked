
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* priv_p ;
typedef int node_p ;
typedef TYPE_3__* link_p ;
typedef int hook_p ;
struct TYPE_8__ {scalar_t__ loopCount; } ;
struct TYPE_6__ {int debugLevel; } ;
struct TYPE_7__ {TYPE_1__ conf; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_3__* FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int ,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(hook_p VAR_1, void *VAR_2)
{
 link_p VAR_3 = FUNC_2(VAR_1);
 node_p VAR_4 = FUNC_1(VAR_1);
 priv_p VAR_5 = FUNC_3(VAR_4);
 int *VAR_6 = VAR_2;

 if (VAR_3->loopCount != 0) {
  VAR_3->loopCount--;
  if (VAR_3->loopCount == 0 && VAR_5->conf.debugLevel >= 2) {
   FUNC_4(VAR_0, "ng_bridge: %s:"
       " restoring looped back %s\n",
       FUNC_5(VAR_4), FUNC_0(VAR_1));
  }
 }
 (*VAR_6)++;
 return (1);
}

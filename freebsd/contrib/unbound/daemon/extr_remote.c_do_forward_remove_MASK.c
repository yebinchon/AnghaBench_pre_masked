
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {scalar_t__ anchors; struct iter_forwards* fwds; } ;
struct worker {TYPE_1__ env; } ;
struct iter_forwards {int dummy; } ;
typedef int RES ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ,int *) ;
 int FUNC_1 (struct iter_forwards*,int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,int **,int *,int*,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(RES* VAR_1, struct worker* VAR_2, char* VAR_3)
{
 struct iter_forwards* VAR_4 = VAR_2->env.fwds;
 int VAR_5 = 0;
 uint8_t* VAR_6 = ((void*)0);
 if(!FUNC_3(VAR_1, VAR_3, &VAR_6, ((void*)0), &VAR_5, ((void*)0)))
  return;
 if(VAR_5 && VAR_2->env.anchors)
  FUNC_0(VAR_2->env.anchors, VAR_0,
   VAR_6);
 FUNC_1(VAR_4, VAR_0, VAR_6);
 FUNC_2(VAR_6);
 FUNC_4(VAR_1);
}

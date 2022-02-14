
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {scalar_t__ anchors; int hints; struct iter_forwards* fwds; } ;
struct worker {TYPE_1__ env; } ;
struct iter_forwards {int dummy; } ;
struct delegpt {int dummy; } ;
typedef int RES ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ,int *) ;
 int FUNC_1 (scalar_t__,int ,int *) ;
 int FUNC_2 (struct delegpt*) ;
 int FUNC_3 (struct iter_forwards*,int ,int *) ;
 int FUNC_4 (struct iter_forwards*,int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ,struct delegpt*,int) ;
 int FUNC_7 (int *,char*,int **,struct delegpt**,int*,int*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,char*) ;

__attribute__((used)) static void
FUNC_10(RES* VAR_1, struct worker* VAR_2, char* VAR_3)
{
 struct iter_forwards* VAR_4 = VAR_2->env.fwds;
 int VAR_5 = 0, VAR_6 = 0;
 uint8_t* VAR_7 = ((void*)0);
 struct delegpt* VAR_8 = ((void*)0);
 if(!FUNC_7(VAR_1, VAR_3, &VAR_7, &VAR_8, &VAR_5, &VAR_6))
  return;
 if(VAR_5 && VAR_2->env.anchors) {
  if(!FUNC_0(VAR_2->env.anchors, VAR_0,
   VAR_7)) {
   (void)FUNC_9(VAR_1, "error out of memory\n");
   FUNC_2(VAR_8);
   FUNC_5(VAR_7);
   return;
  }
 }
 if(!FUNC_3(VAR_4, VAR_0, VAR_7)) {
  if(VAR_5 && VAR_2->env.anchors)
   FUNC_1(VAR_2->env.anchors,
    VAR_0, VAR_7);
  (void)FUNC_9(VAR_1, "error out of memory\n");
  FUNC_2(VAR_8);
  FUNC_5(VAR_7);
  return;
 }
 if(!FUNC_6(VAR_2->env.hints, VAR_0, VAR_8, !VAR_6)) {
  (void)FUNC_9(VAR_1, "error out of memory\n");
  FUNC_4(VAR_4, VAR_0, VAR_7);
  if(VAR_5 && VAR_2->env.anchors)
   FUNC_1(VAR_2->env.anchors,
    VAR_0, VAR_7);
  FUNC_5(VAR_7);
  return;
 }
 FUNC_5(VAR_7);
 FUNC_8(VAR_1);
}

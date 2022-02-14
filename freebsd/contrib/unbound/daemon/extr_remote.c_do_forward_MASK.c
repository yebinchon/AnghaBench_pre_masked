
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int mesh; struct iter_forwards* fwds; } ;
struct worker {TYPE_1__ env; } ;
struct iter_forwards {int dummy; } ;
struct delegpt {int dummy; } ;
typedef int RES ;


 int VAR_0 ;
 int FUNC_0 (struct iter_forwards*,int ,struct delegpt*) ;
 int FUNC_1 (struct iter_forwards*,int ,int *) ;
 int FUNC_2 (int ) ;
 struct delegpt* FUNC_3 (int *,char*,int *,int ) ;
 int FUNC_4 (int *,struct iter_forwards*,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*) ;
 scalar_t__ FUNC_7 (char*,char*) ;

__attribute__((used)) static void
FUNC_8(RES* VAR_1, struct worker* VAR_2, char* VAR_3)
{
 struct iter_forwards* VAR_4 = VAR_2->env.fwds;
 uint8_t* VAR_5 = (uint8_t*)"\000";
 if(!VAR_4) {
  (void)FUNC_6(VAR_1, "error: structure not allocated\n");
  return;
 }
 if(VAR_3 == ((void*)0) || VAR_3[0] == 0) {
  (void)FUNC_4(VAR_1, VAR_4, VAR_5);
  return;
 }



 FUNC_2(VAR_2->env.mesh);
 if(FUNC_7(VAR_3, "off") == 0) {
  FUNC_1(VAR_4, VAR_0, VAR_5);
 } else {
  struct delegpt* VAR_6;
  if(!(VAR_6 = FUNC_3(VAR_1, VAR_3, VAR_5, 0)))
   return;
  if(!FUNC_0(VAR_4, VAR_0, VAR_6)) {
   (void)FUNC_6(VAR_1, "error out of memory\n");
   return;
  }
 }
 FUNC_5(VAR_1);
}

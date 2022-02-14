
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {scalar_t__ anchors; } ;
struct worker {TYPE_1__ env; } ;
typedef int RES ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int **,size_t*,int*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*) ;

__attribute__((used)) static void
FUNC_5(RES* VAR_1, struct worker* VAR_2, char* VAR_3)
{
 size_t VAR_4;
 int VAR_5;
 uint8_t* VAR_6 = ((void*)0);
 if(!FUNC_2(VAR_1, VAR_3, &VAR_6, &VAR_4, &VAR_5))
  return;
 if(VAR_2->env.anchors) {
  if(!FUNC_0(VAR_2->env.anchors,
   VAR_0, VAR_6)) {
   (void)FUNC_4(VAR_1, "error out of memory\n");
   FUNC_1(VAR_6);
   return;
  }
 }
 FUNC_1(VAR_6);
 FUNC_3(VAR_1);
}

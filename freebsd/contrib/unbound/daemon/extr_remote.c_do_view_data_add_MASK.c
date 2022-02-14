
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct worker {TYPE_1__* daemon; } ;
struct view {int lock; scalar_t__ local_zones; } ;
struct TYPE_2__ {int views; } ;
typedef int RES ;


 int FUNC_0 (int *,scalar_t__,char*) ;
 int FUNC_1 (int *,char*,char**) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,...) ;
 struct view* FUNC_5 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_6(RES* VAR_0, struct worker* VAR_1, char* VAR_2)
{
 char* VAR_3;
 struct view* VAR_4;
 if(!FUNC_1(VAR_0, VAR_2, &VAR_3))
  return;
 VAR_4 = FUNC_5(VAR_1->daemon->views,
  VAR_2, 1 );
 if(!VAR_4) {
  FUNC_4(VAR_0,"no view with name: %s\n", VAR_2);
  return;
 }
 if(!VAR_4->local_zones) {
  if(!(VAR_4->local_zones = FUNC_2())){
   FUNC_3(&VAR_4->lock);
   FUNC_4(VAR_0,"error out of memory\n");
   return;
  }
 }
 FUNC_0(VAR_0, VAR_4->local_zones, VAR_3);
 FUNC_3(&VAR_4->lock);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct worker {TYPE_1__* daemon; } ;
struct view {int lock; scalar_t__ local_zones; int isfirst; } ;
struct config_file {int dummy; } ;
typedef int lz_cfg ;
struct TYPE_2__ {int views; } ;
typedef int RES ;


 int FUNC_0 (int *,scalar_t__,char*) ;
 int FUNC_1 (int *,char*,char**) ;
 int FUNC_2 (scalar_t__,struct config_file*) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct config_file*,int ,int) ;
 int FUNC_6 (int *,char*,...) ;
 struct view* FUNC_7 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_8(RES* VAR_0, struct worker* VAR_1, char* VAR_2)
{
 char* VAR_3;
 struct view* VAR_4;
 if(!FUNC_1(VAR_0, VAR_2, &VAR_3))
  return;
 VAR_4 = FUNC_7(VAR_1->daemon->views,
  VAR_2, 1 );
 if(!VAR_4) {
  FUNC_6(VAR_0,"no view with name: %s\n", VAR_2);
  return;
 }
 if(!VAR_4->local_zones) {
  if(!(VAR_4->local_zones = FUNC_3())){
   FUNC_4(&VAR_4->lock);
   FUNC_6(VAR_0,"error out of memory\n");
   return;
  }
  if(!VAR_4->isfirst) {



   struct config_file VAR_5;
   FUNC_5(&VAR_5, 0, sizeof(VAR_5));
   FUNC_2(VAR_4->local_zones, &VAR_5);
  }
 }
 FUNC_0(VAR_0, VAR_4->local_zones, VAR_3);
 FUNC_4(&VAR_4->lock);
}

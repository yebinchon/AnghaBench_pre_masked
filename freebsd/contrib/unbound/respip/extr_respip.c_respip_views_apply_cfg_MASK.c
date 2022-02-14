
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct views {int dummy; } ;
struct view {TYPE_2__* respip_set; int lock; } ;
struct config_view {int * respip_data; int * respip_actions; int name; struct config_view* next; } ;
struct config_file {struct config_view* views; } ;
struct TYPE_4__ {scalar_t__ count; } ;
struct TYPE_5__ {TYPE_1__ ip_tree; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (TYPE_2__*,int *,int ,int *,int *,int *) ;
 TYPE_2__* FUNC_3 () ;
 struct view* FUNC_4 (struct views*,int ,int) ;

int
FUNC_5(struct views* VAR_0, struct config_file* VAR_1,
 int* VAR_2)
{
 struct config_view* VAR_3;
 struct view* VAR_4;
 int VAR_5;

 for(VAR_3 = VAR_1->views; VAR_3; VAR_3 = VAR_3->next) {






  if(!VAR_3->respip_actions && !VAR_3->respip_data)
   continue;

  if(!(VAR_4 = FUNC_4(VAR_0, VAR_3->name, 1))) {
   FUNC_1("view '%s' unexpectedly missing", VAR_3->name);
   return 0;
  }
  if(!VAR_4->respip_set) {
   VAR_4->respip_set = FUNC_3();
   if(!VAR_4->respip_set) {
    FUNC_1("out of memory");
    FUNC_0(&VAR_4->lock);
    return 0;
   }
  }
  VAR_5 = FUNC_2(VAR_4->respip_set, ((void*)0), 0, ((void*)0),
   VAR_3->respip_actions, VAR_3->respip_data);
  FUNC_0(&VAR_4->lock);
  if(!VAR_5) {
   FUNC_1("Error while applying respip configuration "
    "for view '%s'", VAR_3->name);
   return 0;
  }
  *VAR_2 = (*VAR_2 ||
   VAR_4->respip_set->ip_tree.count);
  VAR_3->respip_actions = ((void*)0);
  VAR_3->respip_data = ((void*)0);
 }
 return 1;
}

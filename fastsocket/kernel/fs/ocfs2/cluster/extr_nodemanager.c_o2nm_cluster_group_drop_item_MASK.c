
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__** default_groups; } ;
struct o2nm_cluster {TYPE_2__ cl_group; } ;
struct config_item {int dummy; } ;
struct config_group {int dummy; } ;
struct TYPE_3__ {struct config_item cg_item; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct config_item*) ;
 struct o2nm_cluster* VAR_0 ;
 struct o2nm_cluster* FUNC_2 (struct config_item*) ;

__attribute__((used)) static void FUNC_3(struct config_group *VAR_1, struct config_item *VAR_2)
{
 struct o2nm_cluster *VAR_3 = FUNC_2(VAR_2);
 int VAR_4;
 struct config_item *VAR_5;

 FUNC_0(VAR_0 != VAR_3);
 VAR_0 = ((void*)0);

 for (VAR_4 = 0; VAR_3->cl_group.default_groups[VAR_4]; VAR_4++) {
  VAR_5 = &VAR_3->cl_group.default_groups[VAR_4]->cg_item;
  VAR_3->cl_group.default_groups[VAR_4] = ((void*)0);
  FUNC_1(VAR_5);
 }

 FUNC_1(VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct o2nm_cluster* default_groups; } ;
struct o2nm_cluster {TYPE_1__ cl_group; } ;
struct config_item {int dummy; } ;


 int FUNC_0 (struct o2nm_cluster*) ;
 struct o2nm_cluster* FUNC_1 (struct config_item*) ;

__attribute__((used)) static void FUNC_2(struct config_item *VAR_0)
{
 struct o2nm_cluster *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->cl_group.default_groups);
 FUNC_0(VAR_1);
}

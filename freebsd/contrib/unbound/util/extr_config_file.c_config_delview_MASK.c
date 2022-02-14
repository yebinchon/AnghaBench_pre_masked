
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_view {int local_data; int local_zones_nodefault; int local_zones; struct config_view* name; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct config_view*) ;

void
FUNC_3(struct config_view* VAR_0)
{
 if(!VAR_0) return;
 FUNC_2(VAR_0->name);
 FUNC_0(VAR_0->local_zones);
 FUNC_1(VAR_0->local_zones_nodefault);
 FUNC_1(VAR_0->local_data);
 FUNC_2(VAR_0);
}

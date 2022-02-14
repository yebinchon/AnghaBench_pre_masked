
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_file {int * local_data; int * local_zones_nodefault; int * local_zones; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct config_file* VAR_0)
{
 FUNC_0(VAR_0->local_zones);
 VAR_0->local_zones = ((void*)0);
 FUNC_1(VAR_0->local_zones_nodefault);
 VAR_0->local_zones_nodefault = ((void*)0);
 FUNC_1(VAR_0->local_data);
 VAR_0->local_data = ((void*)0);
}

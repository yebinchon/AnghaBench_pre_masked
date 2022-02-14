
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gss_api_mech {int gm_name; int gm_list; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct gss_api_mech*) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void
FUNC_5(struct gss_api_mech *VAR_1)
{
 FUNC_3(&VAR_0);
 FUNC_2(&VAR_1->gm_list);
 FUNC_4(&VAR_0);
 FUNC_0("RPC:       unregistered gss mechanism %s\n", VAR_1->gm_name);
 FUNC_1(VAR_1);
}

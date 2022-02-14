
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pf_desc {int * auth_domain_name; } ;
struct gss_api_mech {int gm_pf_num; struct pf_desc* gm_pfs; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct gss_api_mech *VAR_0)
{
 struct pf_desc *VAR_1;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->gm_pf_num; VAR_2++) {
  VAR_1 = &VAR_0->gm_pfs[VAR_2];
  FUNC_0(VAR_1->auth_domain_name);
  VAR_1->auth_domain_name = ((void*)0);
 }
}

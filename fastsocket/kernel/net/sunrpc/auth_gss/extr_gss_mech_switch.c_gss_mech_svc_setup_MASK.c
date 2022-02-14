
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pf_desc {int * auth_domain_name; int pseudoflavor; int name; } ;
struct gss_api_mech {int gm_pf_num; struct pf_desc* gm_pfs; } ;


 int VAR_0 ;
 int FUNC_0 (struct gss_api_mech*) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int
FUNC_3(struct gss_api_mech *VAR_1)
{
 struct pf_desc *VAR_2;
 int VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_1->gm_pf_num; VAR_3++) {
  VAR_2 = &VAR_1->gm_pfs[VAR_3];
  VAR_2->auth_domain_name = FUNC_1(VAR_2->name);
  VAR_4 = -VAR_0;
  if (VAR_2->auth_domain_name == ((void*)0))
   goto out;
  VAR_4 = FUNC_2(VAR_2->pseudoflavor,
       VAR_2->auth_domain_name);
  if (VAR_4)
   goto out;
 }
 return 0;
out:
 FUNC_0(VAR_1);
 return VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _gss_name {int gn_mn; } ;
struct _gss_mechanism_name {int gmn_name; int * gmn_mech_oid; struct _gss_mech_switch* gmn_mech; } ;
struct _gss_mech_switch {int gm_mech_oid; } ;
typedef int gss_name_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct _gss_mechanism_name*,int ) ;
 int FUNC_2 (struct _gss_name*) ;
 int VAR_0 ;
 void* FUNC_3 (int) ;
 int FUNC_4 (struct _gss_name*,int ,int) ;

struct _gss_name *
FUNC_5(struct _gss_mech_switch *VAR_1, gss_name_t VAR_2)
{
 struct _gss_name *VAR_3;
 struct _gss_mechanism_name *VAR_4;

 VAR_3 = FUNC_3(sizeof(struct _gss_name));
 if (!VAR_3)
  return (0);
 FUNC_4(VAR_3, 0, sizeof(struct _gss_name));

 VAR_4 = FUNC_3(sizeof(struct _gss_mechanism_name));
 if (!VAR_4) {
  FUNC_2(VAR_3);
  return (0);
 }

 FUNC_0(&VAR_3->gn_mn);
 VAR_4->gmn_mech = VAR_1;
 VAR_4->gmn_mech_oid = &VAR_1->gm_mech_oid;
 VAR_4->gmn_name = VAR_2;
 FUNC_1(&VAR_3->gn_mn, VAR_4, VAR_0);

 return (VAR_3);
}

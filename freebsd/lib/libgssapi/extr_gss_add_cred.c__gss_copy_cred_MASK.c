
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _gss_mechanism_cred {int gmc_cred; int * gmc_mech_oid; struct _gss_mech_switch* gmc_mech; } ;
struct _gss_mech_switch {int gm_mech_oid; int (* gm_release_cred ) (scalar_t__*,int *) ;int (* gm_release_name ) (scalar_t__*,int *) ;scalar_t__ (* gm_add_cred ) (scalar_t__*,int ,int ,int *,int ,scalar_t__,scalar_t__,int *,int ,int ,int ) ;scalar_t__ (* gm_inquire_cred_by_mech ) (scalar_t__*,int ,int *,int *,scalar_t__*,scalar_t__*,int *) ;} ;
typedef int gss_name_t ;
typedef int gss_cred_usage_t ;
typedef int gss_cred_id_t ;
typedef scalar_t__ OM_uint32 ;


 int VAR_0 ;
 int FUNC_0 (struct _gss_mech_switch*,scalar_t__,scalar_t__) ;
 struct _gss_mechanism_cred* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (scalar_t__*,int ,int *,int *,scalar_t__*,scalar_t__*,int *) ;
 scalar_t__ FUNC_3 (scalar_t__*,int ,int ,int *,int ,scalar_t__,scalar_t__,int *,int ,int ,int ) ;
 int FUNC_4 (scalar_t__*,int *) ;
 int FUNC_5 (scalar_t__*,int *) ;

__attribute__((used)) static struct _gss_mechanism_cred *
FUNC_6(struct _gss_mechanism_cred *VAR_1)
{
 struct _gss_mechanism_cred *VAR_2;
 struct _gss_mech_switch *VAR_3 = VAR_1->gmc_mech;
 OM_uint32 VAR_4, VAR_5;
 gss_name_t VAR_6;
 gss_cred_id_t VAR_7;
 OM_uint32 VAR_8, VAR_9;
 gss_cred_usage_t VAR_10;

 VAR_4 = VAR_3->gm_inquire_cred_by_mech(&VAR_5,
     VAR_1->gmc_cred, VAR_1->gmc_mech_oid,
     &VAR_6, &VAR_8, &VAR_9, &VAR_10);
 if (VAR_4) {
  FUNC_0(VAR_3, VAR_4, VAR_5);
  return (0);
 }

 VAR_4 = VAR_3->gm_add_cred(&VAR_5,
     VAR_0, VAR_6, VAR_1->gmc_mech_oid,
     VAR_10, VAR_8, VAR_9,
     &VAR_7, 0, 0, 0);
 VAR_3->gm_release_name(&VAR_5, &VAR_6);

 if (VAR_4) {
  FUNC_0(VAR_3, VAR_4, VAR_5);
  return (0);
 }

 VAR_2 = FUNC_1(sizeof(struct _gss_mechanism_cred));
 if (!VAR_2) {
  VAR_3->gm_release_cred(&VAR_5, &VAR_7);
  return (0);
 }
 VAR_2->gmc_mech = VAR_3;
 VAR_2->gmc_mech_oid = &VAR_3->gm_mech_oid;
 VAR_2->gmc_cred = VAR_7;

 return (VAR_2);
}

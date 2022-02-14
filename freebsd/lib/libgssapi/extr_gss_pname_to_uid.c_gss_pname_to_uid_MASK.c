
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct _gss_name {int dummy; } ;
struct _gss_mechanism_name {int gmn_name; } ;
struct _gss_mech_switch {scalar_t__ (* gm_pname_to_uid ) (scalar_t__*,int ,int const,int *) ;} ;
typedef scalar_t__ gss_name_t ;
typedef int gss_OID ;
typedef scalar_t__ OM_uint32 ;


 scalar_t__ const VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct _gss_mech_switch* FUNC_0 (int const) ;
 scalar_t__ FUNC_1 (scalar_t__*,struct _gss_name*,int const,struct _gss_mechanism_name**) ;
 int FUNC_2 (struct _gss_mech_switch*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__*,int ,int const,int *) ;

OM_uint32
FUNC_4(OM_uint32 *VAR_5, const gss_name_t VAR_6,
    const gss_OID VAR_7, uid_t *VAR_8)
{
 struct _gss_name *VAR_9 = (struct _gss_name *) VAR_6;
 struct _gss_mech_switch *VAR_10;
 struct _gss_mechanism_name *VAR_11;
 OM_uint32 VAR_12;

 *VAR_5 = 0;

 if (VAR_6 == VAR_0)
  return (VAR_2);

 VAR_10 = FUNC_0(VAR_7);
 if (!VAR_10)
  return (VAR_1);

 if (VAR_10->gm_pname_to_uid == ((void*)0))
  return (VAR_4);

 VAR_12 = FUNC_1(VAR_5, VAR_9, VAR_7, &VAR_11);
 if (VAR_12 != VAR_3) {
  FUNC_2(VAR_10, VAR_12, *VAR_5);
  return (VAR_12);
 }

 VAR_12 = (*VAR_10->gm_pname_to_uid)(VAR_5, VAR_11->gmn_name,
     VAR_7, VAR_8);
 if (VAR_12 != VAR_3)
  FUNC_2(VAR_10, VAR_12, *VAR_5);

 return (VAR_12);
}

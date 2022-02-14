
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _gss_name {int gn_mn; } ;
struct _gss_mechanism_name {scalar_t__ gmn_name; int * gmn_mech_oid; struct _gss_mech_switch* gmn_mech; } ;
struct _gss_mech_switch {int gm_mech_oid; int (* gm_release_name ) (scalar_t__*,scalar_t__*) ;scalar_t__ (* gm_canonicalize_name ) (scalar_t__*,scalar_t__,int const,scalar_t__*) ;} ;
typedef scalar_t__ gss_name_t ;
typedef int gss_OID ;
typedef scalar_t__ OM_uint32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct _gss_mechanism_name*,int ) ;
 struct _gss_mech_switch* FUNC_2 (int const) ;
 scalar_t__ FUNC_3 (scalar_t__*,struct _gss_name*,int const,struct _gss_mechanism_name**) ;
 int FUNC_4 (struct _gss_mech_switch*,scalar_t__,scalar_t__) ;
 int FUNC_5 (struct _gss_name*) ;
 int VAR_3 ;
 void* FUNC_6 (int) ;
 int FUNC_7 (struct _gss_name*,int ,int) ;
 scalar_t__ FUNC_8 (scalar_t__*,scalar_t__,int const,scalar_t__*) ;
 int FUNC_9 (scalar_t__*,scalar_t__*) ;
 int FUNC_10 (scalar_t__*,scalar_t__*) ;

OM_uint32
FUNC_11(OM_uint32 *VAR_4,
    const gss_name_t VAR_5,
    const gss_OID VAR_6,
    gss_name_t *VAR_7)
{
 OM_uint32 VAR_8;
 struct _gss_name *VAR_9 = (struct _gss_name *) VAR_5;
 struct _gss_mechanism_name *VAR_10;
 struct _gss_mech_switch *VAR_11 = FUNC_2(VAR_6);
 gss_name_t VAR_12;

 *VAR_4 = 0;
 *VAR_7 = 0;

 VAR_8 = FUNC_3(VAR_4, VAR_9, VAR_6, &VAR_10);
 if (VAR_8)
  return (VAR_8);

 VAR_11 = VAR_10->gmn_mech;
 VAR_8 = VAR_11->gm_canonicalize_name(VAR_4,
     VAR_10->gmn_name, VAR_6, &VAR_12);
 if (VAR_8) {
  FUNC_4(VAR_11, VAR_8, *VAR_4);
  return (VAR_8);
 }




 *VAR_4 = 0;
 VAR_9 = FUNC_6(sizeof(struct _gss_name));
 if (!VAR_9) {
  VAR_11->gm_release_name(VAR_4, &VAR_12);
  *VAR_4 = VAR_0;
  return (VAR_2);
 }
 FUNC_7(VAR_9, 0, sizeof(struct _gss_name));

 VAR_10 = FUNC_6(sizeof(struct _gss_mechanism_name));
 if (!VAR_10) {
  VAR_11->gm_release_name(VAR_4, &VAR_12);
  FUNC_5(VAR_9);
  *VAR_4 = VAR_0;
  return (VAR_2);
 }

 FUNC_0(&VAR_9->gn_mn);
 VAR_10->gmn_mech = VAR_11;
 VAR_10->gmn_mech_oid = &VAR_11->gm_mech_oid;
 VAR_10->gmn_name = VAR_12;
 FUNC_1(&VAR_9->gn_mn, VAR_10, VAR_3);

 *VAR_7 = (gss_name_t) VAR_9;

 return (VAR_1);
}

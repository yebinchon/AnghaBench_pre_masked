
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _gss_mech_switch {scalar_t__ (* gm_inquire_names_for_mech ) (scalar_t__*,int const,int *) ;} ;
typedef int gss_OID_set ;
typedef int gss_OID ;
typedef scalar_t__ OM_uint32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct _gss_mech_switch* FUNC_0 (int const) ;
 scalar_t__ FUNC_1 (scalar_t__*,int ,int *) ;
 scalar_t__ FUNC_2 (scalar_t__*,int *) ;
 int FUNC_3 (scalar_t__*,int *) ;
 scalar_t__ FUNC_4 (scalar_t__*,int const,int *) ;

OM_uint32
FUNC_5(OM_uint32 *VAR_5,
    const gss_OID VAR_6,
    gss_OID_set *VAR_7)
{
 OM_uint32 VAR_8;
 struct _gss_mech_switch *VAR_9 = FUNC_0(VAR_6);

 *VAR_5 = 0;
 *VAR_7 = VAR_0;
 if (!VAR_9)
  return (VAR_3);





 if (VAR_9->gm_inquire_names_for_mech) {
  return (VAR_9->gm_inquire_names_for_mech(VAR_5,
       VAR_6, VAR_7));
 } else {
  VAR_8 = FUNC_2(VAR_5,
      VAR_7);
  if (VAR_8)
   return (VAR_8);
  VAR_8 = FUNC_1(VAR_5,
      VAR_1, VAR_7);
  if (VAR_8) {
   OM_uint32 VAR_10;
   FUNC_3(&VAR_10, VAR_7);
   return (VAR_8);
  }
  VAR_8 = FUNC_1(VAR_5,
      VAR_2, VAR_7);
  if (VAR_8) {
   OM_uint32 VAR_11;
   FUNC_3(&VAR_11, VAR_7);
   return (VAR_8);
  }
 }

 return (VAR_4);
}

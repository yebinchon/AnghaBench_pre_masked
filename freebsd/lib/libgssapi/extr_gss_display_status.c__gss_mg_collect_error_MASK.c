
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _gss_mech_switch {int dummy; } ;
typedef int gss_OID ;
typedef int OM_uint32 ;


 struct _gss_mech_switch* FUNC_0 (int ) ;
 int FUNC_1 (struct _gss_mech_switch*,int ,int ) ;

void
FUNC_2(gss_OID VAR_0, OM_uint32 VAR_1, OM_uint32 VAR_2)
{
 struct _gss_mech_switch *VAR_3;

 VAR_3 = FUNC_0(VAR_0);
 if (VAR_3 != ((void*)0))
  FUNC_1(VAR_3, VAR_1, VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct _gss_mechanism_cred {int gmc_cred; TYPE_1__* gmc_mech; int gc_mc; } ;
struct _gss_cred {int gmc_cred; TYPE_1__* gmc_mech; int gc_mc; } ;
typedef scalar_t__ gss_cred_id_t ;
struct TYPE_2__ {int (* gm_release_cred ) (scalar_t__*,int *) ;} ;
typedef scalar_t__ OM_uint32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct _gss_mechanism_cred* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct _gss_mechanism_cred*) ;
 int VAR_2 ;
 int FUNC_3 (scalar_t__*,int *) ;

OM_uint32
FUNC_4(OM_uint32 *VAR_3, gss_cred_id_t *VAR_4)
{
 struct _gss_cred *VAR_5 = (struct _gss_cred *) *VAR_4;
 struct _gss_mechanism_cred *VAR_6;

 if (*VAR_4 == VAR_0)
     return (VAR_1);

 while (FUNC_0(&VAR_5->gc_mc)) {
  VAR_6 = FUNC_0(&VAR_5->gc_mc);
  FUNC_1(&VAR_5->gc_mc, VAR_2);
  VAR_6->gmc_mech->gm_release_cred(VAR_3, &VAR_6->gmc_cred);
  FUNC_2(VAR_6);
 }
 FUNC_2(VAR_5);

 *VAR_3 = 0;
 *VAR_4 = VAR_0;
 return (VAR_1);
}

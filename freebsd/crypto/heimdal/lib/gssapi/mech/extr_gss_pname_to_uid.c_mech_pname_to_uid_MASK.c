
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uid_t ;
struct _gss_mechanism_name {TYPE_1__* gmn_mech; int gmn_mech_oid; int gmn_name; } ;
struct TYPE_2__ {int (* gm_pname_to_uid ) (int *,int ,int ,int *) ;} ;
typedef int OM_uint32 ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 int FUNC_2 (int *,int ,int ,int *) ;

__attribute__((used)) static OM_uint32
FUNC_3(OM_uint32 *VAR_1,
                  struct _gss_mechanism_name *VAR_2,
                  uid_t *VAR_3)
{
    OM_uint32 VAR_4 = VAR_0;

    *VAR_1 = 0;

    if (VAR_2->gmn_mech->gm_pname_to_uid == ((void*)0))
        return VAR_0;

    VAR_4 = VAR_2->gmn_mech->gm_pname_to_uid(VAR_1,
                                                 VAR_2->gmn_name,
                                                 VAR_2->gmn_mech_oid,
                                                 VAR_3);
    if (FUNC_0(VAR_4))
        FUNC_1(VAR_2->gmn_mech, VAR_4, *VAR_1);

    return VAR_4;
}

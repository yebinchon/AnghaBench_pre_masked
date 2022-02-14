
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* gssapi_mech_interface ;
typedef int gss_OID_set ;
struct TYPE_5__ {size_t gm_mo_num; TYPE_1__* gm_mo; } ;
struct TYPE_4__ {int flags; int option; } ;
typedef int OM_uint32 ;


 int FUNC_0 (int*,int ,int *) ;

__attribute__((used)) static void
FUNC_1(gssapi_mech_interface VAR_0, gss_OID_set *VAR_1, OM_uint32 VAR_2)
{
    OM_uint32 VAR_3;
    size_t VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_0->gm_mo_num; VAR_4++)
 if ((VAR_0->gm_mo[VAR_4].flags & VAR_2) == VAR_2)
     FUNC_0(&VAR_3, VAR_0->gm_mo[VAR_4].option, VAR_1);
}

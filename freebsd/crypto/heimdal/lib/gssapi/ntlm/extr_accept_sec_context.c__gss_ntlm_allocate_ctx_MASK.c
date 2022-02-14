
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ntlm_server_interface {scalar_t__ (* nsi_init ) (scalar_t__*,int *) ;} ;
typedef TYPE_1__* ntlm_ctx ;
struct TYPE_4__ {int ictx; struct ntlm_server_interface* server; } ;
typedef scalar_t__ OM_uint32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 (int,int) ;
 struct ntlm_server_interface VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__*,int *) ;

OM_uint32
FUNC_2(OM_uint32 *VAR_3, ntlm_ctx *VAR_4)
{
    OM_uint32 VAR_5;
    struct ntlm_server_interface *VAR_6 = ((void*)0);




    if (VAR_6 == ((void*)0))
 return VAR_1;

    *VAR_4 = FUNC_0(1, sizeof(**VAR_4));

    (*VAR_4)->server = VAR_6;

    VAR_5 = (*(*VAR_4)->server->nsi_init)(VAR_3, &(*VAR_4)->ictx);
    if (VAR_5 != VAR_0)
 return VAR_5;

    return VAR_0;
}

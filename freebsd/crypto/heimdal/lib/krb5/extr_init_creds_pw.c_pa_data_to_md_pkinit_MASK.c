
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int krb5_principal ;
struct TYPE_5__ {int pk_nonce; int ic_flags; int * pk_init_ctx; } ;
typedef TYPE_1__ krb5_get_init_creds_ctx ;
typedef int krb5_error_code ;
typedef int krb5_context ;
struct TYPE_6__ {int req_body; } ;
typedef int METHOD_DATA ;
typedef TYPE_2__ AS_REQ ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int ,int *,int ,int,int *,int ,int *) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static krb5_error_code
FUNC_3(krb5_context VAR_1,
       const AS_REQ *VAR_2,
       const krb5_principal VAR_3,
       int VAR_4,
       krb5_get_init_creds_ctx *VAR_5,
       METHOD_DATA *VAR_6)
{
    if (VAR_5->pk_init_ctx == ((void*)0))
 return 0;
    FUNC_2(VAR_1, VAR_0,
      FUNC_0("no support for PKINIT compiled in", ""));
    return VAR_0;

}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int saltvalue; int salttype; } ;
struct pa_info_data {int * s2kparams; TYPE_3__ salt; int etype; } ;
typedef TYPE_3__ krb5_salt ;
typedef int krb5_principal ;
struct TYPE_12__ {int * keyseed; int * keyproc; } ;
typedef TYPE_4__ krb5_get_init_creds_ctx ;
typedef int krb5_error_code ;
typedef int krb5_context ;
struct TYPE_9__ {int len; int * val; } ;
struct TYPE_10__ {TYPE_1__ etype; } ;
struct TYPE_13__ {TYPE_2__ req_body; } ;
typedef int METHOD_DATA ;
typedef TYPE_5__ AS_REQ ;


 int VAR_0 ;
 int FUNC_0 (int ,int,char*) ;
 int FUNC_1 (int ,int *,int const,int *,int *,int *,int,TYPE_3__*,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static krb5_error_code
FUNC_3(krb5_context VAR_1,
       const AS_REQ *VAR_2,
       const krb5_principal VAR_3,
       krb5_get_init_creds_ctx *VAR_4,
       struct pa_info_data *VAR_5,
       METHOD_DATA *VAR_6)
{
    if (VAR_4->keyproc == ((void*)0) || VAR_4->keyseed == ((void*)0))
 return 0;

    if (VAR_5) {
 FUNC_1(VAR_1, VAR_6, VAR_3,
     VAR_4->keyproc, VAR_4->keyseed,
     &VAR_5->etype, 1,
     &VAR_5->salt, VAR_5->s2kparams);
    } else {
 krb5_salt VAR_7;

 FUNC_0(VAR_1, 5, "krb5_get_init_creds: pa-info not found, guessing salt");


 FUNC_1(VAR_1, VAR_6, VAR_3,
     VAR_4->keyproc, VAR_4->keyseed,
     VAR_2->req_body.etype.val, VAR_2->req_body.etype.len,
     ((void*)0), ((void*)0));


 VAR_7.salttype = VAR_0;
 FUNC_2(&VAR_7.saltvalue);
 FUNC_1(VAR_1, VAR_6, VAR_3,
     VAR_4->keyproc, VAR_4->keyseed,
     VAR_2->req_body.etype.val, VAR_2->req_body.etype.len,
     &VAR_7, ((void*)0));
    }
    return 0;
}

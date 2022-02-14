
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct pa_info_data {int * s2kparams; int salt; void* etype; } ;
typedef int paid ;
typedef int krb5_krbhst_info ;
typedef int krb5_keyblock ;
struct TYPE_16__ {scalar_t__ keyseed; int req_buffer; int pk_nonce; scalar_t__ pk_init_ctx; struct pa_info_data* ppaid; } ;
typedef TYPE_3__ krb5_get_init_creds_ctx ;
typedef scalar_t__ krb5_error_code ;
typedef void* krb5_enctype ;
struct TYPE_17__ {int client; } ;
typedef TYPE_4__ krb5_creds ;
typedef int krb5_context ;
struct TYPE_20__ {int len; int val; } ;
struct TYPE_14__ {void* etype; } ;
struct TYPE_19__ {TYPE_8__* padata; TYPE_1__ enc_part; } ;
struct TYPE_15__ {int realm; } ;
struct TYPE_18__ {TYPE_2__ req_body; } ;
typedef int PA_DATA ;
typedef TYPE_5__ AS_REQ ;
typedef TYPE_6__ AS_REP ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int ,int,char*) ;
 scalar_t__ FUNC_2 (int ,int ,scalar_t__,void*,int const*,int ,int *,int *,int **) ;
 int FUNC_3 (int ,struct pa_info_data*) ;
 int * FUNC_4 (int ,int ,int ,int*) ;
 scalar_t__ FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (int ,scalar_t__,int ) ;
 int FUNC_7 (struct pa_info_data*,int ,int) ;
 scalar_t__ FUNC_8 (int ,int ,TYPE_3__*,int ,int *,void*,int **) ;
 struct pa_info_data* FUNC_9 (int ,int ,TYPE_5__*,struct pa_info_data*,TYPE_8__*) ;

__attribute__((used)) static krb5_error_code
FUNC_10(krb5_context VAR_3,
         krb5_get_init_creds_ctx *VAR_4,
         krb5_creds *VAR_5,
         AS_REQ *VAR_6,
         AS_REP *VAR_7,
         const krb5_krbhst_info *VAR_8,
         krb5_keyblock **VAR_9)
{
    struct pa_info_data VAR_10, *VAR_11 = ((void*)0);
    krb5_error_code VAR_12;
    krb5_enctype VAR_13;
    PA_DATA *VAR_14;

    FUNC_7(&VAR_10, 0, sizeof(VAR_10));

    VAR_13 = VAR_7->enc_part.etype;

    if (VAR_7->padata) {
 VAR_10.etype = VAR_13;
 VAR_11 = FUNC_9(VAR_3, VAR_5->client, VAR_6, &VAR_10,
    VAR_7->padata);
    }
    if (VAR_11 == ((void*)0))
 VAR_11 = VAR_4->ppaid;
    if (VAR_11 == ((void*)0)) {
 VAR_12 = FUNC_5 (VAR_3, VAR_5->client, &VAR_10.salt);
 if (VAR_12)
     return VAR_12;
 VAR_10.etype = VAR_13;
 VAR_10.s2kparams = ((void*)0);
 VAR_11 = &VAR_10;
    }

    VAR_14 = ((void*)0);
    if (VAR_7->padata) {
 int VAR_15 = 0;
 VAR_14 = FUNC_4(VAR_7->padata->val,
         VAR_7->padata->len,
         VAR_1,
         &VAR_15);
 if (VAR_14 == ((void*)0)) {
     VAR_15 = 0;
     VAR_14 = FUNC_4(VAR_7->padata->val,
      VAR_7->padata->len,
      VAR_2,
      &VAR_15);
 }
    }
    if (VAR_14 && VAR_4->pk_init_ctx) {
 VAR_12 = VAR_0;
 FUNC_6(VAR_3, VAR_12, FUNC_0("no support for PKINIT compiled in", ""));

    } else if (VAR_4->keyseed) {
  FUNC_1(VAR_3, 5, "krb5_get_init_creds: using keyproc");
 VAR_12 = FUNC_8(VAR_3, VAR_5->client, VAR_4,
       VAR_11->salt, VAR_11->s2kparams, VAR_13, VAR_9);
    } else {
 VAR_12 = VAR_0;
 FUNC_6(VAR_3, VAR_12, FUNC_0("No usable pa data type", ""));
    }

    FUNC_3(VAR_3, &VAR_10);
    return VAR_12;
}

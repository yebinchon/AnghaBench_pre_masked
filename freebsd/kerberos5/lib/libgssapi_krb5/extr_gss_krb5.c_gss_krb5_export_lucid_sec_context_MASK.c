
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef int krb5_storage ;
typedef int krb5_keyblock ;
typedef int krb5_error_code ;
typedef int * krb5_context ;
struct TYPE_13__ {int have_acceptor_subkey; int acceptor_subkey; int ctx_key; } ;
struct TYPE_12__ {int sign_alg; int seal_alg; int ctx_key; } ;
struct TYPE_14__ {int version; int initiate; int endtime; int send_seq; int recv_seq; int protocol; TYPE_3__ cfx_kd; TYPE_2__ rfc1964_kd; } ;
typedef TYPE_4__ gss_krb5_lucid_context_v1_t ;
typedef scalar_t__ gss_ctx_id_t ;
typedef TYPE_5__* gss_buffer_set_t ;
struct TYPE_15__ {int count; TYPE_1__* elements; } ;
struct TYPE_11__ {int length; int value; } ;
typedef int OM_uint32 ;


 void* VAR_0 ;
 int VAR_1 ;
 TYPE_5__* VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_4__* FUNC_0 (int,int) ;
 int FUNC_1 (int*,scalar_t__,int ,TYPE_5__**) ;
 int FUNC_2 (int *,TYPE_4__*) ;
 int FUNC_3 (int*,TYPE_5__**) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int **) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int*) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int ,int ) ;
 int FUNC_11 (int *,int *) ;

OM_uint32
FUNC_12(OM_uint32 *VAR_7,
      gss_ctx_id_t *VAR_8,
      OM_uint32 VAR_9,
      void **VAR_10)
{
    krb5_context VAR_11 = ((void*)0);
    krb5_error_code VAR_12;
    gss_buffer_set_t VAR_13 = VAR_2;
    OM_uint32 VAR_14;
    gss_krb5_lucid_context_v1_t *VAR_15 = ((void*)0);
    krb5_storage *VAR_16 = ((void*)0);
    uint32_t VAR_17;

    if (VAR_8 == ((void*)0)
 || *VAR_8 == VAR_3
 || VAR_9 != 1)
    {
 VAR_12 = VAR_0;
 return VAR_6;
    }

    VAR_14 =
 FUNC_1 (VAR_7,
     *VAR_8,
     VAR_4,
     &VAR_13);
    if (VAR_14)
 return VAR_14;

    if (VAR_13 == VAR_2 || VAR_13->count != 1) {
 FUNC_3(VAR_7, &VAR_13);
 *VAR_7 = VAR_0;
 return VAR_6;
    }

    VAR_12 = FUNC_6(&VAR_11);
    if (VAR_12)
 goto out;

    VAR_15 = FUNC_0(1, sizeof(*VAR_15));
    if (VAR_15 == ((void*)0)) {
 VAR_12 = VAR_1;
 goto out;
    }

    VAR_16 = FUNC_10(VAR_13->elements[0].value,
          VAR_13->elements[0].length);
    if (VAR_16 == ((void*)0)) {
 VAR_12 = VAR_1;
 goto out;
    }

    VAR_12 = FUNC_8(VAR_16, &VAR_17);
    if (VAR_12) goto out;
    if (VAR_17 != 1) {
 VAR_12 = VAR_0;
 goto out;
    }
    VAR_15->version = 1;

    VAR_12 = FUNC_8(VAR_16, &VAR_15->initiate);
    if (VAR_12) goto out;

    VAR_12 = FUNC_8(VAR_16, &VAR_15->endtime);
    if (VAR_12) goto out;

    VAR_12 = FUNC_8(VAR_16, &VAR_17);
    if (VAR_12) goto out;
    VAR_15->send_seq = ((uint64_t)VAR_17) << 32;
    VAR_12 = FUNC_8(VAR_16, &VAR_17);
    if (VAR_12) goto out;
    VAR_15->send_seq |= VAR_17;

    VAR_12 = FUNC_8(VAR_16, &VAR_17);
    if (VAR_12) goto out;
    VAR_15->recv_seq = ((uint64_t)VAR_17) << 32;
    VAR_12 = FUNC_8(VAR_16, &VAR_17);
    if (VAR_12) goto out;
    VAR_15->recv_seq |= VAR_17;

    VAR_12 = FUNC_8(VAR_16, &VAR_15->protocol);
    if (VAR_12) goto out;
    if (VAR_15->protocol == 0) {
 krb5_keyblock VAR_18;


 VAR_12 = FUNC_8(VAR_16, &VAR_15->rfc1964_kd.sign_alg);
 if (VAR_12) goto out;

 VAR_12 = FUNC_8(VAR_16, &VAR_15->rfc1964_kd.seal_alg);
 if (VAR_12) goto out;

 VAR_12 = FUNC_7(VAR_16, &VAR_18);
 if (VAR_12) goto out;
 VAR_12 = FUNC_11(&VAR_18, &VAR_15->rfc1964_kd.ctx_key);
 FUNC_5(VAR_11, &VAR_18);
 if (VAR_12) goto out;
    } else if (VAR_15->protocol == 1) {
 krb5_keyblock VAR_19;


 VAR_12 = FUNC_8(VAR_16, &VAR_15->cfx_kd.have_acceptor_subkey);
 if (VAR_12) goto out;

 VAR_12 = FUNC_7(VAR_16, &VAR_19);
 if (VAR_12) goto out;
 VAR_12 = FUNC_11(&VAR_19, &VAR_15->cfx_kd.ctx_key);
 FUNC_5(VAR_11, &VAR_19);
 if (VAR_12) goto out;

 if (VAR_15->cfx_kd.have_acceptor_subkey) {
     VAR_12 = FUNC_7(VAR_16, &VAR_19);
     if (VAR_12) goto out;
     VAR_12 = FUNC_11(&VAR_19, &VAR_15->cfx_kd.acceptor_subkey);
     FUNC_5(VAR_11, &VAR_19);
     if (VAR_12) goto out;
 }
    } else {
 VAR_12 = VAR_0;
 goto out;
    }

    *VAR_10 = VAR_15;

out:
    FUNC_3(VAR_7, &VAR_13);
    if (VAR_16)
 FUNC_9(VAR_16);
    if (VAR_11)
 FUNC_4(VAR_11);

    if (VAR_12) {
 if (VAR_15)
     FUNC_2(((void*)0), VAR_15);

 *VAR_7 = VAR_12;
 return VAR_6;
    }
    *VAR_7 = 0;
    return VAR_5;
}

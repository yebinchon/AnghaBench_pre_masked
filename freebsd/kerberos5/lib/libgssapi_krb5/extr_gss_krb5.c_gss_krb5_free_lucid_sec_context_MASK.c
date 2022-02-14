
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int acceptor_subkey; scalar_t__ have_acceptor_subkey; int ctx_key; } ;
struct TYPE_5__ {int ctx_key; } ;
struct TYPE_7__ {int version; int protocol; TYPE_2__ cfx_kd; TYPE_1__ rfc1964_kd; } ;
typedef TYPE_3__ gss_krb5_lucid_context_v1_t ;
typedef scalar_t__ OM_uint32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *) ;

OM_uint32
FUNC_2(OM_uint32 *VAR_2, void *VAR_3)
{
    gss_krb5_lucid_context_v1_t *VAR_4 = VAR_3;

    if (VAR_4->version != 1) {
 if (VAR_2)
     *VAR_2 = 0;
 return VAR_1;
    }

    if (VAR_4->protocol == 0) {
 FUNC_1(&VAR_4->rfc1964_kd.ctx_key);
    } else if (VAR_4->protocol == 1) {
 FUNC_1(&VAR_4->cfx_kd.ctx_key);
 if (VAR_4->cfx_kd.have_acceptor_subkey)
     FUNC_1(&VAR_4->cfx_kd.acceptor_subkey);
    }
    FUNC_0(VAR_4);
    if (VAR_2)
 *VAR_2 = 0;
    return VAR_0;
}

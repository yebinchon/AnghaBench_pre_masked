
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* revoked; } ;
struct TYPE_9__ {int type; TYPE_1__ value; } ;
struct TYPE_8__ {scalar_t__ revocationReason; int * revocationTime; } ;
struct TYPE_7__ {int * nextUpdate; int * thisUpdate; TYPE_4__* certStatus; } ;
typedef TYPE_2__ OCSP_SINGLERESP ;
typedef TYPE_3__ OCSP_REVOKEDINFO ;
typedef TYPE_4__ OCSP_CERTSTATUS ;
typedef int ASN1_GENERALIZEDTIME ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;

int FUNC_1(OCSP_SINGLERESP *VAR_1, int *VAR_2,
                            ASN1_GENERALIZEDTIME **VAR_3,
                            ASN1_GENERALIZEDTIME **VAR_4,
                            ASN1_GENERALIZEDTIME **VAR_5)
{
    int VAR_6;
    OCSP_CERTSTATUS *VAR_7;
    if (!VAR_1)
        return -1;
    VAR_7 = VAR_1->certStatus;
    VAR_6 = VAR_7->type;
    if (VAR_6 == VAR_0) {
        OCSP_REVOKEDINFO *VAR_8 = VAR_7->value.revoked;
        if (VAR_3)
            *VAR_3 = VAR_8->revocationTime;
        if (VAR_2) {
            if (VAR_8->revocationReason)
                *VAR_2 = FUNC_0(VAR_8->revocationReason);
            else
                *VAR_2 = -1;
        }
    }
    if (VAR_4)
        *VAR_4 = VAR_1->thisUpdate;
    if (VAR_5)
        *VAR_5 = VAR_1->nextUpdate;
    return VAR_6;
}

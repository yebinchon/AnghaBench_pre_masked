
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ type; } ;
struct TYPE_15__ {scalar_t__ type; } ;
struct TYPE_14__ {int version; int signerInfos; TYPE_1__* encapContentInfo; int crls; int certificates; } ;
struct TYPE_13__ {int version; TYPE_2__* sid; } ;
struct TYPE_12__ {scalar_t__ type; } ;
struct TYPE_11__ {int eContentType; } ;
typedef TYPE_3__ CMS_SignerInfo ;
typedef TYPE_4__ CMS_SignedData ;
typedef TYPE_5__ CMS_RevocationInfoChoice ;
typedef TYPE_6__ CMS_CertificateChoices ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_6__* FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 TYPE_5__* FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 TYPE_3__* FUNC_6 (int ,int) ;

__attribute__((used)) static void FUNC_7(CMS_SignedData *VAR_6)
{
    int VAR_7;
    CMS_CertificateChoices *VAR_8;
    CMS_RevocationInfoChoice *VAR_9;
    CMS_SignerInfo *VAR_10;

    for (VAR_7 = 0; VAR_7 < FUNC_1(VAR_6->certificates); VAR_7++) {
        VAR_8 = FUNC_2(VAR_6->certificates, VAR_7);
        if (VAR_8->type == VAR_0) {
            if (VAR_6->version < 5)
                VAR_6->version = 5;
        } else if (VAR_8->type == VAR_2) {
            if (VAR_6->version < 4)
                VAR_6->version = 4;
        } else if (VAR_8->type == VAR_1) {
            if (VAR_6->version < 3)
                VAR_6->version = 3;
        }
    }

    for (VAR_7 = 0; VAR_7 < FUNC_3(VAR_6->crls); VAR_7++) {
        VAR_9 = FUNC_4(VAR_6->crls, VAR_7);
        if (VAR_9->type == VAR_3) {
            if (VAR_6->version < 5)
                VAR_6->version = 5;
        }
    }

    if ((FUNC_0(VAR_6->encapContentInfo->eContentType) != VAR_5)
        && (VAR_6->version < 3))
        VAR_6->version = 3;

    for (VAR_7 = 0; VAR_7 < FUNC_5(VAR_6->signerInfos); VAR_7++) {
        VAR_10 = FUNC_6(VAR_6->signerInfos, VAR_7);
        if (VAR_10->sid->type == VAR_4) {
            if (VAR_10->version < 3)
                VAR_10->version = 3;
            if (VAR_6->version < 3)
                VAR_6->version = 3;
        } else if (VAR_10->version < 1)
            VAR_10->version = 1;
    }

    if (VAR_6->version < 1)
        VAR_6->version = 1;

}

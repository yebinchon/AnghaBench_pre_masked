
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int hx509_context ;
typedef int hx509_cert ;
struct TYPE_6__ {scalar_t__ generalTime; } ;
struct TYPE_7__ {TYPE_1__ u; int element; } ;
struct TYPE_10__ {int * crlEntryExtensions; TYPE_2__ revocationDate; int userCertificate; } ;
struct TYPE_9__ {TYPE_3__* revokedCertificates; } ;
struct TYPE_8__ {unsigned int len; TYPE_5__* val; } ;
typedef TYPE_4__ TBSCRLCertList ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (TYPE_5__*,unsigned int) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(hx509_context VAR_2, void *VAR_3, hx509_cert VAR_4)
{
    TBSCRLCertList *VAR_5 = VAR_3;
    unsigned int VAR_6;
    void *VAR_7;
    int VAR_8;

    VAR_6 = VAR_5->revokedCertificates->len;
    VAR_7 = FUNC_2(VAR_5->revokedCertificates->val,
    (VAR_6 + 1) * sizeof(VAR_5->revokedCertificates->val[0]));
    if (VAR_7 == ((void*)0)) {
 FUNC_1(VAR_2);
 return VAR_0;
    }
    VAR_5->revokedCertificates->val = VAR_7;

    VAR_8 = FUNC_0(VAR_4,
          &VAR_5->revokedCertificates->val[VAR_6].userCertificate);
    if (VAR_8) {
 FUNC_1(VAR_2);
 return VAR_8;
    }
    VAR_5->revokedCertificates->val[VAR_6].revocationDate.element =
 VAR_1;
    VAR_5->revokedCertificates->val[VAR_6].revocationDate.u.generalTime =
 FUNC_3(((void*)0)) - 3600 * 24;
    VAR_5->revokedCertificates->val[VAR_6].crlEntryExtensions = ((void*)0);

    VAR_5->revokedCertificates->len++;

    return 0;
}

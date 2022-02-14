
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int algorithm; } ;
struct TYPE_5__ {int serialNumber; int issuerKeyHash; int issuerNameHash; TYPE_1__ hashAlgorithm; } ;
typedef TYPE_2__ OCSP_CERTID ;
typedef int BIO ;


 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *,int ) ;

__attribute__((used)) static int FUNC_4(BIO *VAR_0, OCSP_CERTID *VAR_1, int VAR_2)
{
    FUNC_0(VAR_0, "%*sCertificate ID:\n", VAR_2, "");
    VAR_2 += 2;
    FUNC_0(VAR_0, "%*sHash Algorithm: ", VAR_2, "");
    FUNC_2(VAR_0, VAR_1->hashAlgorithm.algorithm);
    FUNC_0(VAR_0, "\n%*sIssuer Name Hash: ", VAR_2, "");
    FUNC_3(VAR_0, &VAR_1->issuerNameHash, 0);
    FUNC_0(VAR_0, "\n%*sIssuer Key Hash: ", VAR_2, "");
    FUNC_3(VAR_0, &VAR_1->issuerKeyHash, 0);
    FUNC_0(VAR_0, "\n%*sSerial Number: ", VAR_2, "");
    FUNC_1(VAR_0, &VAR_1->serialNumber);
    FUNC_0(VAR_0, "\n");
    return 1;
}

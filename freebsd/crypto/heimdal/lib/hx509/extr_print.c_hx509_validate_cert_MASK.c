
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_11__ ;


struct cert_status {int selfsigned; int haveCRLDP; scalar_t__ haveSAN; scalar_t__ haveIAN; scalar_t__ isproxy; scalar_t__ isca; int haveSKI; int haveAKI; } ;
typedef int status ;
typedef TYPE_3__* hx509_validate_ctx ;
typedef int hx509_name ;
typedef int hx509_context ;
typedef int hx509_cert ;
struct TYPE_20__ {int extnID; scalar_t__ critical; } ;
struct TYPE_15__ {int notAfter; int notBefore; } ;
struct TYPE_18__ {int* version; int _save; TYPE_2__* extensions; TYPE_1__ validity; } ;
struct TYPE_19__ {int signatureValue; TYPE_4__ tbsCertificate; int signatureAlgorithm; } ;
struct TYPE_17__ {int flags; } ;
struct TYPE_16__ {size_t len; TYPE_8__* val; } ;
struct TYPE_14__ {int cf; int (* func ) (TYPE_3__*,struct cert_status*,int ,TYPE_8__*) ;int * name; int oid; } ;
typedef TYPE_4__ TBSCertificate ;
typedef TYPE_5__ Certificate ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char**) ;
 int FUNC_1 (TYPE_5__*) ;
 TYPE_5__* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int *,int *,int *) ;
 int FUNC_4 () ;
 TYPE_11__* VAR_2 ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int ,char**) ;
 int FUNC_13 (int *,int ,TYPE_3__*) ;
 int FUNC_14 (struct cert_status*,int ,int) ;
 int FUNC_15 (TYPE_3__*,struct cert_status*,int ,TYPE_8__*) ;
 int FUNC_16 (TYPE_3__*,int,char*,...) ;
 int VAR_3 ;

int
FUNC_17(hx509_context VAR_4,
      hx509_validate_ctx VAR_5,
      hx509_cert VAR_6)
{
    Certificate *VAR_7 = FUNC_2(VAR_6);
    TBSCertificate *VAR_8 = &VAR_7->tbsCertificate;
    hx509_name VAR_9, VAR_10;
    char *VAR_11;
    struct cert_status VAR_12;
    int VAR_13;

    FUNC_14(&VAR_12, 0, sizeof(VAR_12));

    if (FUNC_1(VAR_7) != 3)
 FUNC_16(VAR_5, VAR_1,
         "Not version 3 certificate\n");

    if ((VAR_8->version == ((void*)0) || *VAR_8->version < 2) && VAR_8->extensions)
 FUNC_16(VAR_5, VAR_0,
         "Not version 3 certificate with extensions\n");

    if (FUNC_1(VAR_7) >= 3 && VAR_8->extensions == ((void*)0))
 FUNC_16(VAR_5, VAR_0,
         "Version 3 certificate without extensions\n");

    VAR_13 = FUNC_8(VAR_6, &VAR_10);
    if (VAR_13) FUNC_4();
    FUNC_12(VAR_10, &VAR_11);
    FUNC_16(VAR_5, VAR_1,
     "subject name: %s\n", VAR_11);
    FUNC_6(VAR_11);

    VAR_13 = FUNC_7(VAR_6, &VAR_9);
    if (VAR_13) FUNC_4();
    FUNC_12(VAR_9, &VAR_11);
    FUNC_16(VAR_5, VAR_1,
     "issuer name: %s\n", VAR_11);
    FUNC_6(VAR_11);

    if (FUNC_9(VAR_10, VAR_9) == 0) {
 VAR_12.selfsigned = 1;
 FUNC_16(VAR_5, VAR_1,
         "\tis a self-signed certificate\n");
    }

    FUNC_16(VAR_5, VAR_1,
     "Validity:\n");

    FUNC_0(&VAR_8->validity.notBefore, &VAR_11);
    FUNC_16(VAR_5, VAR_1, "\tnotBefore %s\n", VAR_11);
    FUNC_6(VAR_11);
    FUNC_0(&VAR_8->validity.notAfter, &VAR_11);
    FUNC_16(VAR_5, VAR_1, "\tnotAfter  %s\n", VAR_11);
    FUNC_6(VAR_11);

    if (VAR_8->extensions) {
 size_t VAR_14, VAR_15;

 if (VAR_8->extensions->len == 0) {
     FUNC_16(VAR_5,
      VAR_0|VAR_1,
      "The empty extensions list is not "
      "allowed by PKIX\n");
 }

 for (VAR_14 = 0; VAR_14 < VAR_8->extensions->len; VAR_14++) {

     for (VAR_15 = 0; VAR_2[VAR_15].name; VAR_15++)
  if (FUNC_5(VAR_2[VAR_15].oid,
         &VAR_8->extensions->val[VAR_14].extnID) == 0)
      break;
     if (VAR_2[VAR_15].name == ((void*)0)) {
  int VAR_16 = VAR_1;
  if (VAR_8->extensions->val[VAR_14].critical)
      VAR_16 |= VAR_0;
  FUNC_16(VAR_5, VAR_16, "don't know what ");
  if (VAR_8->extensions->val[VAR_14].critical)
      FUNC_16(VAR_5, VAR_16, "and is CRITICAL ");
  if (VAR_5->flags & VAR_16)
      FUNC_13(&VAR_8->extensions->val[VAR_14].extnID,
        VAR_3, VAR_5);
  FUNC_16(VAR_5, VAR_16, " is\n");
  continue;
     }
     FUNC_16(VAR_5,
      VAR_0|VAR_1,
      "checking extention: %s\n",
      VAR_2[VAR_15].name);
     (*VAR_2[VAR_15].func)(VAR_5,
           &VAR_12,
           VAR_2[VAR_15].cf,
           &VAR_8->extensions->val[VAR_14]);
 }
    } else
 FUNC_16(VAR_5, VAR_1, "no extentions\n");

    if (VAR_12.isca) {
 if (!VAR_12.haveSKI)
     FUNC_16(VAR_5, VAR_0,
      "CA certificate have no SubjectKeyIdentifier\n");

    } else {
 if (!VAR_12.haveAKI)
     FUNC_16(VAR_5, VAR_0,
      "Is not CA and doesn't have "
      "AuthorityKeyIdentifier\n");
    }


    if (!VAR_12.haveSKI)
 FUNC_16(VAR_5, VAR_0,
         "Doesn't have SubjectKeyIdentifier\n");

    if (VAR_12.isproxy && VAR_12.isca)
 FUNC_16(VAR_5, VAR_0,
         "Proxy and CA at the same time!\n");

    if (VAR_12.isproxy) {
 if (VAR_12.haveSAN)
     FUNC_16(VAR_5, VAR_0,
      "Proxy and have SAN\n");
 if (VAR_12.haveIAN)
     FUNC_16(VAR_5, VAR_0,
      "Proxy and have IAN\n");
    }

    if (FUNC_11(VAR_10) && !VAR_12.haveSAN)
 FUNC_16(VAR_5, VAR_0,
         "NULL subject DN and doesn't have a SAN\n");

    if (!VAR_12.selfsigned && !VAR_12.haveCRLDP)
 FUNC_16(VAR_5, VAR_0,
         "Not a CA nor PROXY and doesn't have"
         "CRL Dist Point\n");

    if (VAR_12.selfsigned) {
 VAR_13 = FUNC_3(VAR_4,
      VAR_6,
      &VAR_7->signatureAlgorithm,
      &VAR_7->tbsCertificate._save,
      &VAR_7->signatureValue);
 if (VAR_13 == 0)
     FUNC_16(VAR_5, VAR_1,
      "Self-signed certificate was self-signed\n");
 else
     FUNC_16(VAR_5, VAR_0,
      "Self-signed certificate NOT really self-signed!\n");
    }

    FUNC_10(&VAR_10);
    FUNC_10(&VAR_9);

    return 0;
}

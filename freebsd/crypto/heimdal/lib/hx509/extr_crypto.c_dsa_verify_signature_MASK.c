
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct signature_alg {int dummy; } ;
typedef int hx509_context ;
struct TYPE_18__ {int length; scalar_t__ data; } ;
typedef TYPE_5__ heim_octet_string ;
struct TYPE_17__ {TYPE_3__* parameters; } ;
struct TYPE_15__ {int length; int data; } ;
struct TYPE_19__ {TYPE_4__ algorithm; TYPE_2__ subjectPublicKey; } ;
struct TYPE_14__ {TYPE_6__ subjectPublicKeyInfo; } ;
struct TYPE_21__ {TYPE_1__ tbsCertificate; } ;
struct TYPE_20__ {int g; int q; int p; } ;
struct TYPE_16__ {int length; int data; } ;
typedef TYPE_6__ SubjectPublicKeyInfo ;
typedef int DSAPublicKey ;
typedef TYPE_7__ DSAParams ;
typedef int DSA ;
typedef TYPE_8__ Certificate ;
typedef int BIGNUM ;
typedef int AlgorithmIdentifier ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (int *,int *,int *,int *) ;
 int FUNC_5 (int,scalar_t__,int ,unsigned char*,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int ,int ,TYPE_7__*,size_t*) ;
 int FUNC_7 (int ,int,int *,size_t*) ;
 int FUNC_8 (TYPE_7__*) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int *) ;
 int FUNC_11 (int ,int ,int,char*) ;

__attribute__((used)) static int
FUNC_12(hx509_context VAR_4,
       const struct signature_alg *VAR_5,
       const Certificate *VAR_6,
       const AlgorithmIdentifier *VAR_7,
       const heim_octet_string *VAR_8,
       const heim_octet_string *VAR_9)
{
    const SubjectPublicKeyInfo *VAR_10;
    DSAPublicKey VAR_11;
    DSAParams VAR_12;
    size_t VAR_13;
    BIGNUM *VAR_14, *VAR_15, *VAR_16, *VAR_17;
    DSA *VAR_18;
    int VAR_19;

    VAR_10 = &VAR_6->tbsCertificate.subjectPublicKeyInfo;

    VAR_18 = FUNC_2();
    if (VAR_18 == ((void*)0)) {
 FUNC_11(VAR_4, 0, VAR_1, "out of memory");
 return VAR_1;
    }

    VAR_19 = FUNC_7(VAR_10->subjectPublicKey.data,
         VAR_10->subjectPublicKey.length / 8,
         &VAR_11, &VAR_13);
    if (VAR_19)
 goto out;

    VAR_14 = FUNC_10(&VAR_11);

    FUNC_9(&VAR_11);

    if (VAR_14 == ((void*)0)) {
 VAR_19 = VAR_1;
 FUNC_11(VAR_4, 0, VAR_19, "out of memory");
 goto out;
    }

    VAR_19 = FUNC_3(VAR_18, VAR_14, ((void*)0));

    if (VAR_19 != 1) {
 FUNC_0(VAR_14);
 VAR_19 = VAR_0;
 FUNC_11(VAR_4, 0, VAR_19, "failed to set DSA key");
 goto out;
    }

    if (VAR_10->algorithm.parameters == ((void*)0)) {
 VAR_19 = VAR_3;
 FUNC_11(VAR_4, 0, VAR_19, "DSA parameters missing");
 goto out;
    }

    VAR_19 = FUNC_6(VAR_10->algorithm.parameters->data,
      VAR_10->algorithm.parameters->length,
      &VAR_12,
      &VAR_13);
    if (VAR_19) {
 FUNC_11(VAR_4, 0, VAR_19, "DSA parameters failed to decode");
 goto out;
    }

    VAR_15 = FUNC_10(&VAR_12.p);
    VAR_16 = FUNC_10(&VAR_12.q);
    VAR_17 = FUNC_10(&VAR_12.g);

    FUNC_8(&VAR_12);

    if (VAR_15 == ((void*)0) || VAR_16 == ((void*)0) || VAR_17 == ((void*)0)) {
 FUNC_0(VAR_15);
 FUNC_0(VAR_16);
 FUNC_0(VAR_17);
 VAR_19 = VAR_1;
 FUNC_11(VAR_4, 0, VAR_19, "out of memory");
 goto out;
    }

    VAR_19 = FUNC_4(VAR_18, VAR_15, VAR_16, VAR_17);

    if (VAR_19 != 1) {
 FUNC_0(VAR_15);
 FUNC_0(VAR_16);
 FUNC_0(VAR_17);
 VAR_19 = VAR_0;
 FUNC_11(VAR_4, 0, VAR_19, "failed to set DSA parameters");
 goto out;
    }

    VAR_19 = FUNC_5(-1, VAR_8->data, VAR_8->length,
       (unsigned char*)VAR_9->data, VAR_9->length,
       VAR_18);
    if (VAR_19 == 1)
 VAR_19 = 0;
    else if (VAR_19 == 0 || VAR_19 == -1) {
 VAR_19 = VAR_2;
 FUNC_11(VAR_4, 0, VAR_19, "BAD DSA sigature");
    } else {
 VAR_19 = VAR_3;
 FUNC_11(VAR_4, 0, VAR_19, "Invalid format of DSA sigature");
    }

 out:
    FUNC_1(VAR_18);

    return VAR_19;
}

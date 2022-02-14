
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef TYPE_4__* hx509_private_key ;
typedef int hx509_cert ;
struct TYPE_14__ {int length; int data; } ;
struct TYPE_16__ {TYPE_3__ subjectPublicKey; } ;
struct TYPE_13__ {TYPE_5__ subjectPublicKeyInfo; } ;
struct TYPE_18__ {TYPE_2__ tbsCertificate; } ;
struct TYPE_17__ {int publicExponent; int modulus; } ;
struct TYPE_12__ {int * rsa; } ;
struct TYPE_15__ {TYPE_1__ private_key; } ;
typedef TYPE_5__ SubjectPublicKeyInfo ;
typedef TYPE_6__ RSAPublicKey ;
typedef int RSA ;
typedef TYPE_7__ Certificate ;
typedef int BIGNUM ;


 int * FUNC_0 (int const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int const**,int const**,int const**) ;
 int FUNC_5 (int *,int const**,int const**) ;
 int FUNC_6 (int *,int *,int *,int const**) ;
 int * FUNC_7 () ;
 int FUNC_8 (int *,int *,int *,int *) ;
 int FUNC_9 (int *,int *,int *) ;
 int FUNC_10 (int *,int *,int *,int *) ;
 TYPE_7__* FUNC_11 (int ) ;
 int FUNC_12 (int ,int,TYPE_6__*,size_t*) ;
 int FUNC_13 (TYPE_6__*) ;
 int * FUNC_14 (int *) ;

__attribute__((used)) static int
FUNC_15(hx509_cert VAR_0, hx509_private_key VAR_1)
{
    const Certificate *VAR_2;
    const SubjectPublicKeyInfo *VAR_3;
    RSAPublicKey VAR_4;
    RSA *VAR_5;
    const BIGNUM *VAR_6, *VAR_7, *VAR_8, *VAR_9, *VAR_10, *VAR_11;
    BIGNUM *VAR_12, *VAR_13, *VAR_14, *VAR_15, *VAR_16, *VAR_17, *VAR_18, *VAR_19;
    size_t VAR_20;
    int VAR_21;

    if (VAR_1->private_key.rsa == ((void*)0))
 return 0;

    VAR_5 = VAR_1->private_key.rsa;
    FUNC_6(VAR_5, ((void*)0), ((void*)0), &VAR_6);
    FUNC_5(VAR_5, &VAR_7, &VAR_8);
    FUNC_4(VAR_5, &VAR_9, &VAR_10, &VAR_11);
    if (VAR_6 == ((void*)0) || VAR_7 == ((void*)0) || VAR_8 == ((void*)0))
 return 0;

    VAR_2 = FUNC_11(VAR_0);
    VAR_3 = &VAR_2->tbsCertificate.subjectPublicKeyInfo;

    VAR_5 = FUNC_7();
    if (VAR_5 == ((void*)0))
 return 0;

    VAR_21 = FUNC_12(VAR_3->subjectPublicKey.data,
         VAR_3->subjectPublicKey.length / 8,
         &VAR_4, &VAR_20);
    if (VAR_21) {
 FUNC_3(VAR_5);
 return 0;
    }
    VAR_18 = FUNC_14(&VAR_4.modulus);
    VAR_19 = FUNC_14(&VAR_4.publicExponent);

    FUNC_13(&VAR_4);

    VAR_12 = FUNC_0(VAR_6);
    VAR_13 = FUNC_0(VAR_7);
    VAR_14 = FUNC_0(VAR_8);
    VAR_15 = FUNC_0(VAR_9);
    VAR_16 = FUNC_0(VAR_10);
    VAR_17 = FUNC_0(VAR_11);

    if (VAR_18 == ((void*)0) || VAR_19 == ((void*)0) ||
 VAR_12 == ((void*)0) || VAR_13 == ((void*)0)|| VAR_14 == ((void*)0) ||
 VAR_15 == ((void*)0) || VAR_16 == ((void*)0) || VAR_17 == ((void*)0)) {
 FUNC_1(VAR_18);
 FUNC_1(VAR_19);
 FUNC_1(VAR_12);
 FUNC_1(VAR_13);
 FUNC_1(VAR_14);
 FUNC_1(VAR_15);
 FUNC_1(VAR_16);
 FUNC_1(VAR_17);
 FUNC_3(VAR_5);
 return 0;
    }

    VAR_21 = FUNC_10(VAR_5, VAR_12, VAR_18, VAR_19);

    if (VAR_21 != 1) {
 FUNC_1(VAR_18);
 FUNC_1(VAR_19);
 FUNC_1(VAR_12);
 FUNC_1(VAR_13);
 FUNC_1(VAR_14);
 FUNC_1(VAR_15);
 FUNC_1(VAR_16);
 FUNC_1(VAR_17);
 FUNC_3(VAR_5);
 return 0;
    }

    VAR_21 = FUNC_9(VAR_5, VAR_13, VAR_14);

    if (VAR_21 != 1) {
 FUNC_1(VAR_13);
 FUNC_1(VAR_14);
 FUNC_1(VAR_15);
 FUNC_1(VAR_16);
 FUNC_1(VAR_17);
 FUNC_3(VAR_5);
 return 0;
    }

    VAR_21 = FUNC_8(VAR_5, VAR_15, VAR_16, VAR_17);

    if (VAR_21 != 1) {
 FUNC_1(VAR_15);
 FUNC_1(VAR_16);
 FUNC_1(VAR_17);
 FUNC_3(VAR_5);
 return 0;
    }

    VAR_21 = FUNC_2(VAR_5);
    FUNC_3(VAR_5);

    return VAR_21 == 1;
}

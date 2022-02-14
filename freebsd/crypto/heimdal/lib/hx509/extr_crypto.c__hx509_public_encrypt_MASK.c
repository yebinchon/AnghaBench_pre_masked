
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int hx509_context ;
typedef int heim_oid ;
struct TYPE_12__ {unsigned char* data; int length; } ;
typedef TYPE_3__ heim_octet_string ;
struct TYPE_11__ {unsigned char* data; int length; } ;
struct TYPE_13__ {TYPE_2__ subjectPublicKey; } ;
struct TYPE_10__ {TYPE_4__ subjectPublicKeyInfo; } ;
struct TYPE_14__ {TYPE_1__ tbsCertificate; } ;
typedef TYPE_4__ SubjectPublicKeyInfo ;
typedef int RSA ;
typedef TYPE_5__ Certificate ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,unsigned char*,unsigned char*,int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int * FUNC_4 (int *,unsigned char const**,size_t) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (unsigned char*) ;
 int FUNC_8 (int ,int ,int,char*,...) ;
 unsigned char* FUNC_9 (int) ;

int
FUNC_10(hx509_context VAR_4,
        const heim_octet_string *VAR_5,
        const Certificate *VAR_6,
        heim_oid *VAR_7,
        heim_octet_string *VAR_8)
{
    const SubjectPublicKeyInfo *VAR_9;
    unsigned char *VAR_10;
    int VAR_11;
    int VAR_12;
    RSA *VAR_13;
    size_t VAR_14;
    const unsigned char *VAR_15;

    VAR_8->data = ((void*)0);
    VAR_8->length = 0;

    VAR_9 = &VAR_6->tbsCertificate.subjectPublicKeyInfo;

    VAR_15 = VAR_9->subjectPublicKey.data;
    VAR_14 = VAR_9->subjectPublicKey.length / 8;

    VAR_13 = FUNC_4(((void*)0), &VAR_15, VAR_14);
    if (VAR_13 == ((void*)0)) {
 FUNC_8(VAR_4, 0, VAR_1, "out of memory");
 return VAR_1;
    }

    VAR_11 = FUNC_2(VAR_13);
    VAR_10 = FUNC_9(VAR_11);
    if (VAR_10 == ((void*)0)) {
 FUNC_0(VAR_13);
 FUNC_8(VAR_4, 0, VAR_1, "out of memory");
 return VAR_1;
    }

    VAR_12 = FUNC_1(VAR_5->length,
        (unsigned char *)VAR_5->data,
        VAR_10, VAR_13, VAR_3);
    FUNC_0(VAR_13);
    if (VAR_12 <= 0) {
 FUNC_7(VAR_10);
 FUNC_8(VAR_4, 0, VAR_2,
          "RSA public encrypt failed with %d", VAR_12);
 return VAR_2;
    }
    if (VAR_12 > VAR_11)
 FUNC_3("internal rsa decryption failure: ret > tosize");

    VAR_8->length = VAR_12;
    VAR_8->data = VAR_10;

    VAR_12 = FUNC_5(VAR_0, VAR_7);
    if (VAR_12) {
 FUNC_6(VAR_8);
 FUNC_8(VAR_4, 0, VAR_1, "out of memory");
 return VAR_1;
    }

    return 0;
}

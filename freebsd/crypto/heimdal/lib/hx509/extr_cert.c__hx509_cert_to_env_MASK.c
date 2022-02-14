
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int hx509_name ;
typedef int * hx509_env ;
typedef int hx509_context ;
typedef int hx509_cert ;
struct TYPE_17__ {int length; int data; } ;
typedef TYPE_4__ heim_octet_string ;
struct TYPE_14__ {int length; int data; } ;
struct TYPE_15__ {TYPE_1__ subjectPublicKey; } ;
struct TYPE_16__ {TYPE_2__ subjectPublicKeyInfo; } ;
struct TYPE_19__ {TYPE_3__ tbsCertificate; } ;
struct TYPE_18__ {size_t len; int * val; } ;
typedef TYPE_5__ ExtKeyUsage ;
typedef TYPE_6__ Certificate ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,TYPE_5__*) ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (int ,int *,int ,TYPE_4__*,int *,TYPE_4__*) ;
 TYPE_6__* FUNC_3 (int ) ;
 int FUNC_4 (char**,char*,int ) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (int *,char,char**) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (TYPE_5__*) ;
 int FUNC_9 (int ,int,char**) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (int ,int **,char*,char*) ;
 int FUNC_13 (int ,int **,char*,int *) ;
 int FUNC_14 (int **) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int ,char**) ;
 int FUNC_17 (int ,int ,int,char*) ;
 int FUNC_18 () ;
 int FUNC_19 (char*) ;

int
FUNC_20(hx509_context VAR_2, hx509_cert VAR_3, hx509_env *VAR_4)
{
    ExtKeyUsage VAR_5;
    hx509_name VAR_6;
    char *VAR_7;
    int VAR_8;
    hx509_env VAR_9 = ((void*)0);

    *VAR_4 = ((void*)0);


    FUNC_4(&VAR_7, "%d", FUNC_1(FUNC_3(VAR_3)));
    VAR_8 = FUNC_12(VAR_2, &VAR_9, "version", VAR_7);
    FUNC_7(VAR_7);
    if (VAR_8)
 goto out;


    VAR_8 = FUNC_11(VAR_3, &VAR_6);
    if (VAR_8)
 goto out;

    VAR_8 = FUNC_16(VAR_6, &VAR_7);
    if (VAR_8) {
 FUNC_15(&VAR_6);
 goto out;
    }

    VAR_8 = FUNC_12(VAR_2, &VAR_9, "subject", VAR_7);
    FUNC_15(&VAR_6);
    if (VAR_8)
 goto out;


    VAR_8 = FUNC_10(VAR_3, &VAR_6);
    if (VAR_8)
 goto out;

    VAR_8 = FUNC_16(VAR_6, &VAR_7);
    FUNC_15(&VAR_6);
    if (VAR_8)
 goto out;

    VAR_8 = FUNC_12(VAR_2, &VAR_9, "issuer", VAR_7);
    FUNC_19(VAR_7);
    if (VAR_8)
 goto out;



    VAR_8 = FUNC_0(VAR_2, VAR_3, &VAR_5);
    if (VAR_8 == VAR_1)
 ;
    else if (VAR_8 != 0)
 goto out;
    else {
 size_t VAR_10;
 hx509_env VAR_11 = ((void*)0);

 for (VAR_10 = 0; VAR_10 < VAR_5.len; VAR_10++) {

     VAR_8 = FUNC_6(&VAR_5.val[VAR_10], '.', &VAR_7);
     if (VAR_8) {
  FUNC_8(&VAR_5);
  FUNC_14(&VAR_11);
  goto out;
     }
     VAR_8 = FUNC_12(VAR_2, &VAR_11, VAR_7, "oid-name-here");
     FUNC_7(VAR_7);
     if (VAR_8) {
  FUNC_8(&VAR_5);
  FUNC_14(&VAR_11);
  goto out;
     }
 }
 FUNC_8(&VAR_5);

 VAR_8 = FUNC_13(VAR_2, &VAR_9, "eku", VAR_11);
 if (VAR_8) {
     FUNC_14(&VAR_11);
     goto out;
 }
    }

    {
 Certificate *VAR_12 = FUNC_3(VAR_3);
        heim_octet_string VAR_13, VAR_14;
 hx509_env VAR_15 = ((void*)0);

 VAR_13.data = VAR_12->tbsCertificate.subjectPublicKeyInfo.subjectPublicKey.data;
 VAR_13.length =
   VAR_12->tbsCertificate.subjectPublicKeyInfo.subjectPublicKey.length / 8;

 VAR_8 = FUNC_2(VAR_2,
          ((void*)0),
          FUNC_18(),
          &VAR_13,
          ((void*)0),
          &VAR_14);
 if (VAR_8 != 0)
     goto out;

 VAR_8 = FUNC_9(VAR_14.data, VAR_14.length, &VAR_7);
 FUNC_5(&VAR_14);
 if (VAR_8 < 0) {
     VAR_8 = VAR_0;
     FUNC_17(VAR_2, 0, VAR_8,
       "Out of memory");
     goto out;
 }

 VAR_8 = FUNC_12(VAR_2, &VAR_15, "sha1", VAR_7);
 FUNC_7(VAR_7);
 if (VAR_8)
     goto out;

 VAR_8 = FUNC_13(VAR_2, &VAR_9, "hash", VAR_15);
 if (VAR_8) {
   FUNC_14(&VAR_15);
   goto out;
 }
    }

    VAR_8 = FUNC_13(VAR_2, VAR_4, "certificate", VAR_9);
    if (VAR_8)
 goto out;

    return 0;

out:
    FUNC_14(&VAR_9);
    return VAR_8;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int hx509_crypto ;
typedef int hx509_context ;
typedef int heim_oid ;
struct TYPE_10__ {int length; int data; } ;
typedef TYPE_2__ heim_octet_string ;
struct TYPE_9__ {unsigned char* data; int length; } ;
struct TYPE_11__ {int* iterations; TYPE_1__ salt; } ;
typedef TYPE_3__ PKCS12_PBEParams ;
typedef int EVP_MD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const*,int,unsigned char*,int,int ,int,int ,int ,int const*) ;
 int FUNC_1 (int ,int ,TYPE_3__*,int *) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *,int const*,int *) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (char const*) ;

__attribute__((used)) static int
FUNC_8(hx509_context VAR_4,
        const char *VAR_5,
        const heim_octet_string *VAR_6,
        hx509_crypto *VAR_7,
        heim_octet_string *VAR_8, heim_octet_string *VAR_9,
        const heim_oid *VAR_10,
        const EVP_MD *VAR_11)
{
    PKCS12_PBEParams VAR_12;
    int VAR_13;
    hx509_crypto VAR_14;
    int VAR_15, VAR_16, VAR_17;
    unsigned char *VAR_18;

    VAR_13 = VAR_5 ? FUNC_7(VAR_5) : 0;

    if (VAR_6 == ((void*)0))
  return VAR_0;

    VAR_17 = FUNC_1(VAR_6->data,
      VAR_6->length,
      &VAR_12, ((void*)0));
    if (VAR_17)
 goto out;

    if (VAR_12.iterations)
 VAR_15 = *VAR_12.iterations;
    else
 VAR_15 = 1;
    VAR_18 = VAR_12.salt.data;
    VAR_16 = VAR_12.salt.length;

    if (!FUNC_0 (VAR_5, VAR_13, VAR_18, VAR_16,
    VAR_3, VAR_15, VAR_8->length, VAR_8->data, VAR_11)) {
 VAR_17 = VAR_1;
 goto out;
    }

    if (!FUNC_0 (VAR_5, VAR_13, VAR_18, VAR_16,
    VAR_2, VAR_15, VAR_9->length, VAR_9->data, VAR_11)) {
 VAR_17 = VAR_1;
 goto out;
    }

    VAR_17 = FUNC_5(VAR_4, ((void*)0), VAR_10, &VAR_14);
    if (VAR_17)
 goto out;

    FUNC_3(VAR_14);

    VAR_17 = FUNC_6(VAR_14, VAR_8->data, VAR_8->length);
    if (VAR_17) {
 FUNC_4(VAR_14);
 goto out;
    }

    *VAR_7 = VAR_14;
out:
    FUNC_2(&VAR_12);
    return VAR_17;
}

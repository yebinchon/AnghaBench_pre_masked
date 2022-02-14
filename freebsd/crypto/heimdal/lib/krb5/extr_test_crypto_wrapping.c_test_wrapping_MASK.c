
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int krb5_keyblock ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_enctype ;
struct TYPE_4__ {size_t length; } ;
typedef TYPE_1__ krb5_data ;
typedef int krb5_crypto ;
typedef int krb5_context ;


 int FUNC_0 (void*) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int *,int ,int *) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int ,int ,int ,void*,size_t,TYPE_1__*) ;
 scalar_t__ FUNC_5 (int ,int ,char**) ;
 int FUNC_6 (int ,int,scalar_t__,char*,...) ;
 int FUNC_7 (int ,int,char*,...) ;
 int FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (int ,int ,int *) ;
 size_t FUNC_10 (int ,int ,size_t) ;
 void* FUNC_11 (size_t) ;
 int FUNC_12 (void*,int ,size_t) ;

__attribute__((used)) static void
FUNC_13(krb5_context VAR_0,
       size_t VAR_1,
       size_t VAR_2,
       size_t VAR_3,
       krb5_enctype VAR_4)
{
    krb5_error_code VAR_5;
    krb5_keyblock VAR_6;
    krb5_crypto VAR_7;
    krb5_data VAR_8;
    char *VAR_9;
    void *VAR_10;
    size_t VAR_11;

    VAR_5 = FUNC_9(VAR_0, VAR_4, &VAR_6);
    if (VAR_5)
 FUNC_6(VAR_0, 1, VAR_5, "krb5_generate_random_keyblock");

    VAR_5 = FUNC_5(VAR_0, VAR_4, &VAR_9);
    if (VAR_5)
 FUNC_6(VAR_0, 1, VAR_5, "krb5_enctype_to_string");

    VAR_10 = FUNC_11(VAR_2);
    if (VAR_10 == ((void*)0))
 FUNC_7(VAR_0, 1, "out of memory");
    FUNC_12(VAR_10, 0, VAR_2);

    VAR_5 = FUNC_2(VAR_0, &VAR_6, 0, &VAR_7);
    if (VAR_5)
 FUNC_6(VAR_0, 1, VAR_5, "krb5_crypto_init");

    for (VAR_11 = VAR_1; VAR_11 < VAR_2; VAR_11 += VAR_3) {
 size_t VAR_12;

 VAR_5 = FUNC_4(VAR_0, VAR_7, 0, VAR_10, VAR_11, &VAR_8);
 if (VAR_5)
     FUNC_6(VAR_0, 1, VAR_5, "encrypt size %lu using %s",
       (unsigned long)VAR_11, VAR_9);

 VAR_12 = FUNC_10(VAR_0, VAR_7, VAR_11);

 if (VAR_12 != VAR_8.length)
     FUNC_7(VAR_0, 1, "calculated wrapped length %lu != "
        "real wrapped length %lu for data length %lu using "
        "enctype %s",
        (unsigned long)VAR_12,
        (unsigned long)VAR_8.length,
        (unsigned long)VAR_11,
        VAR_9);
 FUNC_3(&VAR_8);
    }

    FUNC_0(VAR_9);
    FUNC_0(VAR_10);
    FUNC_1(VAR_0, VAR_7);
    FUNC_8(VAR_0, &VAR_6);
}

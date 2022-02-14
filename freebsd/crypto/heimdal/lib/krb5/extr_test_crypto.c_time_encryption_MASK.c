
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
typedef int krb5_keyblock ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_enctype ;
typedef int krb5_data ;
typedef int krb5_crypto ;
typedef int krb5_context ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct timeval*,int *) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int *,int ,int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,int ,int ,void*,size_t,int *) ;
 scalar_t__ FUNC_6 (int ,int ,char**) ;
 int FUNC_7 (int ,int,scalar_t__,char*,...) ;
 int FUNC_8 (int ,int,char*) ;
 int FUNC_9 (int ,int *) ;
 scalar_t__ FUNC_10 (int ,int ,int *) ;
 void* FUNC_11 (size_t) ;
 int FUNC_12 (void*,int ,size_t) ;
 int FUNC_13 (char*,char*,unsigned long,int,long,long) ;
 int FUNC_14 (struct timeval*,struct timeval*) ;

__attribute__((used)) static void
FUNC_15(krb5_context VAR_0, size_t VAR_1,
  krb5_enctype VAR_2, int VAR_3)
{
    struct timeval VAR_4, VAR_5;
    krb5_error_code VAR_6;
    krb5_keyblock VAR_7;
    krb5_crypto VAR_8;
    krb5_data VAR_9;
    char *VAR_10;
    void *VAR_11;
    int VAR_12;

    VAR_6 = FUNC_10(VAR_0, VAR_2, &VAR_7);
    if (VAR_6)
 FUNC_7(VAR_0, 1, VAR_6, "krb5_generate_random_keyblock");

    VAR_6 = FUNC_6(VAR_0, VAR_2, &VAR_10);
    if (VAR_6)
 FUNC_7(VAR_0, 1, VAR_6, "krb5_enctype_to_string");

    VAR_11 = FUNC_11(VAR_1);
    if (VAR_11 == ((void*)0))
 FUNC_8(VAR_0, 1, "out of memory");
    FUNC_12(VAR_11, 0, VAR_1);

    VAR_6 = FUNC_3(VAR_0, &VAR_7, 0, &VAR_8);
    if (VAR_6)
 FUNC_7(VAR_0, 1, VAR_6, "krb5_crypto_init");

    FUNC_1(&VAR_4, ((void*)0));

    for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++) {
 VAR_6 = FUNC_5(VAR_0, VAR_8, 0, VAR_11, VAR_1, &VAR_9);
 if (VAR_6)
     FUNC_7(VAR_0, 1, VAR_6, "encrypt: %d", VAR_12);
 FUNC_4(&VAR_9);
    }

    FUNC_1(&VAR_5, ((void*)0));

    FUNC_14(&VAR_5, &VAR_4);

    FUNC_13("%s size: %7lu iterations: %d time: %3ld.%06ld\n",
    VAR_10, (unsigned long)VAR_1, VAR_3,
    (long)VAR_5, (long)VAR_5);

    FUNC_0(VAR_11);
    FUNC_0(VAR_10);
    FUNC_2(VAR_0, VAR_8);
    FUNC_9(VAR_0, &VAR_7);
}

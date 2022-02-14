
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
typedef int krb5_salt ;
typedef int krb5_keyblock ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_enctype ;
struct TYPE_3__ {scalar_t__ length; int * data; } ;
typedef TYPE_1__ krb5_data ;
typedef int krb5_context ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct timeval*,int *) ;
 scalar_t__ FUNC_2 (int ,int ,char**) ;
 int FUNC_3 (int ,int,scalar_t__,char*) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ,int ,char const*,int ,TYPE_1__,int *) ;
 int FUNC_6 (char*,char*,int,long,long) ;
 int FUNC_7 (struct timeval*,struct timeval*) ;

__attribute__((used)) static void
FUNC_8(krb5_context VAR_0,
  krb5_enctype VAR_1,
  const char *VAR_2,
  krb5_salt VAR_3,
  int VAR_4)
{
    struct timeval VAR_5, VAR_6;
    krb5_error_code VAR_7;
    krb5_keyblock VAR_8;
    krb5_data VAR_9;
    char *VAR_10;
    int VAR_11;

    VAR_7 = FUNC_2(VAR_0, VAR_1, &VAR_10);
    if (VAR_7)
 FUNC_3(VAR_0, 1, VAR_7, "krb5_enctype_to_string");

    VAR_9.data = ((void*)0);
    VAR_9.length = 0;

    FUNC_1(&VAR_5, ((void*)0));

    for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++) {
 VAR_7 = FUNC_5(VAR_0, VAR_1, VAR_2, VAR_3,
      VAR_9, &VAR_8);
 if (VAR_7)
     FUNC_3(VAR_0, 1, VAR_7, "krb5_string_to_key_data_salt_opaque");
 FUNC_4(VAR_0, &VAR_8);
    }

    FUNC_1(&VAR_6, ((void*)0));

    FUNC_7(&VAR_6, &VAR_5);

    FUNC_6("%s string2key %d iterations time: %3ld.%06ld\n",
    VAR_10, VAR_4, (long)VAR_6, (long)VAR_6);
    FUNC_0(VAR_10);

}

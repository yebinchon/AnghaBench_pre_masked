
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
typedef int krb5_principal ;
typedef scalar_t__ krb5_error_code ;
struct TYPE_8__ {char* data; int length; } ;
typedef TYPE_1__ krb5_data ;
typedef int krb5_auth_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ,int ,int*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ,int,scalar_t__,char*) ;
 scalar_t__ FUNC_7 (int ,int ,TYPE_1__*,TYPE_1__*,int *) ;
 scalar_t__ FUNC_8 (int ,int ,TYPE_1__*,TYPE_1__*,int *) ;
 int FUNC_9 (int ,int*,int*,int) ;
 scalar_t__ FUNC_10 (int ,int *,int*,int ,int *,int ,int ,int *,int *,int *,int *,int *,int *) ;
 scalar_t__ FUNC_11 (int ,char const*,char const*,int ,int *) ;

__attribute__((used)) static int
FUNC_12 (int VAR_4, const char *VAR_5, const char *VAR_6)
{
    krb5_auth_context VAR_7;
    krb5_error_code VAR_8;
    krb5_principal VAR_9;
    krb5_data VAR_10;
    krb5_data VAR_11;
    uint32_t VAR_12, VAR_13;

    VAR_8 = FUNC_2 (VAR_3, &VAR_7);
    if (VAR_8)
 FUNC_6 (VAR_3, 1, VAR_8, "krb5_auth_con_init");

    VAR_8 = FUNC_3 (VAR_3,
          VAR_7,
          &VAR_4);
    if (VAR_8)
 FUNC_6 (VAR_3, 1, VAR_8, "krb5_auth_con_setaddrs_from_fd");

    VAR_8 = FUNC_11 (VAR_3,
          VAR_5,
          VAR_6,
          VAR_1,
          &VAR_9);
    if (VAR_8)
 FUNC_6 (VAR_3, 1, VAR_8, "krb5_sname_to_principal");

    VAR_8 = FUNC_10 (VAR_3,
       &VAR_7,
       &VAR_4,
       VAR_2,
       ((void*)0),
       VAR_9,
       VAR_0,
       ((void*)0),
       ((void*)0),
       ((void*)0),
       ((void*)0),
       ((void*)0),
       ((void*)0));
    if (VAR_8)
 FUNC_6 (VAR_3, 1, VAR_8, "krb5_sendauth");

    VAR_10.data = "hej";
    VAR_10.length = 3;

    FUNC_5 (&VAR_11);

    VAR_8 = FUNC_8 (VAR_3,
      VAR_7,
      &VAR_10,
      &VAR_11,
      ((void*)0));
    if (VAR_8)
 FUNC_6 (VAR_3, 1, VAR_8, "krb5_mk_safe");

    VAR_12 = VAR_11.length;
    VAR_13 = FUNC_1(VAR_12);

    if (FUNC_9 (VAR_3, &VAR_4, &VAR_13, 4) != 4)
 FUNC_0 (1, "krb5_net_write");
    if (FUNC_9 (VAR_3, &VAR_4, VAR_11.data, VAR_12) != VAR_12)
 FUNC_0 (1, "krb5_net_write");

    VAR_10.data = "hemligt";
    VAR_10.length = 7;

    FUNC_4 (&VAR_11);

    VAR_8 = FUNC_7 (VAR_3,
      VAR_7,
      &VAR_10,
      &VAR_11,
      ((void*)0));
    if (VAR_8)
 FUNC_6 (VAR_3, 1, VAR_8, "krb5_mk_priv");

    VAR_12 = VAR_11.length;
    VAR_13 = FUNC_1(VAR_12);

    if (FUNC_9 (VAR_3, &VAR_4, &VAR_13, 4) != 4)
 FUNC_0 (1, "krb5_net_write");
    if (FUNC_9 (VAR_3, &VAR_4, VAR_11.data, VAR_12) != VAR_12)
 FUNC_0 (1, "krb5_net_write");
    return 0;
}

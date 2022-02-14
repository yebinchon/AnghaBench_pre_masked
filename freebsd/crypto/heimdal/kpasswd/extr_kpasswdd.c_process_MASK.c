
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint16_t ;
typedef int u_char ;
struct sockaddr {int dummy; } ;
typedef int other_addr ;
struct TYPE_9__ {int client; } ;
typedef TYPE_1__ krb5_ticket ;
typedef int krb5_realm ;
typedef int krb5_keytab ;
typedef scalar_t__ krb5_error_code ;
struct TYPE_10__ {int length; int * data; } ;
typedef TYPE_2__ krb5_data ;
typedef int * krb5_auth_context ;
typedef int krb5_address ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int,struct sockaddr*,int,TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int ,int **) ;
 scalar_t__ FUNC_3 (int ,int *,int *,int *) ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_9 (int ,struct sockaddr*,int *) ;
 int FUNC_10 (int ,scalar_t__,char*) ;
 int FUNC_11 (int *,int ,int) ;
 scalar_t__ FUNC_12 (int **,int *,int ,TYPE_1__**,TYPE_2__*,int *,int,struct sockaddr*,int,int *,int,int *) ;

__attribute__((used)) static void
FUNC_13 (krb5_realm *VAR_2,
  krb5_keytab VAR_3,
  int VAR_4,
  krb5_address *VAR_5,
  struct sockaddr *VAR_6,
  int VAR_7,
  u_char *VAR_8,
  int VAR_9)
{
    krb5_error_code VAR_10;
    krb5_auth_context VAR_11 = ((void*)0);
    krb5_data VAR_12;
    krb5_ticket *VAR_13;
    krb5_address VAR_14;
    uint16_t VAR_15;

    FUNC_11(&VAR_14, 0, sizeof(VAR_14));
    FUNC_6 (&VAR_12);

    VAR_10 = FUNC_2 (VAR_1, &VAR_11);
    if (VAR_10) {
 FUNC_10 (VAR_1, VAR_10, "krb5_auth_con_init");
 return;
    }

    FUNC_4 (VAR_1, VAR_11,
       VAR_0);

    VAR_10 = FUNC_9 (VAR_1, VAR_6, &VAR_14);
    if (VAR_10) {
 FUNC_10 (VAR_1, VAR_10, "krb5_sockaddr2address");
 goto out;
    }

    VAR_10 = FUNC_3 (VAR_1, VAR_11, VAR_5, ((void*)0));
    if (VAR_10) {
 FUNC_10 (VAR_1, VAR_10, "krb5_auth_con_setaddr(this)");
 goto out;
    }

    if (FUNC_12 (&VAR_11, VAR_2, VAR_3, &VAR_13, &VAR_12,
  &VAR_15, VAR_4, VAR_6, VAR_7, VAR_8, VAR_9, &VAR_14) == 0)
    {





 VAR_10 = FUNC_3 (VAR_1, VAR_11,
          VAR_5, &VAR_14);
 if (VAR_10) {
     FUNC_10 (VAR_1, VAR_10, "krb5_auth_con_setaddr(other)");
     goto out;
 }

 FUNC_0 (VAR_11,
  VAR_13->client,
  VAR_15,
  VAR_4,
  VAR_6, VAR_7,
  &VAR_12);
 FUNC_11 (VAR_12.data, 0, VAR_12.length);
 FUNC_8 (VAR_1, VAR_13);
    }

out:
    FUNC_7(VAR_1, &VAR_14);
    FUNC_5(&VAR_12);
    FUNC_1(VAR_1, VAR_11);
}

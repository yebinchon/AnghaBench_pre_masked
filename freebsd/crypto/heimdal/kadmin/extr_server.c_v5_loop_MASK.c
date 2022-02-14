
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int krb5_socket_t ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_data ;
typedef int krb5_context ;
typedef int krb5_boolean ;
typedef int krb5_auth_context ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (void*,int ,int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int,scalar_t__,char*) ;
 scalar_t__ FUNC_4 (int ,int ,int *,int *) ;
 scalar_t__ FUNC_5 (int ,int ,int *,int *) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_6 (krb5_context VAR_3,
  krb5_auth_context VAR_4,
  krb5_boolean VAR_5,
  void *VAR_6,
  krb5_socket_t VAR_7)
{
    krb5_error_code VAR_8;
    krb5_data VAR_9, VAR_10;

    for (;;) {
 VAR_1 = 0;
 if(VAR_2)
     FUNC_0(0);
 VAR_8 = FUNC_4(VAR_3, VAR_4, &VAR_7, &VAR_9);
 if(VAR_8 == VAR_0)
     FUNC_0(0);
 if(VAR_8)
     FUNC_3(VAR_3, 1, VAR_8, "krb5_read_priv_message");
 VAR_1 = 1;
 FUNC_1(VAR_6, VAR_5, &VAR_9, &VAR_10);
 FUNC_2(&VAR_9);
 VAR_8 = FUNC_5(VAR_3, VAR_4, &VAR_7, &VAR_10);
 if(VAR_8)
     FUNC_3(VAR_3, 1, VAR_8, "krb5_write_priv_message");
    }
}

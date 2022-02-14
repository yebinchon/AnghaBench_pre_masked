
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct sockaddr {int dummy; } ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_data ;
typedef int krb5_auth_context ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int ,int *,int *,int *) ;
 scalar_t__ FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ,scalar_t__,char*) ;
 scalar_t__ FUNC_4 (int *,int ,char const*) ;
 int FUNC_5 (int,struct sockaddr*,int,int *,int *) ;

__attribute__((used)) static void
FUNC_6 (krb5_auth_context VAR_1,
     int VAR_2,
     struct sockaddr *VAR_3,
     int VAR_4,
     uint16_t VAR_5,
     const char *VAR_6)
{
    krb5_error_code VAR_7;
    krb5_data VAR_8;
    krb5_data VAR_9;
    krb5_data VAR_10;

    VAR_7 = FUNC_2 (VAR_0,
         VAR_1,
         &VAR_9);
    if (VAR_7) {
 FUNC_3 (VAR_0, VAR_7, "Could not even generate error reply");
 return;
    }

    if (FUNC_4(&VAR_10, VAR_5, VAR_6))
 return;

    VAR_7 = FUNC_1 (VAR_0,
   VAR_1,
   &VAR_10,
   &VAR_8,
   ((void*)0));
    FUNC_0 (&VAR_10);
    if (VAR_7) {
 FUNC_3 (VAR_0, VAR_7, "Could not even generate error reply");
 return;
    }
    FUNC_5 (VAR_2, VAR_3, VAR_4, &VAR_9, &VAR_8);
    FUNC_0 (&VAR_9);
    FUNC_0 (&VAR_8);
}

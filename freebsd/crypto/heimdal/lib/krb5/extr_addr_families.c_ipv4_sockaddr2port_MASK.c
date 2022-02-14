
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in {int sin_port; } ;
struct sockaddr {int dummy; } ;
typedef int krb5_error_code ;
typedef int int16_t ;



__attribute__((used)) static krb5_error_code
FUNC_0 (const struct sockaddr *VAR_0, int16_t *VAR_1)
{
    const struct sockaddr_in *VAR_2 = (const struct sockaddr_in *)VAR_0;

    *VAR_1 = VAR_2->sin_port;
    return 0;
}

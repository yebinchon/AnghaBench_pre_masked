
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr_in {int sin_addr; } ;
struct sockaddr {int dummy; } ;
typedef int krb5_error_code ;
struct TYPE_3__ {int address; int addr_type; } ;
typedef TYPE_1__ krb5_address ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned char*,int) ;
 int FUNC_1 (unsigned char*,int *,int) ;

__attribute__((used)) static krb5_error_code
FUNC_2 (const struct sockaddr *VAR_1, krb5_address *VAR_2)
{
    const struct sockaddr_in *VAR_3 = (const struct sockaddr_in *)VAR_1;
    unsigned char VAR_4[4];

    VAR_2->addr_type = VAR_0;
    FUNC_1 (VAR_4, &VAR_3->sin_addr, 4);
    return FUNC_0(&VAR_2->address, VAR_4, 4);
}

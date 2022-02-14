
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int krb5_error_code ;
struct TYPE_3__ {int address; int addr_type; } ;
typedef TYPE_1__ krb5_address ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned char*,int) ;
 int FUNC_1 (unsigned char*,char const*,int) ;

__attribute__((used)) static krb5_error_code
FUNC_2 (const char *VAR_1,
    krb5_address *VAR_2)
{
    unsigned char VAR_3[4];

    VAR_2->addr_type = VAR_0;
    FUNC_1(VAR_3, VAR_1, 4);
    return FUNC_0(&VAR_2->address, VAR_3, 4);
}

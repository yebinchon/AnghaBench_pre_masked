
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct in_addr {int dummy; } ;
struct TYPE_4__ {int data; } ;
struct TYPE_5__ {TYPE_1__ address; } ;
typedef TYPE_2__ krb5_address ;


 char* FUNC_0 (struct in_addr) ;
 int FUNC_1 (struct in_addr*,int ,int) ;
 int FUNC_2 (char*,size_t,char*,char*) ;

__attribute__((used)) static int
FUNC_3 (const krb5_address *VAR_0, char *VAR_1, size_t VAR_2)
{
    struct in_addr VAR_3;

    FUNC_1 (&VAR_3, VAR_0->address.data, 4);

    return FUNC_2 (VAR_1, VAR_2, "IPv4:%s", FUNC_0(VAR_3));
}

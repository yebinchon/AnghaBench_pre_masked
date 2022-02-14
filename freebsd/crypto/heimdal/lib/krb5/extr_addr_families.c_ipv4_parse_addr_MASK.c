
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct in_addr {int s_addr; } ;
typedef int krb5_context ;
struct TYPE_5__ {int length; int data; } ;
struct TYPE_4__ {TYPE_2__ address; int addr_type; } ;
typedef TYPE_1__ krb5_address ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (char const*,struct in_addr*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (int ) ;
 char* FUNC_4 (char const*,char) ;
 scalar_t__ FUNC_5 (char const*,char*,int) ;

__attribute__((used)) static int
FUNC_6 (krb5_context VAR_1, const char *VAR_2, krb5_address *VAR_3)
{
    const char *VAR_4;
    struct in_addr VAR_5;

    VAR_4 = FUNC_4(VAR_2, ':');
    if(VAR_4) {
 VAR_4++;
 if(FUNC_5(VAR_2, "ip:", VAR_4 - VAR_2) != 0 &&
    FUNC_5(VAR_2, "ip4:", VAR_4 - VAR_2) != 0 &&
    FUNC_5(VAR_2, "ipv4:", VAR_4 - VAR_2) != 0 &&
    FUNC_5(VAR_2, "inet:", VAR_4 - VAR_2) != 0)
     return -1;
    } else
 VAR_4 = VAR_2;
    if(FUNC_1(VAR_4, &VAR_5) == 0)
 return -1;
    VAR_3->addr_type = VAR_0;
    if(FUNC_2(&VAR_3->address, 4) != 0)
 return -1;
    FUNC_0(VAR_3->address.data, FUNC_3(VAR_5.s_addr), VAR_3->address.length);
    return 0;
}

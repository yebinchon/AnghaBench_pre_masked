
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct sockaddr {int dummy; } ;
typedef int krb5_boolean ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static krb5_boolean
FUNC_1 (const struct sockaddr *VAR_3)
{
    const struct sockaddr_in *VAR_4 = (const struct sockaddr_in *)VAR_3;

    if ((FUNC_0(VAR_4->sin_addr.s_addr) >> 24) == VAR_1)
 return VAR_2;

    return VAR_0;
}

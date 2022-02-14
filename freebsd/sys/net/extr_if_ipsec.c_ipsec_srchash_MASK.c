
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct sockaddr_in6 {int sin6_addr; } ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct sockaddr {int sa_family; } ;
struct ipsec_iflist {int dummy; } ;
struct in6_addr {int dummy; } ;
typedef int in_addr_t ;




 int VAR_0 ;
 int VAR_1 ;
 struct ipsec_iflist* VAR_2 ;
 struct ipsec_iflist* VAR_3 ;
 size_t FUNC_0 (int *,int,int ) ;

__attribute__((used)) static struct ipsec_iflist *
FUNC_1(const struct sockaddr *VAR_4)
{
 uint32_t VAR_5;

 switch (VAR_4->sa_family) {
 }
 return (((void*)0));
}

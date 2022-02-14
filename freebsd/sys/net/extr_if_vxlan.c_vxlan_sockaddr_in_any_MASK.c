
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr {scalar_t__ sa_family; } ;
union vxlan_sockaddr {struct sockaddr sa; } ;
struct in_addr {scalar_t__ s_addr; } ;
struct in6_addr {int dummy; } ;
struct TYPE_4__ {struct in_addr sin_addr; } ;
struct TYPE_3__ {struct in6_addr sin6_addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct in6_addr const*) ;
 scalar_t__ VAR_2 ;
 TYPE_2__* FUNC_1 (struct sockaddr const*) ;
 TYPE_1__* FUNC_2 (struct sockaddr const*) ;

__attribute__((used)) static int
FUNC_3(const union vxlan_sockaddr *VAR_3)
{
 const struct sockaddr *VAR_4;
 int VAR_5;

 VAR_4 = &VAR_3->sa;

 if (VAR_4->sa_family == VAR_0) {
  const struct in_addr *VAR_6 = &FUNC_1(VAR_4)->sin_addr;
  VAR_5 = VAR_6->s_addr == VAR_2;
 } else if (VAR_4->sa_family == VAR_1) {
  const struct in6_addr *VAR_7 = &FUNC_2(VAR_4)->sin6_addr;
  VAR_5 = FUNC_0(VAR_7);
 } else
  VAR_5 = -1;

 return (VAR_5);
}

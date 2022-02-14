
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr {scalar_t__ sa_family; } ;
union vxlan_sockaddr {struct sockaddr sa; } ;
struct in_addr {int s_addr; } ;
struct in6_addr {int dummy; } ;
struct TYPE_4__ {struct in_addr sin_addr; } ;
struct TYPE_3__ {struct in6_addr sin6_addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct in6_addr const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 (struct sockaddr const*) ;
 TYPE_1__* FUNC_4 (struct sockaddr const*) ;

__attribute__((used)) static int
FUNC_5(const union vxlan_sockaddr *VAR_2)
{
 const struct sockaddr *VAR_3;
 int VAR_4;

 VAR_3 = &VAR_2->sa;

 if (VAR_3->sa_family == VAR_0) {
  const struct in_addr *VAR_5 = &FUNC_3(VAR_3)->sin_addr;
  VAR_4 = FUNC_1(FUNC_2(VAR_5->s_addr));
 } else if (VAR_3->sa_family == VAR_1) {
  const struct in6_addr *VAR_6 = &FUNC_4(VAR_3)->sin6_addr;
  VAR_4 = FUNC_0(VAR_6);
 } else
  VAR_4 = -1;

 return (VAR_4);
}

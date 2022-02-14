
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int sin6_addr; } ;
struct TYPE_8__ {scalar_t__ s_addr; } ;
struct TYPE_7__ {TYPE_3__ sin_addr; } ;
union vxlan_sockaddr {TYPE_1__ in6; TYPE_2__ in4; } ;
struct sockaddr {scalar_t__ sa_family; } ;
struct in_addr {scalar_t__ s_addr; } ;
struct in6_addr {int dummy; } ;
struct TYPE_10__ {struct in_addr sin_addr; } ;
struct TYPE_9__ {struct in6_addr sin6_addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct in6_addr const*,int *) ;
 TYPE_5__* FUNC_1 (struct sockaddr const*) ;
 TYPE_4__* FUNC_2 (struct sockaddr const*) ;

__attribute__((used)) static int
FUNC_3(const union vxlan_sockaddr *VAR_2,
    const struct sockaddr *VAR_3)
{
 int VAR_4;

 if (VAR_3->sa_family == VAR_0) {
  const struct in_addr *VAR_5 = &FUNC_1(VAR_3)->sin_addr;
  VAR_4 = VAR_5->s_addr == VAR_2->in4.sin_addr.s_addr;
 } else if (VAR_3->sa_family == VAR_1) {
  const struct in6_addr *VAR_6 = &FUNC_2(VAR_3)->sin6_addr;
  VAR_4 = FUNC_0(VAR_6, &VAR_2->in6.sin6_addr);
 } else
  VAR_4 = 0;

 return (VAR_4);
}

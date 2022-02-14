
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct in6_addr {int dummy; } ;
struct TYPE_6__ {int sin6_len; struct in6_addr sin6_addr; scalar_t__ sin6_family; } ;
struct in_addr {int dummy; } ;
struct TYPE_5__ {int sin_len; struct in_addr sin_addr; scalar_t__ sin_family; } ;
union vxlan_sockaddr {TYPE_2__ in6; TYPE_1__ in4; } ;
struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {scalar_t__ sa_family; } ;
struct TYPE_8__ {struct in_addr sin_addr; } ;
struct TYPE_7__ {struct in6_addr sin6_addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_4__* FUNC_1 (struct sockaddr const*) ;
 TYPE_3__* FUNC_2 (struct sockaddr const*) ;

__attribute__((used)) static void
FUNC_3(union vxlan_sockaddr *VAR_2,
    const struct sockaddr *VAR_3)
{

 FUNC_0(VAR_3->sa_family == VAR_0 || VAR_3->sa_family == VAR_1);

 if (VAR_3->sa_family == VAR_0) {
  const struct in_addr *VAR_4 = &FUNC_1(VAR_3)->sin_addr;
  VAR_2->in4.sin_family = VAR_0;
  VAR_2->in4.sin_len = sizeof(struct sockaddr_in);
  VAR_2->in4.sin_addr = *VAR_4;
 } else if (VAR_3->sa_family == VAR_1) {
  const struct in6_addr *VAR_5 = &FUNC_2(VAR_3)->sin6_addr;
  VAR_2->in6.sin6_family = VAR_1;
  VAR_2->in6.sin6_len = sizeof(struct sockaddr_in6);
  VAR_2->in6.sin6_addr = *VAR_5;
 }
}

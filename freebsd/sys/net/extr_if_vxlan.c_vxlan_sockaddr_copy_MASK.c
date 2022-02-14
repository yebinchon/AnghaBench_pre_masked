
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sin6_len; } ;
struct TYPE_4__ {int sin_len; } ;
union vxlan_sockaddr {TYPE_1__ in6; TYPE_2__ in4; } ;
struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {scalar_t__ sa_family; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (union vxlan_sockaddr*,int) ;
 TYPE_2__* FUNC_2 (struct sockaddr const*) ;
 TYPE_1__* FUNC_3 (struct sockaddr const*) ;

__attribute__((used)) static void
FUNC_4(union vxlan_sockaddr *VAR_2,
    const struct sockaddr *VAR_3)
{

 FUNC_0(VAR_3->sa_family == VAR_0 || VAR_3->sa_family == VAR_1);
 FUNC_1(VAR_2, sizeof(*VAR_2));

 if (VAR_3->sa_family == VAR_0) {
  VAR_2->in4 = *FUNC_2(VAR_3);
  VAR_2->in4.sin_len = sizeof(struct sockaddr_in);
 } else if (VAR_3->sa_family == VAR_1) {
  VAR_2->in6 = *FUNC_3(VAR_3);
  VAR_2->in6.sin6_len = sizeof(struct sockaddr_in6);
 }
}

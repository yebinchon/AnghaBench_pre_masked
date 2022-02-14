
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int sin6_addr; int sin6_port; } ;
struct TYPE_3__ {int sa_family; } ;
union sctp_addr {TYPE_2__ v6; TYPE_1__ sa; } ;
struct in6_addr {int dummy; } ;
typedef int __be16 ;


 int VAR_0 ;
 int FUNC_0 (int *,struct in6_addr*) ;

__attribute__((used)) static void FUNC_1(union sctp_addr *VAR_1, struct in6_addr *VAR_2,
         __be16 VAR_3)
{
 VAR_1->sa.sa_family = VAR_0;
 VAR_1->v6.sin6_port = VAR_3;
 FUNC_0(&VAR_1->v6.sin6_addr, VAR_2);
}

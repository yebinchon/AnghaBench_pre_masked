
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int dummy; } ;
struct in6_addr {int dummy; } ;
typedef scalar_t__ __be32 ;
struct TYPE_4__ {struct in6_addr rcv_saddr; } ;
struct TYPE_3__ {scalar_t__ rcv_saddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct in6_addr* FUNC_0 (struct sock const*) ;
 TYPE_2__* FUNC_1 (struct sock const*) ;
 scalar_t__ FUNC_2 (struct sock const*) ;
 TYPE_1__* FUNC_3 (struct sock const*) ;
 int FUNC_4 (struct sock const*) ;
 scalar_t__ FUNC_5 (struct in6_addr const*,struct in6_addr const*) ;
 int FUNC_6 (struct in6_addr const*) ;
 int FUNC_7 (struct sock const*) ;

int FUNC_8(const struct sock *VAR_2, const struct sock *VAR_3)
{
 const struct in6_addr *VAR_4 = &FUNC_1(VAR_2)->rcv_saddr;
 const struct in6_addr *VAR_5 = FUNC_0(VAR_3);
 __be32 VAR_6 = FUNC_3(VAR_2)->rcv_saddr;
 __be32 VAR_7 = FUNC_2(VAR_3);
 int VAR_8 = FUNC_7(VAR_2);
 int VAR_9 = FUNC_4(VAR_3);
 int VAR_10 = FUNC_6(VAR_4);
 int VAR_11 = VAR_5 ? FUNC_6(VAR_5) : VAR_1;


 if (VAR_10 == VAR_1 && VAR_11 == VAR_1)
  return (!VAR_9 &&
   (!VAR_6 || !VAR_7 ||
     VAR_6 == VAR_7));

 if (VAR_11 == VAR_0 &&
     !(VAR_9 && VAR_10 == VAR_1))
  return 1;

 if (VAR_10 == VAR_0 &&
     !(VAR_8 && VAR_11 == VAR_1))
  return 1;

 if (VAR_5 &&
     FUNC_5(VAR_4, VAR_5))
  return 1;

 return 0;
}

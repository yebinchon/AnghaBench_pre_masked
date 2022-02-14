
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {scalar_t__ sk_family; int sk_bound_dev_if; } ;
struct net {int dummy; } ;
struct ipv6_pinfo {int rcv_saddr; } ;
struct in6_addr {int dummy; } ;
struct TYPE_2__ {unsigned short const num; } ;


 scalar_t__ VAR_0 ;
 struct ipv6_pinfo* FUNC_0 (struct sock*) ;
 TYPE_1__* FUNC_1 (struct sock*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct in6_addr const*) ;
 scalar_t__ FUNC_4 (int ,struct net*) ;
 int FUNC_5 (struct sock*) ;

__attribute__((used)) static int inline FUNC_6(struct sock *VAR_1, struct net *VAR_2,
    const unsigned short VAR_3,
    const struct in6_addr *VAR_4,
    const int VAR_5)
{
 int VAR_6 = -1;

 if (FUNC_4(FUNC_5(VAR_1), VAR_2) && FUNC_1(VAR_1)->num == VAR_3 &&
     VAR_1->sk_family == VAR_0) {
  const struct ipv6_pinfo *VAR_7 = FUNC_0(VAR_1);

  VAR_6 = 1;
  if (!FUNC_2(&VAR_7->rcv_saddr)) {
   if (!FUNC_3(&VAR_7->rcv_saddr, VAR_4))
    return -1;
   VAR_6++;
  }
  if (VAR_1->sk_bound_dev_if) {
   if (VAR_1->sk_bound_dev_if != VAR_5)
    return -1;
   VAR_6++;
  }
 }
 return VAR_6;
}

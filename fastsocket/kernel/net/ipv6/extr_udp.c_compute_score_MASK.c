
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {unsigned short sk_hash; scalar_t__ sk_family; int sk_bound_dev_if; } ;
struct net {int dummy; } ;
struct ipv6_pinfo {int daddr; int rcv_saddr; } ;
struct inet_sock {scalar_t__ dport; } ;
struct in6_addr {int dummy; } ;
typedef scalar_t__ __be16 ;


 scalar_t__ VAR_0 ;
 struct ipv6_pinfo* FUNC_0 (struct sock*) ;
 struct inet_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct in6_addr const*) ;
 scalar_t__ FUNC_4 (int ,struct net*) ;
 int FUNC_5 (struct sock*) ;

__attribute__((used)) static inline int FUNC_6(struct sock *VAR_1, struct net *VAR_2,
    unsigned short VAR_3,
    const struct in6_addr *VAR_4, __be16 VAR_5,
    const struct in6_addr *VAR_6, __be16 VAR_7,
    int VAR_8)
{
 int VAR_9 = -1;

 if (FUNC_4(FUNC_5(VAR_1), VAR_2) && VAR_1->sk_hash == VAR_3 &&
   VAR_1->sk_family == VAR_0) {
  struct ipv6_pinfo *VAR_10 = FUNC_0(VAR_1);
  struct inet_sock *VAR_11 = FUNC_1(VAR_1);

  VAR_9 = 0;
  if (VAR_11->dport) {
   if (VAR_11->dport != VAR_5)
    return -1;
   VAR_9++;
  }
  if (!FUNC_2(&VAR_10->rcv_saddr)) {
   if (!FUNC_3(&VAR_10->rcv_saddr, VAR_6))
    return -1;
   VAR_9++;
  }
  if (!FUNC_2(&VAR_10->daddr)) {
   if (!FUNC_3(&VAR_10->daddr, VAR_4))
    return -1;
   VAR_9++;
  }
  if (VAR_1->sk_bound_dev_if) {
   if (VAR_1->sk_bound_dev_if != VAR_8)
    return -1;
   VAR_9++;
  }
 }
 return VAR_9;
}

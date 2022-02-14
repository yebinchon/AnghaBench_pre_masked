
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {unsigned short sk_hash; scalar_t__ sk_family; int sk_bound_dev_if; } ;
struct net {int dummy; } ;
struct inet_sock {scalar_t__ rcv_saddr; scalar_t__ daddr; scalar_t__ dport; } ;
typedef scalar_t__ __be32 ;
typedef scalar_t__ __be16 ;


 scalar_t__ VAR_0 ;
 struct inet_sock* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 scalar_t__ FUNC_2 (int ,struct net*) ;
 int FUNC_3 (struct sock*) ;

__attribute__((used)) static inline int FUNC_4(struct sock *VAR_1, struct net *VAR_2, __be32 VAR_3,
    unsigned short VAR_4,
    __be16 VAR_5, __be32 VAR_6, __be16 VAR_7, int VAR_8)
{
 int VAR_9 = -1;

 if (FUNC_2(FUNC_3(VAR_1), VAR_2) && VAR_1->sk_hash == VAR_4 &&
   !FUNC_1(VAR_1)) {
  struct inet_sock *VAR_10 = FUNC_0(VAR_1);

  VAR_9 = (VAR_1->sk_family == VAR_0 ? 2 : 1);
  if (VAR_10->rcv_saddr) {
   if (VAR_10->rcv_saddr != VAR_6)
    return -1;
   VAR_9 += 4;
  }
  if (VAR_10->daddr) {
   if (VAR_10->daddr != VAR_3)
    return -1;
   VAR_9 += 4;
  }
  if (VAR_10->dport) {
   if (VAR_10->dport != VAR_5)
    return -1;
   VAR_9 += 4;
  }
  if (VAR_1->sk_bound_dev_if) {
   if (VAR_1->sk_bound_dev_if != VAR_8)
    return -1;
   VAR_9 += 4;
  }
 }
 return VAR_9;
}

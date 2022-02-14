
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_family; int sk_bound_dev_if; } ;
struct net {int dummy; } ;
struct inet_sock {unsigned short const num; scalar_t__ rcv_saddr; } ;
typedef scalar_t__ const __be32 ;


 scalar_t__ VAR_0 ;
 struct inet_sock* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 scalar_t__ FUNC_2 (int ,struct net*) ;
 int FUNC_3 (struct sock*) ;

__attribute__((used)) static inline int FUNC_4(struct sock *VAR_1, struct net *VAR_2,
    const unsigned short VAR_3, const __be32 VAR_4,
    const int VAR_5)
{
 int VAR_6 = -1;
 struct inet_sock *VAR_7 = FUNC_0(VAR_1);


 if (FUNC_2(FUNC_3(VAR_1), VAR_2) && VAR_7->num == VAR_3 &&
   !FUNC_1(VAR_1)) {
  __be32 VAR_8 = VAR_7->rcv_saddr;
  VAR_6 = VAR_1->sk_family == VAR_0 ? 2 : 1;
  if (VAR_8) {
   if (VAR_8 != VAR_4)
    return -1;
   VAR_6 += 4;
  }
  if (VAR_1->sk_bound_dev_if) {
   if (VAR_1->sk_bound_dev_if != VAR_5)
    return -1;
   VAR_6 += 4;
  }






 }
 return VAR_6;
}

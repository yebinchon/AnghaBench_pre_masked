
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct net {int dummy; } ;
struct inet_hashinfo {int dummy; } ;
struct in6_addr {int dummy; } ;
typedef int __be16 ;


 struct sock* FUNC_0 (struct net*,struct inet_hashinfo*,struct in6_addr const*,int const,struct in6_addr const*,int ,int const) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int const) ;

struct sock *FUNC_4(struct net *VAR_0, struct inet_hashinfo *VAR_1,
     const struct in6_addr *VAR_2, const __be16 VAR_3,
     const struct in6_addr *VAR_4, const __be16 VAR_5,
     const int VAR_6)
{
 struct sock *VAR_7;

 FUNC_1();
 VAR_7 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, FUNC_3(VAR_5), VAR_6);
 FUNC_2();

 return VAR_7;
}

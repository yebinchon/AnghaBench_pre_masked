
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct net {int dummy; } ;
struct in6_addr {int dummy; } ;
typedef int __be16 ;


 struct sock* FUNC_0 (struct net*,struct in6_addr const*,int ,struct in6_addr const*,int ,int,int *) ;
 int VAR_0 ;

struct sock *FUNC_1(struct net *VAR_1, const struct in6_addr *VAR_2, __be16 VAR_3,
        const struct in6_addr *VAR_4, __be16 VAR_5, int VAR_6)
{
 return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, &VAR_0);
}

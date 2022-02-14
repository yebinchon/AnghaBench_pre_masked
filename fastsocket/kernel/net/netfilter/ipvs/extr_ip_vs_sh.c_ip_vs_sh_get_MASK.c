
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union nf_inet_addr {int dummy; } nf_inet_addr ;
struct ip_vs_sh_bucket {struct ip_vs_dest* dest; } ;
struct ip_vs_dest {int dummy; } ;


 size_t FUNC_0 (int,union nf_inet_addr const*) ;

__attribute__((used)) static inline struct ip_vs_dest *
FUNC_1(int VAR_0, struct ip_vs_sh_bucket *VAR_1,
      const union nf_inet_addr *VAR_2)
{
 return (VAR_1[FUNC_0(VAR_0, VAR_2)]).dest;
}

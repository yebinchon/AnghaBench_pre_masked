
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union nf_inet_addr {int dummy; } nf_inet_addr ;
struct sk_buff {int dummy; } ;
struct ip_vs_service {TYPE_1__* pe; int af; } ;
struct ip_vs_conn_param {TYPE_1__* pe; } ;
typedef int __be16 ;
struct TYPE_2__ {int (* fill_param ) (struct ip_vs_conn_param*,struct sk_buff*) ;} ;


 int FUNC_0 (int ,int,union nf_inet_addr const*,int ,union nf_inet_addr const*,int ,struct ip_vs_conn_param*) ;
 int FUNC_1 (struct ip_vs_conn_param*,struct sk_buff*) ;

__attribute__((used)) static inline void
FUNC_2(const struct ip_vs_service *VAR_0,
         struct sk_buff *VAR_1, int VAR_2,
         const union nf_inet_addr *VAR_3, __be16 VAR_4,
         const union nf_inet_addr *VAR_5, __be16 VAR_6,
         struct ip_vs_conn_param *VAR_7)
{
 FUNC_0(VAR_0->af, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
 VAR_7->pe = VAR_0->pe;
 if (VAR_7->pe && VAR_7->pe->fill_param)
  VAR_7->pe->fill_param(VAR_7, VAR_1);
}

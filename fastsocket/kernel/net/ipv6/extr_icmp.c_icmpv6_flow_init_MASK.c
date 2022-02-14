
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sock {int dummy; } ;
struct in6_addr {int dummy; } ;
struct flowi {int oif; scalar_t__ fl_icmp_code; int fl_icmp_type; int proto; int fl6_dst; int fl6_src; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct in6_addr const*) ;
 int FUNC_1 (struct flowi*,int ,int) ;
 int FUNC_2 (struct sock*,struct flowi*) ;

void FUNC_3(struct sock *VAR_1, struct flowi *VAR_2,
        u8 VAR_3,
        const struct in6_addr *VAR_4,
        const struct in6_addr *VAR_5,
        int VAR_6)
{
 FUNC_1(VAR_2, 0, sizeof(*VAR_2));
 FUNC_0(&VAR_2->fl6_src, VAR_4);
 FUNC_0(&VAR_2->fl6_dst, VAR_5);
 VAR_2->proto = VAR_0;
 VAR_2->fl_icmp_type = VAR_3;
 VAR_2->fl_icmp_code = 0;
 VAR_2->oif = VAR_6;
 FUNC_2(VAR_1, VAR_2);
}

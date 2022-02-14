
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_selector {int dport; int dport_mask; int sport; int sport_mask; scalar_t__ proto; scalar_t__ ifindex; int prefixlen_s; int saddr; int prefixlen_d; int daddr; } ;
struct flowi {scalar_t__ proto; scalar_t__ oif; int fl4_src; int fl4_dst; } ;


 scalar_t__ FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (struct flowi*) ;
 int FUNC_2 (struct flowi*) ;

__attribute__((used)) static inline int
FUNC_3(struct xfrm_selector *VAR_0, struct flowi *VAR_1)
{
 return FUNC_0(&VAR_1->fl4_dst, &VAR_0->daddr, VAR_0->prefixlen_d) &&
  FUNC_0(&VAR_1->fl4_src, &VAR_0->saddr, VAR_0->prefixlen_s) &&
  !((FUNC_1(VAR_1) ^ VAR_0->dport) & VAR_0->dport_mask) &&
  !((FUNC_2(VAR_1) ^ VAR_0->sport) & VAR_0->sport_mask) &&
  (VAR_1->proto == VAR_0->proto || !VAR_0->proto) &&
  (VAR_1->oif == VAR_0->ifindex || !VAR_0->ifindex);
}

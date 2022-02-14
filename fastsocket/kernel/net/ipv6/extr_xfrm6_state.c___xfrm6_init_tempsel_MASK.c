
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int xfrm_address_t ;
struct TYPE_5__ {int daddr; } ;
struct xfrm_tmpl {int reqid; int mode; int saddr; TYPE_2__ id; } ;
struct TYPE_6__ {void* family; int reqid; int mode; int saddr; } ;
struct TYPE_4__ {int prefixlen_d; int prefixlen_s; int ifindex; int proto; void* family; void* sport_mask; int sport; void* dport_mask; int dport; int saddr; int daddr; } ;
struct xfrm_state {TYPE_3__ props; TYPE_2__ id; TYPE_1__ sel; } ;
struct in6_addr {int dummy; } ;
struct flowi {int oif; int proto; int fl6_src; int fl6_dst; } ;


 void* VAR_0 ;
 void* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct in6_addr*) ;
 int FUNC_2 (struct in6_addr*,int *) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (struct flowi*) ;
 int FUNC_5 (struct flowi*) ;

__attribute__((used)) static void
FUNC_6(struct xfrm_state *VAR_1, struct flowi *VAR_2,
       struct xfrm_tmpl *VAR_3,
       xfrm_address_t *VAR_4, xfrm_address_t *VAR_5)
{


 FUNC_2((struct in6_addr *)&VAR_1->sel.daddr, &VAR_2->fl6_dst);
 FUNC_2((struct in6_addr *)&VAR_1->sel.saddr, &VAR_2->fl6_src);
 VAR_1->sel.dport = FUNC_4(VAR_2);
 VAR_1->sel.dport_mask = FUNC_0(0xffff);
 VAR_1->sel.sport = FUNC_5(VAR_2);
 VAR_1->sel.sport_mask = FUNC_0(0xffff);
 VAR_1->sel.family = VAR_0;
 VAR_1->sel.prefixlen_d = 128;
 VAR_1->sel.prefixlen_s = 128;
 VAR_1->sel.proto = VAR_2->proto;
 VAR_1->sel.ifindex = VAR_2->oif;
 VAR_1->id = VAR_3->id;
 if (FUNC_1((struct in6_addr*)&VAR_1->id.daddr))
  FUNC_3(&VAR_1->id.daddr, VAR_4, sizeof(VAR_1->sel.daddr));
 FUNC_3(&VAR_1->props.saddr, &VAR_3->saddr, sizeof(VAR_1->props.saddr));
 if (FUNC_1((struct in6_addr*)&VAR_1->props.saddr))
  FUNC_3(&VAR_1->props.saddr, VAR_5, sizeof(VAR_1->props.saddr));
 VAR_1->props.mode = VAR_3->mode;
 VAR_1->props.reqid = VAR_3->reqid;
 VAR_1->props.family = VAR_0;
}

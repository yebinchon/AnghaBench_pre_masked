
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_18__ {scalar_t__ a4; } ;
typedef TYPE_8__ xfrm_address_t ;
struct TYPE_16__ {scalar_t__ a4; } ;
struct TYPE_14__ {scalar_t__ a4; } ;
struct TYPE_15__ {TYPE_4__ daddr; } ;
struct xfrm_tmpl {int reqid; int mode; TYPE_6__ saddr; TYPE_5__ id; } ;
struct TYPE_17__ {void* family; int reqid; int mode; TYPE_6__ saddr; } ;
struct TYPE_12__ {int a4; } ;
struct TYPE_11__ {int a4; } ;
struct TYPE_13__ {int prefixlen_d; int prefixlen_s; int ifindex; int proto; void* family; void* sport_mask; int sport; void* dport_mask; int dport; TYPE_2__ saddr; TYPE_1__ daddr; } ;
struct xfrm_state {TYPE_7__ props; TYPE_5__ id; TYPE_3__ sel; } ;
struct flowi {int oif; int proto; int fl4_src; int fl4_dst; } ;


 void* VAR_0 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct flowi*) ;
 int FUNC_2 (struct flowi*) ;

__attribute__((used)) static void
FUNC_3(struct xfrm_state *VAR_1, struct flowi *VAR_2,
       struct xfrm_tmpl *VAR_3,
       xfrm_address_t *VAR_4, xfrm_address_t *VAR_5)
{
 VAR_1->sel.daddr.a4 = VAR_2->fl4_dst;
 VAR_1->sel.saddr.a4 = VAR_2->fl4_src;
 VAR_1->sel.dport = FUNC_1(VAR_2);
 VAR_1->sel.dport_mask = FUNC_0(0xffff);
 VAR_1->sel.sport = FUNC_2(VAR_2);
 VAR_1->sel.sport_mask = FUNC_0(0xffff);
 VAR_1->sel.family = VAR_0;
 VAR_1->sel.prefixlen_d = 32;
 VAR_1->sel.prefixlen_s = 32;
 VAR_1->sel.proto = VAR_2->proto;
 VAR_1->sel.ifindex = VAR_2->oif;
 VAR_1->id = VAR_3->id;
 if (VAR_1->id.daddr.a4 == 0)
  VAR_1->id.daddr.a4 = VAR_4->a4;
 VAR_1->props.saddr = VAR_3->saddr;
 if (VAR_1->props.saddr.a4 == 0)
  VAR_1->props.saddr.a4 = VAR_5->a4;
 VAR_1->props.mode = VAR_3->mode;
 VAR_1->props.reqid = VAR_3->reqid;
 VAR_1->props.family = VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {scalar_t__ mark; } ;
struct dst_entry {int dummy; } ;
struct dn_skb_cb {scalar_t__ src; scalar_t__ dst; scalar_t__ iif; } ;
struct TYPE_7__ {int dn_next; } ;
struct TYPE_6__ {TYPE_3__ dst; } ;
struct TYPE_5__ {scalar_t__ fld_src; scalar_t__ fld_dst; scalar_t__ oif; scalar_t__ mark; scalar_t__ iif; } ;
struct dn_route {TYPE_2__ u; TYPE_1__ fl; } ;
struct TYPE_8__ {int chain; } ;


 struct dn_skb_cb* FUNC_0 (struct sk_buff*) ;
 unsigned int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (struct sk_buff*) ;
 TYPE_4__* VAR_0 ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int VAR_1 ;
 struct dn_route* FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*,struct dst_entry*) ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_2)
{
 struct dn_route *VAR_3;
 struct dn_skb_cb *VAR_4 = FUNC_0(VAR_2);
 unsigned VAR_5 = FUNC_1(VAR_4->src, VAR_4->dst);

 if (FUNC_7(VAR_2))
  return 0;

 FUNC_5();
 for(VAR_3 = FUNC_4(VAR_0[VAR_5].chain); VAR_3 != ((void*)0);
     VAR_3 = FUNC_4(VAR_3->u.dst.dn_next)) {
  if ((VAR_3->fl.fld_src == VAR_4->src) &&
      (VAR_3->fl.fld_dst == VAR_4->dst) &&
      (VAR_3->fl.oif == 0) &&
      (VAR_3->fl.mark == VAR_2->mark) &&
      (VAR_3->fl.iif == VAR_4->iif)) {
   FUNC_3(&VAR_3->u.dst, VAR_1);
   FUNC_6();
   FUNC_8(VAR_2, (struct dst_entry *)VAR_3);
   return 0;
  }
 }
 FUNC_6();

 return FUNC_2(VAR_2);
}

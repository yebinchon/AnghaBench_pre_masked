
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {scalar_t__ pkt_type; scalar_t__ dev; TYPE_2__* nf_bridge; } ;
struct dst_entry {TYPE_1__* neighbour; scalar_t__ hh; } ;
struct TYPE_4__ {int mask; } ;
struct TYPE_3__ {int (* output ) (struct sk_buff*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (scalar_t__,struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 struct dst_entry* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_4)
{
 if (VAR_4->pkt_type == VAR_3) {
  VAR_4->pkt_type = VAR_2;
  VAR_4->nf_bridge->mask |= VAR_1;
 }
 VAR_4->nf_bridge->mask ^= VAR_0;

 VAR_4->dev = FUNC_0(VAR_4->dev);
 if (VAR_4->dev) {
  struct dst_entry *VAR_5 = FUNC_4(VAR_4);

  FUNC_3(VAR_4);

  if (VAR_5->hh)
   return FUNC_2(VAR_5->hh, VAR_4);
  else if (VAR_5->neighbour)
   return VAR_5->neighbour->output(VAR_4);
 }
 FUNC_1(VAR_4);
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ cb; } ;
struct irlap_cb {int next_bofs; int bofs_count; scalar_t__ xbofs_delay; scalar_t__ mtt_required; int speed; } ;
struct irda_skb_cb {scalar_t__ xbofs_delay; int next_xbofs; int xbofs; int next_speed; scalar_t__ mtt; int magic; } ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct irlap_cb *VAR_1,
         struct sk_buff *VAR_2)
{
 struct irda_skb_cb *VAR_3 = (struct irda_skb_cb *) VAR_2->cb;





 VAR_3->magic = VAR_0;
 VAR_3->mtt = VAR_1->mtt_required;
 VAR_3->next_speed = VAR_1->speed;


 VAR_1->mtt_required = 0;





 VAR_3->xbofs = VAR_1->bofs_count;
 VAR_3->next_xbofs = VAR_1->next_bofs;
 VAR_3->xbofs_delay = VAR_1->xbofs_delay;


 VAR_1->xbofs_delay = 0;

 VAR_1->bofs_count = VAR_1->next_bofs;
}

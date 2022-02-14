
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nf_queue_entry {size_t pf; size_t hook; int (* okfn ) (struct sk_buff*) ;int outdev; int indev; TYPE_1__* elem; struct sk_buff* skb; } ;
struct nf_afinfo {scalar_t__ (* reroute ) (struct sk_buff*,struct nf_queue_entry*) ;} ;
struct list_head {struct list_head* prev; } ;
struct TYPE_2__ {struct list_head list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 unsigned int VAR_3 ;

 unsigned int VAR_4 ;


 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_0 (struct sk_buff*,struct list_head*,size_t,size_t,int ,int ,int (*) (struct sk_buff*),unsigned int) ;
 int FUNC_1 (struct nf_queue_entry*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 struct nf_afinfo* FUNC_5 (size_t) ;
 int ** VAR_8 ;
 unsigned int FUNC_6 (int *,struct sk_buff*,size_t,int ,int ,struct list_head**,int (*) (struct sk_buff*),int ) ;
 int FUNC_7 (struct nf_queue_entry*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (struct sk_buff*,struct nf_queue_entry*) ;
 int FUNC_11 (struct sk_buff*) ;

void FUNC_12(struct nf_queue_entry *VAR_9, unsigned int VAR_10)
{
 struct sk_buff *VAR_11 = VAR_9->skb;
 struct list_head *VAR_12 = &VAR_9->elem->list;
 const struct nf_afinfo *VAR_13;
 int VAR_14;

 FUNC_8();

 FUNC_7(VAR_9);


 if (VAR_10 == VAR_4) {
  VAR_12 = VAR_12->prev;
  VAR_10 = 131;
 }

 if (VAR_10 == 131) {
  VAR_13 = FUNC_5(VAR_9->pf);
  if (!VAR_13 || VAR_13->reroute(VAR_11, VAR_9) < 0)
   VAR_10 = VAR_3;
 }

 if (VAR_10 == 131) {
 next_hook:
  VAR_10 = FUNC_6(&VAR_8[VAR_9->pf][VAR_9->hook],
         VAR_11, VAR_9->hook,
         VAR_9->indev, VAR_9->outdev, &VAR_12,
         VAR_9->okfn, VAR_2);
 }

 switch (VAR_10 & VAR_6) {
 case 131:
 case 128:
  FUNC_3();
  VAR_9->okfn(VAR_11);
  FUNC_4();
 case 129:
  break;
 case 130:
  VAR_14 = FUNC_0(VAR_11, VAR_12, VAR_9->pf, VAR_9->hook,
     VAR_9->indev, VAR_9->outdev, VAR_9->okfn,
     VAR_10 >> VAR_7);
  if (VAR_14 < 0) {
   if (VAR_14 == -VAR_0)
    goto next_hook;
   if (VAR_14 == -VAR_1 &&
      (VAR_10 & VAR_5))
    goto next_hook;
   FUNC_2(VAR_11);
  }
  break;
 default:
  FUNC_2(VAR_11);
 }
 FUNC_9();
 FUNC_1(VAR_9);
 return;
}

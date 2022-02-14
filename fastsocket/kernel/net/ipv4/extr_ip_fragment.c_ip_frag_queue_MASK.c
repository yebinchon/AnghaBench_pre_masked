
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sk_buff {int len; scalar_t__ ip_summed; int truesize; int tstamp; struct net_device* dev; struct sk_buff* next; } ;
struct net_device {int ifindex; } ;
struct TYPE_7__ {int last_in; int len; int meat; int max_size; TYPE_4__* net; int lru_list; int stamp; struct sk_buff* fragments; } ;
struct ipq {TYPE_1__ q; int iif; } ;
struct TYPE_12__ {int offset; } ;
struct TYPE_11__ {int flags; } ;
struct TYPE_10__ {int lru_list; int mem; } ;
struct TYPE_9__ {int lock; } ;
struct TYPE_8__ {int frag_off; } ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_6__* FUNC_0 (struct sk_buff*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_5__* FUNC_1 (struct sk_buff*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (TYPE_4__*,struct sk_buff*,int *) ;
 int FUNC_4 (int ) ;
 TYPE_3__ VAR_13 ;
 int FUNC_5 (struct ipq*,struct sk_buff*,struct net_device*) ;
 int FUNC_6 (struct ipq*) ;
 int FUNC_7 (struct ipq*) ;
 TYPE_2__* FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct ipq*) ;
 int FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int) ;
 int * FUNC_14 (struct sk_buff*,int) ;
 int FUNC_15 (struct sk_buff*,int) ;
 scalar_t__ FUNC_16 (int) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;

__attribute__((used)) static int FUNC_19(struct ipq *VAR_14, struct sk_buff *VAR_15)
{
 struct sk_buff *VAR_16, *VAR_17;
 struct net_device *VAR_18;
 int VAR_19, VAR_20;
 int VAR_21, VAR_22;
 int VAR_23 = -VAR_4;

 if (VAR_14->q.last_in & VAR_6)
  goto err;

 if (!(FUNC_1(VAR_15)->flags & VAR_9) &&
     FUNC_16(FUNC_7(VAR_14)) &&
     FUNC_16(VAR_23 = FUNC_6(VAR_14))) {
  FUNC_10(VAR_14);
  goto err;
 }

 VAR_20 = FUNC_13(FUNC_8(VAR_15)->frag_off);
 VAR_19 = VAR_20 & ~VAR_12;
 VAR_20 &= VAR_12;
 VAR_20 <<= 3;
 VAR_21 = FUNC_9(VAR_15);


 VAR_22 = VAR_20 + VAR_15->len - VAR_21;
 VAR_23 = -VAR_3;


 if ((VAR_19 & VAR_11) == 0) {



  if (VAR_22 < VAR_14->q.len ||
      ((VAR_14->q.last_in & VAR_8) && VAR_22 != VAR_14->q.len))
   goto err;
  VAR_14->q.last_in |= VAR_8;
  VAR_14->q.len = VAR_22;
 } else {
  if (VAR_22&7) {
   VAR_22 &= ~7;
   if (VAR_15->ip_summed != VAR_1)
    VAR_15->ip_summed = VAR_0;
  }
  if (VAR_22 > VAR_14->q.len) {

   if (VAR_14->q.last_in & VAR_8)
    goto err;
   VAR_14->q.len = VAR_22;
  }
 }
 if (VAR_22 == VAR_20)
  goto err;

 VAR_23 = -VAR_5;
 if (FUNC_14(VAR_15, VAR_21) == ((void*)0))
  goto err;

 VAR_23 = FUNC_15(VAR_15, VAR_22 - VAR_20);
 if (VAR_23)
  goto err;





 VAR_16 = ((void*)0);
 for (VAR_17 = VAR_14->q.fragments; VAR_17 != ((void*)0); VAR_17 = VAR_17->next) {
  if (FUNC_0(VAR_17)->offset >= VAR_20)
   break;
  VAR_16 = VAR_17;
 }





 if (VAR_16) {
  int VAR_24 = (FUNC_0(VAR_16)->offset + VAR_16->len) - VAR_20;

  if (VAR_24 > 0) {
   VAR_20 += VAR_24;
   VAR_23 = -VAR_3;
   if (VAR_22 <= VAR_20)
    goto err;
   VAR_23 = -VAR_5;
   if (!FUNC_14(VAR_15, VAR_24))
    goto err;
   if (VAR_15->ip_summed != VAR_1)
    VAR_15->ip_summed = VAR_0;
  }
 }

 VAR_23 = -VAR_5;

 while (VAR_17 && FUNC_0(VAR_17)->offset < VAR_22) {
  int VAR_25 = VAR_22 - FUNC_0(VAR_17)->offset;

  if (VAR_25 < VAR_17->len) {



   if (!FUNC_14(VAR_17, VAR_25))
    goto err;
   FUNC_0(VAR_17)->offset += VAR_25;
   VAR_14->q.meat -= VAR_25;
   if (VAR_17->ip_summed != VAR_1)
    VAR_17->ip_summed = VAR_0;
   break;
  } else {
   struct sk_buff *VAR_26 = VAR_17;




   VAR_17 = VAR_17->next;

   if (VAR_16)
    VAR_16->next = VAR_17;
   else
    VAR_14->q.fragments = VAR_17;

   VAR_14->q.meat -= VAR_26->len;
   FUNC_3(VAR_14->q.net, VAR_26, ((void*)0));
  }
 }

 FUNC_0(VAR_15)->offset = VAR_20;


 VAR_15->next = VAR_17;
 if (VAR_16)
  VAR_16->next = VAR_15;
 else
  VAR_14->q.fragments = VAR_15;

 VAR_18 = VAR_15->dev;
 if (VAR_18) {
  VAR_14->iif = VAR_18->ifindex;
  VAR_15->dev = ((void*)0);
 }
 VAR_14->q.stamp = VAR_15->tstamp;
 VAR_14->q.meat += VAR_15->len;
 FUNC_2(VAR_15->truesize, &VAR_14->q.net->mem);
 if (VAR_20 == 0)
  VAR_14->q.last_in |= VAR_7;

 if (FUNC_8(VAR_15)->frag_off & FUNC_4(VAR_10) &&
     VAR_15->len + VAR_21 > VAR_14->q.max_size)
  VAR_14->q.max_size = VAR_15->len + VAR_21;

 if (VAR_14->q.last_in == (VAR_7 | VAR_8) &&
     VAR_14->q.meat == VAR_14->q.len)
  return FUNC_5(VAR_14, VAR_16, VAR_18);

 FUNC_17(&VAR_13.lock);
 FUNC_12(&VAR_14->q.lru_list, &VAR_14->q.net->lru_list);
 FUNC_18(&VAR_13.lock);
 return -VAR_2;

err:
 FUNC_11(VAR_15);
 return VAR_23;
}

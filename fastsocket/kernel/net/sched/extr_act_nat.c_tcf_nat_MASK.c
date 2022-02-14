
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct udphdr {int check; } ;
struct tcphdr {int check; } ;
struct tcf_result {int dummy; } ;
struct TYPE_6__ {int drops; } ;
struct TYPE_5__ {int packets; int bytes; } ;
struct TYPE_4__ {int lastuse; } ;
struct tcf_nat {int old_addr; int new_addr; int mask; int flags; int tcf_action; int tcf_lock; TYPE_3__ tcf_qstats; TYPE_2__ tcf_bstats; TYPE_1__ tcf_tm; } ;
struct tc_action {struct tcf_nat* priv; } ;
struct sk_buff {int ip_summed; } ;
struct iphdr {int saddr; int daddr; int ihl; int frag_off; int protocol; int check; } ;
struct icmphdr {int checksum; int type; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,struct sk_buff*,int,int,int) ;
 struct iphdr* FUNC_3 (struct sk_buff*) ;
 int VAR_9 ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ,int ) ;
 int FUNC_5 (struct sk_buff*,int) ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*,int) ;
 scalar_t__ FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static int FUNC_13(struct sk_buff *VAR_10, struct tc_action *VAR_11,
     struct tcf_result *VAR_12)
{
 struct tcf_nat *VAR_13 = VAR_11->priv;
 struct iphdr *VAR_14;
 __be32 VAR_15;
 __be32 VAR_16;
 __be32 VAR_17;
 __be32 VAR_18;
 int VAR_19;
 int VAR_20;
 int VAR_21;

 FUNC_10(&VAR_13->tcf_lock);

 VAR_13->tcf_tm.lastuse = VAR_9;
 VAR_15 = VAR_13->old_addr;
 VAR_16 = VAR_13->new_addr;
 VAR_17 = VAR_13->mask;
 VAR_19 = VAR_13->flags & VAR_7;
 VAR_20 = VAR_13->tcf_action;

 VAR_13->tcf_bstats.bytes += FUNC_6(VAR_10);
 VAR_13->tcf_bstats.packets++;

 FUNC_11(&VAR_13->tcf_lock);

 if (FUNC_12(VAR_20 == VAR_8))
  goto drop;

 if (!FUNC_5(VAR_10, sizeof(*VAR_14)))
  goto drop;

 VAR_14 = FUNC_3(VAR_10);

 if (VAR_19)
  VAR_18 = VAR_14->saddr;
 else
  VAR_18 = VAR_14->daddr;

 if (!((VAR_15 ^ VAR_18) & VAR_17)) {
  if (FUNC_8(VAR_10) &&
      !FUNC_7(VAR_10, sizeof(*VAR_14)) &&
      FUNC_4(VAR_10, 0, 0, VAR_2))
   goto drop;

  VAR_16 &= VAR_17;
  VAR_16 |= VAR_18 & ~VAR_17;


  VAR_14 = FUNC_3(VAR_10);
  if (VAR_19)
   VAR_14->saddr = VAR_16;
  else
   VAR_14->daddr = VAR_16;

  FUNC_0(&VAR_14->check, VAR_18, VAR_16);
 }

 VAR_21 = VAR_14->ihl * 4;


 switch (VAR_14->frag_off & FUNC_1(VAR_6) ? 0 : VAR_14->protocol) {
 case 129:
 {
  struct tcphdr *VAR_22;

  if (!FUNC_5(VAR_10, VAR_21 + sizeof(*VAR_22)) ||
      (FUNC_8(VAR_10) &&
       !FUNC_7(VAR_10, VAR_21 + sizeof(*VAR_22)) &&
       FUNC_4(VAR_10, 0, 0, VAR_2)))
   goto drop;

  VAR_22 = (void *)(FUNC_9(VAR_10) + VAR_21);
  FUNC_2(&VAR_22->check, VAR_10, VAR_18, VAR_16, 1);
  break;
 }
 case 128:
 {
  struct udphdr *VAR_23;

  if (!FUNC_5(VAR_10, VAR_21 + sizeof(*VAR_23)) ||
      (FUNC_8(VAR_10) &&
       !FUNC_7(VAR_10, VAR_21 + sizeof(*VAR_23)) &&
       FUNC_4(VAR_10, 0, 0, VAR_2)))
   goto drop;

  VAR_23 = (void *)(FUNC_9(VAR_10) + VAR_21);
  if (VAR_23->check || VAR_10->ip_summed == VAR_0) {
   FUNC_2(&VAR_23->check, VAR_10, VAR_18,
       VAR_16, 1);
   if (!VAR_23->check)
    VAR_23->check = VAR_1;
  }
  break;
 }
 case 130:
 {
  struct icmphdr *VAR_24;

  if (!FUNC_5(VAR_10, VAR_21 + sizeof(*VAR_24) + sizeof(*VAR_14)))
   goto drop;

  VAR_24 = (void *)(FUNC_9(VAR_10) + VAR_21);

  if ((VAR_24->type != VAR_3) &&
      (VAR_24->type != VAR_5) &&
      (VAR_24->type != VAR_4))
   break;

  VAR_14 = (void *)(VAR_24 + 1);
  if (VAR_19)
   VAR_18 = VAR_14->daddr;
  else
   VAR_18 = VAR_14->saddr;

  if ((VAR_15 ^ VAR_18) & VAR_17)
   break;

  if (FUNC_8(VAR_10) &&
      !FUNC_7(VAR_10,
     VAR_21 + sizeof(*VAR_24) + sizeof(*VAR_14)) &&
      FUNC_4(VAR_10, 0, 0, VAR_2))
   goto drop;

  VAR_24 = (void *)(FUNC_9(VAR_10) + VAR_21);
  VAR_14 = (void *)(VAR_24 + 1);

  VAR_16 &= VAR_17;
  VAR_16 |= VAR_18 & ~VAR_17;


  if (VAR_19)
   VAR_14->daddr = VAR_16;
  else
   VAR_14->saddr = VAR_16;

  FUNC_2(&VAR_24->checksum, VAR_10, VAR_18, VAR_16,
      1);
  break;
 }
 default:
  break;
 }

 return VAR_20;

drop:
 FUNC_10(&VAR_13->tcf_lock);
 VAR_13->tcf_qstats.drops++;
 FUNC_11(&VAR_13->tcf_lock);
 return VAR_8;
}

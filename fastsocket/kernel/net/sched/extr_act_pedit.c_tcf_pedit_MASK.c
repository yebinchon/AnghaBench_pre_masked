
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef char u8 ;
typedef int u32 ;
struct tcf_result {int dummy; } ;
struct TYPE_6__ {int packets; int bytes; } ;
struct TYPE_5__ {int overlimits; } ;
struct TYPE_4__ {int lastuse; } ;
struct tcf_pedit {int tcf_action; int tcfp_nkeys; int tcf_lock; TYPE_3__ tcf_bstats; TYPE_2__ tcf_qstats; int tcf_index; struct tc_pedit_key* tcfp_keys; TYPE_1__ tcf_tm; } ;
struct tc_pedit_key {int off; char offmask; int at; char shift; int mask; int val; } ;
struct tc_action {struct tcf_pedit* priv; } ;
struct sk_buff {int tc_verd; int len; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int,char*,int ) ;
 int VAR_2 ;
 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;
 char* FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_3, struct tc_action *VAR_4,
       struct tcf_result *VAR_5)
{
 struct tcf_pedit *VAR_6 = VAR_4->priv;
 int VAR_7, VAR_8 = 0;
 u8 *VAR_9;

 if (!(VAR_3->tc_verd & VAR_1)) {

  if (FUNC_3(VAR_3, 0, 0, VAR_0)) {
   return VAR_6->tcf_action;
  }
 }

 VAR_9 = FUNC_5(VAR_3);

 FUNC_6(&VAR_6->tcf_lock);

 VAR_6->tcf_tm.lastuse = VAR_2;

 if (VAR_6->tcfp_nkeys > 0) {
  struct tc_pedit_key *VAR_10 = VAR_6->tcfp_keys;

  for (VAR_7 = VAR_6->tcfp_nkeys; VAR_7 > 0; VAR_7--, VAR_10++) {
   u32 *VAR_11;
   int VAR_12 = VAR_10->off;

   if (VAR_10->offmask) {
    if (VAR_3->len > VAR_10->at) {
      char *VAR_13 = VAR_9 + VAR_10->at;
      VAR_12 += ((*VAR_13 & VAR_10->offmask) >>
         VAR_10->shift);
    } else {
     goto bad;
    }
   }

   if (VAR_12 % 4) {
    FUNC_2("tc filter pedit"
     " offset must be on 32 bit boundaries\n");
    goto bad;
   }
   if (VAR_12 > 0 && VAR_12 > VAR_3->len) {
    FUNC_2("tc filter pedit"
     " offset %d cant exceed pkt length %d\n",
           VAR_12, VAR_3->len);
    goto bad;
   }

   VAR_11 = (u32 *)(VAR_9+VAR_12);

   *VAR_11 = ((*VAR_11 & VAR_10->mask) ^ VAR_10->val);
   VAR_8++;
  }

  if (VAR_8)
   VAR_3->tc_verd = FUNC_0(VAR_3->tc_verd);
  goto done;
 } else
  FUNC_1(1, "pedit BUG: index %d\n", VAR_6->tcf_index);

bad:
 VAR_6->tcf_qstats.overlimits++;
done:
 VAR_6->tcf_bstats.bytes += FUNC_4(VAR_3);
 VAR_6->tcf_bstats.packets++;
 FUNC_7(&VAR_6->tcf_lock);
 return VAR_6->tcf_action;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xt_target_param {unsigned int hooknum; int targinfo; TYPE_1__* target; struct net_device const* out; struct net_device const* in; int family; } ;
struct xt_match_param {int* hotdrop; unsigned int hooknum; struct net_device const* out; struct net_device const* in; int family; } ;
struct sk_buff {scalar_t__ len; } ;
struct net_device {int dummy; } ;
struct ebt_table_info {char* entries; struct ebt_entries** hook_entry; struct ebt_chainstack** chainstack; int nentries; int counters; } ;
struct ebt_table {int lock; struct ebt_table_info* private; } ;
struct ebt_standard_target {int verdict; } ;
struct TYPE_4__ {TYPE_1__* target; } ;
struct ebt_entry_target {TYPE_2__ u; int data; } ;
struct ebt_entry {int target_offset; } ;
struct ebt_entries {int nentries; int counter_offset; int policy; scalar_t__ data; scalar_t__ distinguisher; } ;
struct ebt_counter {int bcnt; int pcnt; } ;
struct ebt_chainstack {int n; struct ebt_entry* e; struct ebt_entries* chaininfo; } ;
struct TYPE_3__ {int (* target ) (struct sk_buff*,struct xt_target_param*) ;} ;


 int FUNC_0 (char*) ;
 struct ebt_counter* FUNC_1 (int ,int ,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct ebt_entry*,int ,struct sk_buff*,struct xt_match_param*) ;
 int VAR_3 ;
 int FUNC_3 (struct ebt_entry*,int ,struct sk_buff*,struct xt_target_param*) ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 scalar_t__ FUNC_4 (struct ebt_entry*,int ,struct net_device const*,struct net_device const*) ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_5 (struct ebt_entry*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 size_t FUNC_9 () ;
 int FUNC_10 (struct sk_buff*,struct xt_target_param*) ;

unsigned int FUNC_11 (unsigned int VAR_9, struct sk_buff *VAR_10,
   const struct net_device *VAR_11, const struct net_device *VAR_12,
   struct ebt_table *VAR_13)
{
 int VAR_14, VAR_15;
 struct ebt_entry *VAR_16;
 struct ebt_counter *VAR_17, *VAR_18;
 struct ebt_entry_target *VAR_19;
 int VAR_20, VAR_21 = 0;
 struct ebt_chainstack *VAR_22;
 struct ebt_entries *VAR_23;
 char *VAR_24;
 struct ebt_table_info *VAR_25;
 bool VAR_26 = 0;
 struct xt_match_param VAR_27;
 struct xt_target_param VAR_28;

 VAR_27.family = VAR_28.family = VAR_4;
 VAR_27.in = VAR_28.in = VAR_11;
 VAR_27.out = VAR_28.out = VAR_12;
 VAR_27.hotdrop = &VAR_26;
 VAR_27.hooknum = VAR_28.hooknum = VAR_9;

 FUNC_7(&VAR_13->lock);
 VAR_25 = VAR_13->private;
 VAR_18 = FUNC_1(VAR_25->counters, VAR_25->nentries,
    FUNC_9());
 if (VAR_25->chainstack)
  VAR_22 = VAR_25->chainstack[FUNC_9()];
 else
  VAR_22 = ((void*)0);
 VAR_23 = VAR_25->hook_entry[VAR_9];
 VAR_15 = VAR_25->hook_entry[VAR_9]->nentries;
 VAR_16 = (struct ebt_entry *)(VAR_25->hook_entry[VAR_9]->data);
 VAR_17 = VAR_18 + VAR_25->hook_entry[VAR_9]->counter_offset;

 VAR_24 = VAR_25->entries;
 VAR_14 = 0;
 while (VAR_14 < VAR_15) {
  if (FUNC_4(VAR_16, FUNC_6(VAR_10), VAR_11, VAR_12))
   goto letscontinue;

  if (FUNC_2(VAR_16, VAR_7, VAR_10, &VAR_27) != 0)
   goto letscontinue;
  if (VAR_26) {
   FUNC_8(&VAR_13->lock);
   return VAR_6;
  }


  (*(VAR_17 + VAR_14)).pcnt++;
  (*(VAR_17 + VAR_14)).bcnt += VAR_10->len;



  FUNC_3(VAR_16, VAR_8, VAR_10, &VAR_28);

  VAR_19 = (struct ebt_entry_target *)
     (((char *)VAR_16) + VAR_16->target_offset);

  if (!VAR_19->u.target->target)
   VAR_20 = ((struct ebt_standard_target *)VAR_19)->verdict;
  else {
   VAR_28.target = VAR_19->u.target;
   VAR_28.targinfo = VAR_19->data;
   VAR_20 = VAR_19->u.target->target(VAR_10, &VAR_28);
  }
  if (VAR_20 == VAR_0) {
   FUNC_8(&VAR_13->lock);
   return VAR_5;
  }
  if (VAR_20 == VAR_2) {
   FUNC_8(&VAR_13->lock);
   return VAR_6;
  }
  if (VAR_20 == VAR_3) {
letsreturn:







   VAR_21--;

   VAR_14 = VAR_22[VAR_21].n;
   VAR_23 = VAR_22[VAR_21].chaininfo;
   VAR_15 = VAR_23->nentries;
   VAR_16 = VAR_22[VAR_21].e;
   VAR_17 = VAR_18 +
      VAR_23->counter_offset;
   continue;
  }
  if (VAR_20 == VAR_1)
   goto letscontinue;
  VAR_22[VAR_21].n = VAR_14 + 1;
  VAR_22[VAR_21].chaininfo = VAR_23;
  VAR_22[VAR_21].e = FUNC_5(VAR_16);
  VAR_14 = 0;
  VAR_23 = (struct ebt_entries *) (VAR_24 + VAR_20);







  VAR_15 = VAR_23->nentries;
  VAR_16 = (struct ebt_entry *)VAR_23->data;
  VAR_17 = VAR_18 + VAR_23->counter_offset;
  VAR_21++;
  continue;
letscontinue:
  VAR_16 = FUNC_5(VAR_16);
  VAR_14++;
 }


 if (VAR_23->policy == VAR_3)
  goto letsreturn;
 if (VAR_23->policy == VAR_0) {
  FUNC_8(&VAR_13->lock);
  return VAR_5;
 }
 FUNC_8(&VAR_13->lock);
 return VAR_6;
}

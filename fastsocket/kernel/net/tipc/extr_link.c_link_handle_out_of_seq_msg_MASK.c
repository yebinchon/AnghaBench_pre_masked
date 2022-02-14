
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int duplicates; int deferred_recv; } ;
struct link {int deferred_inqueue_sz; TYPE_1__ stats; int newest_deferred_in; int oldest_deferred_in; int next_in_no; int checkpoint; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (char*,int ,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct link*,struct sk_buff*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int *,int *,struct sk_buff*) ;
 int FUNC_10 (struct link*,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_11(struct link *VAR_2,
           struct sk_buff *VAR_3)
{
 u32 VAR_4 = FUNC_7(FUNC_1(VAR_3));

 if (FUNC_4(FUNC_8(FUNC_1(VAR_3)) == VAR_0)) {
  FUNC_5(VAR_2, VAR_3);
  return;
 }

 FUNC_2("rx OOS msg: seq_no %u, expecting %u (%u)\n",
     VAR_4, FUNC_6(VAR_2->next_in_no), VAR_2->next_in_no);



 VAR_2->checkpoint--;






 if (FUNC_3(VAR_4, FUNC_6(VAR_2->next_in_no))) {
  VAR_2->stats.duplicates++;
  FUNC_0(VAR_3);
  return;
 }

 if (FUNC_9(&VAR_2->oldest_deferred_in,
    &VAR_2->newest_deferred_in, VAR_3)) {
  VAR_2->deferred_inqueue_sz++;
  VAR_2->stats.deferred_recv++;
  if ((VAR_2->deferred_inqueue_sz % 16) == 1)
   FUNC_10(VAR_2, VAR_1, 0, 0, 0, 0, 0);
 } else
  VAR_2->stats.duplicates++;
}

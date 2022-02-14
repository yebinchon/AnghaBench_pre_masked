
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* gap_to; scalar_t__ last_in; void* gap_after; struct sk_buff* deferred_head; } ;
struct tipc_node {TYPE_1__ bclink; } ;
struct sk_buff {int dummy; } ;


 scalar_t__ FUNC_0 (struct sk_buff*) ;
 void* FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct tipc_node *VAR_0)
{
 struct sk_buff *VAR_1 = VAR_0->bclink.deferred_head;

 VAR_0->bclink.gap_after = VAR_0->bclink.gap_to =
  FUNC_1(VAR_0->bclink.last_in);
 if (FUNC_2(VAR_1 != ((void*)0)))
  VAR_0->bclink.gap_to = FUNC_1(FUNC_0(VAR_1) - 1);
}

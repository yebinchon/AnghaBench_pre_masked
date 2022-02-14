
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sk_buff {int dummy; } ;
struct link {scalar_t__ deferred_inqueue_sz; struct sk_buff* oldest_deferred_in; TYPE_1__* newest_deferred_in; int next_in_no; } ;
struct TYPE_2__ {struct sk_buff* next; } ;


 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static struct sk_buff *FUNC_3(struct link *VAR_0,
        struct sk_buff *VAR_1)
{
 u32 VAR_2;

 if (VAR_0->oldest_deferred_in == ((void*)0))
  return VAR_1;

 VAR_2 = FUNC_2(FUNC_0(VAR_0->oldest_deferred_in));
 if (VAR_2 == FUNC_1(VAR_0->next_in_no)) {
  VAR_0->newest_deferred_in->next = VAR_1;
  VAR_1 = VAR_0->oldest_deferred_in;
  VAR_0->oldest_deferred_in = ((void*)0);
  VAR_0->deferred_inqueue_sz = 0;
 }
 return VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hlist_node {TYPE_1__* next; TYPE_1__** pprev; } ;
struct TYPE_2__ {struct TYPE_2__** pprev; } ;



__attribute__((used)) static inline void
FUNC_0(struct hlist_node *VAR_0)
{

 if (VAR_0->next)
  VAR_0->next->pprev = VAR_0->pprev;
 *VAR_0->pprev = VAR_0->next;
}

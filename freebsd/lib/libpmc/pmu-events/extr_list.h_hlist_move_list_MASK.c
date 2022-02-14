
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hlist_head {TYPE_1__* first; } ;
struct TYPE_2__ {struct TYPE_2__** pprev; } ;



__attribute__((used)) static inline void
FUNC_0(struct hlist_head *VAR_0, struct hlist_head *VAR_1)
{

 VAR_1->first = VAR_0->first;
 if (VAR_1->first)
  VAR_1->first->pprev = &VAR_1->first;
 VAR_0->first = ((void*)0);
}

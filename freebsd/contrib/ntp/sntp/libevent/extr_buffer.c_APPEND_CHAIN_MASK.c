
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct evbuffer {scalar_t__ total_len; TYPE_1__* last; int * last_with_datap; int first; } ;
struct TYPE_2__ {int next; } ;


 int FUNC_0 (struct evbuffer*) ;

__attribute__((used)) static void
FUNC_1(struct evbuffer *VAR_0, struct evbuffer *VAR_1)
{
 FUNC_0(VAR_0);
 FUNC_0(VAR_1);
 VAR_0->last->next = VAR_1->first;
 if (VAR_1->last_with_datap == &VAR_1->first)
  VAR_0->last_with_datap = &VAR_0->last->next;
 else
  VAR_0->last_with_datap = VAR_1->last_with_datap;
 VAR_0->last = VAR_1->last;
 VAR_0->total_len += VAR_1->total_len;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer_chain {int dummy; } ;
struct evbuffer {scalar_t__ total_len; int last; struct evbuffer_chain** last_with_datap; struct evbuffer_chain* first; } ;


 int FUNC_0 (struct evbuffer*) ;
 struct evbuffer_chain** FUNC_1 (struct evbuffer*) ;

__attribute__((used)) static void
FUNC_2(struct evbuffer *VAR_0, struct evbuffer *VAR_1)
{
 struct evbuffer_chain **VAR_2;

 FUNC_0(VAR_0);
 FUNC_0(VAR_1);

 VAR_2 = FUNC_1(VAR_0);
 *VAR_2 = VAR_1->first;

 if (VAR_1->last_with_datap == &VAR_1->first)
  VAR_0->last_with_datap = VAR_2;
 else
  VAR_0->last_with_datap = VAR_1->last_with_datap;
 VAR_0->last = VAR_1->last;
 VAR_0->total_len += VAR_1->total_len;
}

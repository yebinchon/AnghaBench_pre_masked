
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer_chain {int dummy; } ;
struct evbuffer {scalar_t__ total_len; struct evbuffer_chain* first; struct evbuffer_chain** last_with_datap; struct evbuffer_chain* last; } ;


 int FUNC_0 (struct evbuffer*) ;
 int FUNC_1 (struct evbuffer*) ;

__attribute__((used)) static inline void
FUNC_2(struct evbuffer *VAR_0, struct evbuffer_chain *VAR_1,
  struct evbuffer_chain *VAR_2)
{
 FUNC_0(VAR_0);

 if (!VAR_1) {
  FUNC_1(VAR_0);
  return;
 }

 VAR_0->first = VAR_1;
 VAR_0->last = VAR_2;
 VAR_0->last_with_datap = &VAR_0->first;
 VAR_0->total_len = 0;
}

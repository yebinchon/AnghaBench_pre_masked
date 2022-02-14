
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer {scalar_t__ total_len; int * first; int ** last_with_datap; int * last; } ;


 int FUNC_0 (struct evbuffer*) ;

__attribute__((used)) static inline void
FUNC_1(struct evbuffer *VAR_0)
{
 FUNC_0(VAR_0);
 VAR_0->first = ((void*)0);
 VAR_0->last = ((void*)0);
 VAR_0->last_with_datap = &(VAR_0)->first;
 VAR_0->total_len = 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer_chain {scalar_t__ off; scalar_t__ misalign; scalar_t__ buffer; struct evbuffer_chain* next; } ;
struct evbuffer {struct evbuffer_chain** last_with_datap; struct evbuffer_chain* last; } ;


 int FUNC_0 (struct evbuffer*) ;
 int FUNC_1 (struct evbuffer_chain*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct evbuffer*) ;
 struct evbuffer_chain* FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_6(struct evbuffer *VAR_0, struct evbuffer_chain **VAR_1,
  struct evbuffer_chain **VAR_2)
{
 struct evbuffer_chain *VAR_3, **VAR_4;

 FUNC_0(VAR_0);

 if (!FUNC_3(VAR_0)) {
  *VAR_1 = *VAR_2 = ((void*)0);
  return 0;
 }

 VAR_4 = VAR_0->last_with_datap;
 if (!FUNC_1(*VAR_4))
  VAR_4 = &(*VAR_4)->next;
 FUNC_2(FUNC_1(*VAR_4));
 VAR_3 = *VAR_1 = *VAR_4;
 *VAR_2 = VAR_0->last;



 if (VAR_3->off) {
  struct evbuffer_chain *VAR_5;

  FUNC_2(VAR_4 == VAR_0->last_with_datap);
  VAR_5 = FUNC_4(VAR_3->off);
  if (!VAR_5)
   return -1;
  FUNC_5(VAR_5->buffer, VAR_3->buffer + VAR_3->misalign,
   VAR_3->off);
  VAR_5->off = VAR_3->off;
  *VAR_0->last_with_datap = VAR_5;
  VAR_0->last = VAR_5;
  VAR_3->misalign += VAR_3->off;
  VAR_3->off = 0;
 } else {
  VAR_0->last = *VAR_0->last_with_datap;
  *VAR_4 = ((void*)0);
 }

 return 0;
}

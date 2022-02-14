
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t pos_in_chain; struct evbuffer_chain* chain; } ;
struct evbuffer_ptr {int pos; TYPE_1__ internal_; } ;
struct evbuffer_chain {int misalign; size_t off; struct evbuffer_chain* next; scalar_t__ buffer; } ;



__attribute__((used)) static inline int
FUNC_0(
 struct evbuffer_ptr *VAR_0, const char *VAR_1)
{
 int VAR_2 = 0;
 struct evbuffer_chain *VAR_3 = VAR_0->internal_.chain;
 size_t VAR_4 = VAR_0->internal_.pos_in_chain;

 if (!VAR_3)
  return 0;

 while (1) {
  char *VAR_5 = (char *)VAR_3->buffer + VAR_3->misalign;
  for (; VAR_4 < VAR_3->off; ++VAR_4) {
   const char *VAR_6 = VAR_1;
   while (*VAR_6) {
    if (VAR_5[VAR_4] == *VAR_6++)
     goto next;
   }
   VAR_0->internal_.chain = VAR_3;
   VAR_0->internal_.pos_in_chain = VAR_4;
   VAR_0->pos += VAR_2;
   return VAR_2;
  next:
   ++VAR_2;
  }
  VAR_4 = 0;

  if (! VAR_3->next) {
   VAR_0->internal_.chain = VAR_3;
   VAR_0->internal_.pos_in_chain = VAR_4;
   VAR_0->pos += VAR_2;
   return VAR_2;
  }

  VAR_3 = VAR_3->next;
 }
}

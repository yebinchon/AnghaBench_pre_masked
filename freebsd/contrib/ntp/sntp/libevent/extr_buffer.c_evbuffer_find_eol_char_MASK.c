
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t pos_in_chain; struct evbuffer_chain* chain; } ;
struct evbuffer_ptr {int pos; TYPE_1__ internal_; } ;
struct evbuffer_chain {int misalign; struct evbuffer_chain* next; scalar_t__ off; scalar_t__ buffer; } ;
typedef int ev_ssize_t ;


 char* FUNC_0 (char*,scalar_t__) ;

__attribute__((used)) static ev_ssize_t
FUNC_1(struct evbuffer_ptr *VAR_0)
{
 struct evbuffer_chain *VAR_1 = VAR_0->internal_.chain;
 size_t VAR_2 = VAR_0->internal_.pos_in_chain;
 while (VAR_1 != ((void*)0)) {
  char *VAR_3 = (char *)VAR_1->buffer + VAR_1->misalign;
  char *VAR_4 = FUNC_0(VAR_3+VAR_2, VAR_1->off-VAR_2);
  if (VAR_4) {
   VAR_0->internal_.chain = VAR_1;
   VAR_0->internal_.pos_in_chain = VAR_4 - VAR_3;
   VAR_0->pos += (VAR_4 - VAR_3) - VAR_2;
   return VAR_0->pos;
  }
  VAR_0->pos += VAR_1->off - VAR_2;
  VAR_2 = 0;
  VAR_1 = VAR_1->next;
 }

 return (-1);
}

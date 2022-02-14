
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t pos_in_chain; struct evbuffer_chain* chain; } ;
struct evbuffer_ptr {int pos; TYPE_1__ internal_; } ;
struct evbuffer_chain {int misalign; struct evbuffer_chain* next; scalar_t__ off; scalar_t__ buffer; } ;
typedef int ev_ssize_t ;


 char* FUNC_0 (char*,char const,scalar_t__) ;

__attribute__((used)) static inline ev_ssize_t
FUNC_1(struct evbuffer_ptr *VAR_0, const char VAR_1)
{
 struct evbuffer_chain *VAR_2 = VAR_0->internal_.chain;
 size_t VAR_3 = VAR_0->internal_.pos_in_chain;
 while (VAR_2 != ((void*)0)) {
  char *VAR_4 = (char *)VAR_2->buffer + VAR_2->misalign;
  char *VAR_5 = FUNC_0(VAR_4+VAR_3, VAR_1, VAR_2->off-VAR_3);
  if (VAR_5) {
   VAR_0->internal_.chain = VAR_2;
   VAR_0->internal_.pos_in_chain = VAR_5 - VAR_4;
   VAR_0->pos += (VAR_5 - VAR_4 - VAR_3);
   return VAR_0->pos;
  }
  VAR_0->pos += VAR_2->off - VAR_3;
  VAR_3 = 0;
  VAR_2 = VAR_2->next;
 }

 return (-1);
}

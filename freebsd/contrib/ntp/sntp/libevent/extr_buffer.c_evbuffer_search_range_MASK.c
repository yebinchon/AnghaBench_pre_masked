
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pos_in_chain; struct evbuffer_chain* chain; } ;
struct evbuffer_ptr {scalar_t__ pos; TYPE_1__ internal_; } ;
struct evbuffer_chain {unsigned char* buffer; int misalign; scalar_t__ off; struct evbuffer_chain* next; } ;
struct evbuffer {struct evbuffer_chain* first; } ;
typedef int pos ;
typedef scalar_t__ ev_ssize_t ;


 int FUNC_0 (struct evbuffer*) ;
 int FUNC_1 (struct evbuffer*) ;
 size_t VAR_0 ;
 int FUNC_2 (struct evbuffer_ptr*) ;
 int FUNC_3 (struct evbuffer*,struct evbuffer_ptr*,char const*,size_t) ;
 unsigned char* FUNC_4 (unsigned char const*,char,scalar_t__) ;
 int FUNC_5 (struct evbuffer_ptr*,struct evbuffer_ptr const*,int) ;

struct evbuffer_ptr
FUNC_6(struct evbuffer *VAR_1, const char *VAR_2, size_t VAR_3, const struct evbuffer_ptr *VAR_4, const struct evbuffer_ptr *VAR_5)
{
 struct evbuffer_ptr VAR_6;
 struct evbuffer_chain *VAR_7, *VAR_8 = ((void*)0);
 const unsigned char *VAR_9;
 char VAR_10;

 FUNC_0(VAR_1);

 if (VAR_4) {
  FUNC_5(&VAR_6, VAR_4, sizeof(VAR_6));
  VAR_7 = VAR_6.internal_.chain;
 } else {
  VAR_6.pos = 0;
  VAR_7 = VAR_6.internal_.chain = VAR_1->first;
  VAR_6.internal_.pos_in_chain = 0;
 }

 if (VAR_5)
  VAR_8 = VAR_5->internal_.chain;

 if (!VAR_3 || VAR_3 > VAR_0)
  goto done;

 VAR_10 = VAR_2[0];

 while (VAR_7) {
  const unsigned char *VAR_11 =
      VAR_7->buffer + VAR_7->misalign +
      VAR_6.internal_.pos_in_chain;
  VAR_9 = FUNC_4(VAR_11, VAR_10,
      VAR_7->off - VAR_6.internal_.pos_in_chain);
  if (VAR_9) {
   VAR_6.pos += VAR_9 - VAR_11;
   VAR_6.internal_.pos_in_chain += VAR_9 - VAR_11;
   if (!FUNC_3(VAR_1, &VAR_6, VAR_2, VAR_3)) {
    if (VAR_5 && VAR_6.pos + (ev_ssize_t)VAR_3 > VAR_5->pos)
     goto not_found;
    else
     goto done;
   }
   ++VAR_6.pos;
   ++VAR_6.internal_.pos_in_chain;
   if (VAR_6.internal_.pos_in_chain == VAR_7->off) {
    VAR_7 = VAR_6.internal_.chain = VAR_7->next;
    VAR_6.internal_.pos_in_chain = 0;
   }
  } else {
   if (VAR_7 == VAR_8)
    goto not_found;
   VAR_6.pos += VAR_7->off - VAR_6.internal_.pos_in_chain;
   VAR_7 = VAR_6.internal_.chain = VAR_7->next;
   VAR_6.internal_.pos_in_chain = 0;
  }
 }

not_found:
 FUNC_2(&VAR_6);
done:
 FUNC_1(VAR_1);
 return VAR_6;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ pos_in_chain; struct evbuffer_chain* chain; } ;
struct evbuffer_ptr {scalar_t__ pos; TYPE_1__ internal_; } ;
struct evbuffer_iovec {scalar_t__ iov_len; scalar_t__ iov_base; } ;
struct evbuffer_chain {struct evbuffer_chain* next; scalar_t__ off; scalar_t__ misalign; scalar_t__ buffer; } ;
struct evbuffer {scalar_t__ total_len; struct evbuffer_chain* first; } ;
typedef scalar_t__ ev_ssize_t ;


 int FUNC_0 (struct evbuffer*) ;
 int FUNC_1 (struct evbuffer*) ;

int
FUNC_2(struct evbuffer *VAR_0, ev_ssize_t VAR_1,
    struct evbuffer_ptr *VAR_2,
    struct evbuffer_iovec *VAR_3, int VAR_4)
{
 struct evbuffer_chain *VAR_5;
 int VAR_6 = 0;
 ev_ssize_t VAR_7 = 0;


 if (VAR_2 && VAR_2->internal_.chain == ((void*)0))
  return 0;

 FUNC_0(VAR_0);

 if (VAR_2) {
  VAR_5 = VAR_2->internal_.chain;
  VAR_7 = VAR_5->off
      - VAR_2->internal_.pos_in_chain;
  VAR_6 = 1;
  if (VAR_4 > 0) {
   VAR_3[0].iov_base = VAR_5->buffer + VAR_5->misalign
       + VAR_2->internal_.pos_in_chain;
   VAR_3[0].iov_len = VAR_7;
  }
  VAR_5 = VAR_5->next;
 } else {
  VAR_5 = VAR_0->first;
 }

 if (VAR_4 == 0 && VAR_1 < 0) {


  VAR_1 = VAR_0->total_len;
  if (VAR_2) {
   VAR_1 -= VAR_2->pos;
  }
 }

 while (VAR_5) {
  if (VAR_1 >= 0 && VAR_7 >= VAR_1)
   break;
  if (VAR_6<VAR_4) {
   VAR_3[VAR_6].iov_base = VAR_5->buffer + VAR_5->misalign;
   VAR_3[VAR_6].iov_len = VAR_5->off;
  } else if (VAR_1<0) {
   break;
  }
  ++VAR_6;
  VAR_7 += VAR_5->off;
  VAR_5 = VAR_5->next;
 }

 FUNC_1(VAR_0);

 return VAR_6;
}

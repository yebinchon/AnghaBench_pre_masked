
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer_iovec {size_t iov_len; int iov_base; } ;
struct evbuffer_chain {struct evbuffer_chain* next; } ;
struct evbuffer {struct evbuffer_chain** last_with_datap; } ;
typedef size_t ev_ssize_t ;


 int FUNC_0 (struct evbuffer*) ;
 scalar_t__ FUNC_1 (struct evbuffer_chain*) ;
 int FUNC_2 (struct evbuffer_chain*) ;

int
FUNC_3(struct evbuffer *VAR_0, ev_ssize_t VAR_1,
    struct evbuffer_iovec *VAR_2, int VAR_3,
    struct evbuffer_chain ***VAR_4, int VAR_5)
{
 struct evbuffer_chain *VAR_6;
 struct evbuffer_chain **VAR_7;
 size_t VAR_8;
 int VAR_9;
 FUNC_0(VAR_0);

 if (VAR_1 < 0)
  return -1;

 VAR_8 = 0;

 VAR_7 = VAR_0->last_with_datap;
 if (FUNC_1(*VAR_7) == 0) {
  VAR_7 = &(*VAR_7)->next;
 }

 VAR_6 = *VAR_7;
 for (VAR_9 = 0; VAR_9 < VAR_3 && VAR_8 < (size_t)VAR_1; ++VAR_9) {
  size_t VAR_10 = (size_t) FUNC_1(VAR_6);
  if (VAR_10 > (VAR_1 - VAR_8) && VAR_5)
   VAR_10 = VAR_1 - VAR_8;
  VAR_2[VAR_9].iov_base = FUNC_2(VAR_6);
  VAR_2[VAR_9].iov_len = VAR_10;
  VAR_8 += VAR_10;
  VAR_6 = VAR_6->next;
 }

 *VAR_4 = VAR_7;
 return VAR_9;
}

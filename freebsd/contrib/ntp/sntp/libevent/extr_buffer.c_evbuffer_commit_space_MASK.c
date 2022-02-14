
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer_iovec {void* iov_base; size_t iov_len; } ;
struct evbuffer_chain {size_t off; struct evbuffer_chain* next; } ;
struct evbuffer {size_t total_len; size_t n_add_for_cb; struct evbuffer_chain** last_with_datap; struct evbuffer_chain* last; scalar_t__ freeze_end; } ;


 size_t FUNC_0 (struct evbuffer_chain*) ;
 scalar_t__ FUNC_1 (struct evbuffer_chain*) ;
 int FUNC_2 (struct evbuffer*) ;
 int FUNC_3 (struct evbuffer*) ;
 int FUNC_4 (struct evbuffer*) ;
 int FUNC_5 (struct evbuffer*) ;

int
FUNC_6(struct evbuffer *VAR_0,
    struct evbuffer_iovec *VAR_1, int VAR_2)
{
 struct evbuffer_chain *VAR_3, **VAR_4, **VAR_5;
 int VAR_6 = -1;
 size_t VAR_7 = 0;
 int VAR_8;

 FUNC_2(VAR_0);

 if (VAR_0->freeze_end)
  goto done;
 if (VAR_2 == 0) {
  VAR_6 = 0;
  goto done;
 } else if (VAR_2 == 1 &&
     (VAR_0->last && VAR_1[0].iov_base == (void*)FUNC_1(VAR_0->last))) {


  if ((size_t)VAR_1[0].iov_len > (size_t)FUNC_0(VAR_0->last))
   goto done;
  VAR_0->last->off += VAR_1[0].iov_len;
  VAR_7 = VAR_1[0].iov_len;
  if (VAR_7)
   FUNC_4(VAR_0);
  goto okay;
 }


 VAR_4 = VAR_0->last_with_datap;
 if (!*VAR_4)
  goto done;
 if (FUNC_0(*VAR_4) == 0) {
  VAR_4 = &(*VAR_4)->next;
 }

 VAR_3 = *VAR_4;


 for (VAR_8=0; VAR_8<VAR_2; ++VAR_8) {
  if (!VAR_3)
   goto done;
  if (VAR_1[VAR_8].iov_base != (void*)FUNC_1(VAR_3) ||
      (size_t)VAR_1[VAR_8].iov_len > FUNC_0(VAR_3))
   goto done;
  VAR_3 = VAR_3->next;
 }

 VAR_5 = VAR_4;
 for (VAR_8=0; VAR_8<VAR_2; ++VAR_8) {
  (*VAR_5)->off += VAR_1[VAR_8].iov_len;
  VAR_7 += VAR_1[VAR_8].iov_len;
  if (VAR_1[VAR_8].iov_len) {
   VAR_0->last_with_datap = VAR_5;
  }
  VAR_5 = &(*VAR_5)->next;
 }

okay:
 VAR_0->total_len += VAR_7;
 VAR_0->n_add_for_cb += VAR_7;
 VAR_6 = 0;
 FUNC_5(VAR_0);

done:
 FUNC_3(VAR_0);
 return VAR_6;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdr_stream {int * p; int * end; struct kvec* iov; struct xdr_buf* buf; } ;
struct xdr_buf {int buflen; int page_len; size_t len; TYPE_1__* tail; struct kvec* head; } ;
struct kvec {int iov_len; scalar_t__ iov_base; } ;
typedef int __be32 ;
struct TYPE_2__ {int iov_len; } ;


 int FUNC_0 (int) ;

void FUNC_1(struct xdr_stream *VAR_0, struct xdr_buf *VAR_1, __be32 *VAR_2)
{
 struct kvec *VAR_3 = VAR_1->head;
 int VAR_4 = VAR_1->buflen - VAR_1->page_len - VAR_1->tail[0].iov_len;

 FUNC_0(VAR_4 < 0);
 VAR_0->buf = VAR_1;
 VAR_0->iov = VAR_3;
 VAR_0->p = (__be32 *)((char *)VAR_3->iov_base + VAR_3->iov_len);
 VAR_0->end = (__be32 *)((char *)VAR_3->iov_base + VAR_4);
 FUNC_0(VAR_3->iov_len > VAR_4);

 if (VAR_2 != VAR_0->p && VAR_2 != ((void*)0)) {
  size_t VAR_5;

  FUNC_0(VAR_2 < VAR_0->p || VAR_2 > VAR_0->end);
  VAR_5 = (char *)VAR_2 - (char *)VAR_0->p;
  VAR_0->p = VAR_2;
  VAR_1->len += VAR_5;
  VAR_3->iov_len += VAR_5;
 }
}

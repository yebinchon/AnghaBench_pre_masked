
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {unsigned int nwords; int * page_ptr; int * end; int * p; struct kvec* iov; struct xdr_buf* buf; } ;
struct xdr_buf {unsigned int page_len; int buflen; int len; struct kvec* tail; struct kvec* head; } ;
struct kvec {int iov_len; scalar_t__ iov_base; } ;
typedef int ssize_t ;
typedef int __be32 ;


 void* FUNC_0 (unsigned int) ;
 int FUNC_1 (struct xdr_buf*,int) ;
 int FUNC_2 (struct xdr_buf*,unsigned int) ;

void FUNC_3(struct xdr_stream *VAR_0, unsigned int VAR_1)
{
 struct xdr_buf *VAR_2 = VAR_0->buf;
 struct kvec *VAR_3;
 ssize_t VAR_4;
 unsigned int VAR_5 = FUNC_0(VAR_1);
 unsigned int VAR_6;
 int VAR_7;

 if (VAR_0->nwords == 0)
  return;
 if (VAR_5 > VAR_0->nwords) {
  VAR_5 = VAR_0->nwords;
  VAR_1 = VAR_5 << 2;
 }

 VAR_3 = VAR_2->head;
 VAR_4 = VAR_3->iov_len + (char *)VAR_3->iov_base - (char *)VAR_0->p;
 if (VAR_4 > 0)
  FUNC_1(VAR_2, VAR_4);


 if (VAR_2->page_len > VAR_1)
  FUNC_2(VAR_2, VAR_2->page_len - VAR_1);
 VAR_7 = (VAR_5 << 2) - VAR_1;
 VAR_0->iov = VAR_3 = VAR_2->tail;

 VAR_6 = VAR_3->iov_len;
 VAR_4 = VAR_2->buflen - VAR_2->len;
 if (VAR_6 > VAR_4 + VAR_7)
  VAR_6 -= VAR_4;
 else
  VAR_6 = VAR_7;




 VAR_0->p = (__be32 *)((char *)VAR_3->iov_base + VAR_7);
 VAR_0->end = (__be32 *)((char *)VAR_3->iov_base + VAR_6);
 VAR_0->page_ptr = ((void*)0);
 VAR_0->nwords = FUNC_0(VAR_6 - VAR_7);
}

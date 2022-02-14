
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_buf {int len; int buflen; scalar_t__ page_len; int * tail; struct kvec* head; } ;
struct kvec {int iov_len; } ;


 int VAR_0 ;

void
FUNC_0(struct kvec *VAR_1, struct xdr_buf *VAR_2)
{
 VAR_2->head[0] = *VAR_1;
 VAR_2->tail[0] = VAR_0;
 VAR_2->page_len = 0;
 VAR_2->buflen = VAR_2->len = VAR_1->iov_len;
}

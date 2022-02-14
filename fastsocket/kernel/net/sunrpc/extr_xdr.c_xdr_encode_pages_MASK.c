
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char u32 ;
struct xdr_buf {unsigned int page_base; unsigned int page_len; unsigned int buflen; unsigned int len; TYPE_1__* head; struct page** pages; struct kvec* tail; } ;
struct page {int dummy; } ;
struct kvec {char* iov_base; unsigned int iov_len; } ;
struct TYPE_2__ {int iov_len; scalar_t__ iov_base; } ;


 int FUNC_0 (int ) ;

void
FUNC_1(struct xdr_buf *VAR_0, struct page **VAR_1, unsigned int VAR_2,
   unsigned int VAR_3)
{
 struct kvec *VAR_4 = VAR_0->tail;
 u32 *VAR_5;

 VAR_0->pages = VAR_1;
 VAR_0->page_base = VAR_2;
 VAR_0->page_len = VAR_3;

 VAR_5 = (u32 *)VAR_0->head[0].iov_base + FUNC_0(VAR_0->head[0].iov_len);
 VAR_4->iov_base = VAR_5;
 VAR_4->iov_len = 0;

 if (VAR_3 & 3) {
  unsigned int VAR_6 = 4 - (VAR_3 & 3);

  *VAR_5 = 0;
  VAR_4->iov_base = (char *)VAR_5 + (VAR_3 & 3);
  VAR_4->iov_len = VAR_6;
  VAR_3 += VAR_6;
 }
 VAR_0->buflen += VAR_3;
 VAR_0->len += VAR_3;
}

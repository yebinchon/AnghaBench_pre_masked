
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_buf {unsigned int page_len; scalar_t__ buflen; scalar_t__ len; scalar_t__ page_base; int pages; struct kvec* head; struct kvec* tail; } ;
struct kvec {size_t iov_len; scalar_t__ iov_base; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ,scalar_t__,size_t) ;
 int FUNC_2 (int ,scalar_t__,char*,size_t) ;
 int FUNC_3 (int ,scalar_t__,scalar_t__,unsigned int) ;
 int FUNC_4 (scalar_t__,char*,size_t) ;
 int FUNC_5 (char*,scalar_t__,size_t) ;

__attribute__((used)) static void
FUNC_6(struct xdr_buf *VAR_0, size_t VAR_1)
{
 struct kvec *VAR_2, *VAR_3;
 size_t VAR_4, VAR_5;
 unsigned int VAR_6 = VAR_0->page_len;

 VAR_3 = VAR_0->tail;
 VAR_2 = VAR_0->head;
 FUNC_0 (VAR_1 > VAR_2->iov_len);


 if (VAR_3->iov_len != 0) {
  if (VAR_3->iov_len > VAR_1) {
   VAR_4 = VAR_3->iov_len - VAR_1;
   FUNC_5((char *)VAR_3->iov_base + VAR_1,
     VAR_3->iov_base, VAR_4);
  }

  VAR_4 = VAR_1;
  if (VAR_4 > VAR_6)
   VAR_4 = VAR_6;
  VAR_5 = VAR_1 - VAR_4;
  if (VAR_5 >= VAR_3->iov_len)
   VAR_4 = 0;
  else if (VAR_4 > VAR_3->iov_len - VAR_5)
   VAR_4 = VAR_3->iov_len - VAR_5;
  if (VAR_4 != 0)
   FUNC_1((char *)VAR_3->iov_base + VAR_5,
     VAR_0->pages,
     VAR_0->page_base + VAR_6 + VAR_5 - VAR_1,
     VAR_4);

  if (VAR_1 > VAR_6) {
   VAR_5 = VAR_4 = VAR_1 - VAR_6;
   if (VAR_4 > VAR_3->iov_len)
    VAR_4 = VAR_3->iov_len;
   FUNC_4(VAR_3->iov_base,
     (char *)VAR_2->iov_base +
     VAR_2->iov_len - VAR_5,
     VAR_4);
  }
 }

 if (VAR_6 != 0) {
  if (VAR_6 > VAR_1)
   FUNC_3(VAR_0->pages,
     VAR_0->page_base + VAR_1,
     VAR_0->page_base,
     VAR_6 - VAR_1);
  VAR_4 = VAR_1;
  if (VAR_1 > VAR_6)
   VAR_4 = VAR_6;
  FUNC_2(VAR_0->pages, VAR_0->page_base,
    (char *)VAR_2->iov_base + VAR_2->iov_len - VAR_1,
    VAR_4);
 }
 VAR_2->iov_len -= VAR_1;
 VAR_0->buflen -= VAR_1;

 if (VAR_0->len > VAR_0->buflen)
  VAR_0->len = VAR_0->buflen;
}

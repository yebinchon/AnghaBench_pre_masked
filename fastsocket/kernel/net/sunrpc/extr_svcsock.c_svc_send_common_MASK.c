
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xdr_buf {size_t page_base; unsigned int page_len; int len; TYPE_2__* tail; TYPE_1__* head; struct page** pages; } ;
struct socket {int dummy; } ;
struct page {int dummy; } ;
struct TYPE_4__ {int iov_len; } ;
struct TYPE_3__ {int iov_len; } ;


 unsigned int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct socket*,struct page*,unsigned long,int,unsigned int) ;

int FUNC_1(struct socket *VAR_2, struct xdr_buf *VAR_3,
      struct page *VAR_4, unsigned long VAR_5,
      struct page *VAR_6, unsigned long VAR_7)
{
 int VAR_8;
 int VAR_9;
 struct page **VAR_10 = VAR_3->pages;
 size_t VAR_11 = VAR_3->page_base;
 unsigned int VAR_12 = VAR_3->page_len;
 unsigned int VAR_13 = VAR_0;
 int VAR_14;
 int VAR_15 = 0;

 VAR_14 = VAR_3->len;


 if (VAR_14 == VAR_3->head[0].iov_len)
  VAR_13 = 0;
 VAR_15 = FUNC_0(VAR_2, VAR_4, VAR_5,
      VAR_3->head[0].iov_len, VAR_13);
 if (VAR_15 != VAR_3->head[0].iov_len)
  goto out;
 VAR_14 -= VAR_3->head[0].iov_len;
 if (VAR_14 == 0)
  goto out;


 VAR_9 = VAR_1 - VAR_11 < VAR_12 ? VAR_1 - VAR_11 : VAR_12;
 while (VAR_12 > 0) {
  if (VAR_14 == VAR_9)
   VAR_13 = 0;
  VAR_8 = FUNC_0(VAR_2, *VAR_10, VAR_11, VAR_9, VAR_13);
  if (VAR_8 > 0)
   VAR_15 += VAR_8;
  if (VAR_8 != VAR_9)
   goto out;
  VAR_14 -= VAR_9;
  VAR_12 -= VAR_9;
  VAR_9 = VAR_1 < VAR_12 ? VAR_1 : VAR_12;
  VAR_11 = 0;
  VAR_10++;
 }


 if (VAR_3->tail[0].iov_len) {
  VAR_8 = FUNC_0(VAR_2, VAR_6, VAR_7,
       VAR_3->tail[0].iov_len, 0);
  if (VAR_8 > 0)
   VAR_15 += VAR_8;
 }

out:
 return VAR_15;
}

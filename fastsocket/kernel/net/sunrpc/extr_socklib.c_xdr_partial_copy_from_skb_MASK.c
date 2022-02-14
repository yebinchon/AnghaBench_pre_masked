
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t (* xdr_skb_read_actor ) (struct xdr_skb_reader*,char*,unsigned int) ;
struct xdr_skb_reader {int count; } ;
struct xdr_buf {unsigned int page_len; TYPE_2__* tail; scalar_t__ page_base; TYPE_1__* head; struct page** pages; } ;
struct page {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_4__ {unsigned int iov_len; scalar_t__ iov_base; } ;
struct TYPE_3__ {unsigned int iov_len; scalar_t__ iov_base; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 struct page* FUNC_0 (int ) ;
 int FUNC_1 (struct page*) ;
 char* FUNC_2 (struct page*,int ) ;
 int FUNC_3 (char*,int ) ;
 scalar_t__ FUNC_4 (int) ;

ssize_t FUNC_5(struct xdr_buf *VAR_6, unsigned int VAR_7, struct xdr_skb_reader *VAR_8, xdr_skb_read_actor VAR_9)
{
 struct page **VAR_10 = VAR_6->pages;
 unsigned int VAR_11, VAR_12 = VAR_6->page_len;
 ssize_t VAR_13 = 0;
 size_t VAR_14;

 VAR_11 = VAR_6->head[0].iov_len;
 if (VAR_7 < VAR_11) {
  VAR_11 -= VAR_7;
  VAR_14 = VAR_9(VAR_8, (char *)VAR_6->head[0].iov_base + VAR_7, VAR_11);
  VAR_13 += VAR_14;
  if (VAR_14 != VAR_11 || !VAR_8->count)
   goto out;
  VAR_7 = 0;
 } else
  VAR_7 -= VAR_11;

 if (FUNC_4(VAR_12 == 0))
  goto copy_tail;
 if (FUNC_4(VAR_7 >= VAR_12)) {
  VAR_7 -= VAR_12;
  goto copy_tail;
 }
 if (VAR_7 || VAR_6->page_base) {
  VAR_12 -= VAR_7;
  VAR_7 += VAR_6->page_base;
  VAR_10 += VAR_7 >> VAR_4;
  VAR_7 &= ~VAR_3;
 }
 do {
  char *VAR_15;



  if (FUNC_4(*VAR_10 == ((void*)0))) {
   *VAR_10 = FUNC_0(VAR_1);
   if (FUNC_4(*VAR_10 == ((void*)0))) {
    if (VAR_13 == 0)
     VAR_13 = -VAR_0;
    goto out;
   }
  }

  VAR_11 = VAR_5;
  VAR_15 = FUNC_2(*VAR_10, VAR_2);
  if (VAR_7) {
   VAR_11 -= VAR_7;
   if (VAR_12 < VAR_11)
    VAR_11 = VAR_12;
   VAR_14 = VAR_9(VAR_8, VAR_15 + VAR_7, VAR_11);
   VAR_7 = 0;
  } else {
   if (VAR_12 < VAR_11)
    VAR_11 = VAR_12;
   VAR_14 = VAR_9(VAR_8, VAR_15, VAR_11);
  }
  FUNC_1(*VAR_10);
  FUNC_3(VAR_15, VAR_2);
  VAR_13 += VAR_14;
  if (VAR_14 != VAR_11 || !VAR_8->count)
   goto out;
  VAR_10++;
 } while ((VAR_12 -= VAR_11) != 0);
copy_tail:
 VAR_11 = VAR_6->tail[0].iov_len;
 if (VAR_7 < VAR_11)
  VAR_13 += VAR_9(VAR_8, (char *)VAR_6->tail[0].iov_base + VAR_7, VAR_11 - VAR_7);
out:
 return VAR_13;
}

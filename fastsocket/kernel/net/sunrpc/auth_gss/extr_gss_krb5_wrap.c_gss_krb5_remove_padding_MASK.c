
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct xdr_buf {size_t len; size_t page_len; size_t page_base; TYPE_2__* tail; int * pages; TYPE_1__* head; } ;
struct TYPE_4__ {size_t iov_len; size_t iov_base; } ;
struct TYPE_3__ {size_t iov_len; size_t iov_base; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int* FUNC_1 (int ,int ) ;
 int FUNC_2 (int*,int ) ;

__attribute__((used)) static inline int
FUNC_3(struct xdr_buf *VAR_4, int VAR_5)
{
 u8 *VAR_6;
 u8 VAR_7;
 size_t VAR_8 = VAR_4->len;

 if (VAR_8 <= VAR_4->head[0].iov_len) {
  VAR_7 = *(u8 *)(VAR_4->head[0].iov_base + VAR_8 - 1);
  if (VAR_7 > VAR_4->head[0].iov_len)
   return -VAR_0;
  VAR_4->head[0].iov_len -= VAR_7;
  goto out;
 } else
  VAR_8 -= VAR_4->head[0].iov_len;
 if (VAR_8 <= VAR_4->page_len) {
  unsigned int VAR_9 = (VAR_4->page_base + VAR_8 - 1)
     >>VAR_2;
  unsigned int VAR_10 = (VAR_4->page_base + VAR_8 - 1)
     & (VAR_3 - 1);
  VAR_6 = FUNC_1(VAR_4->pages[VAR_9], VAR_1);
  VAR_7 = *(VAR_6 + VAR_10);
  FUNC_2(VAR_6, VAR_1);
  goto out;
 } else
  VAR_8 -= VAR_4->page_len;
 FUNC_0(VAR_8 > VAR_4->tail[0].iov_len);
 VAR_7 = *(u8 *)(VAR_4->tail[0].iov_base + VAR_8 - 1);
out:
 if (VAR_7 > VAR_5)
  return -VAR_0;
 if (VAR_4->len > VAR_7)
  VAR_4->len -= VAR_7;
 else
  return -VAR_0;
 return 0;
}

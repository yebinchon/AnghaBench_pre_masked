
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xdr_buf {int page_len; TYPE_2__* tail; int ** pages; scalar_t__ page_base; TYPE_1__* head; } ;
struct rpcrdma_mr_seg {int mr_len; int * mr_offset; int * mr_page; } ;
typedef enum rpcrdma_chunktype { ____Placeholder_rpcrdma_chunktype } rpcrdma_chunktype ;
struct TYPE_4__ {int iov_len; int * iov_base; } ;
struct TYPE_3__ {int iov_len; int * iov_base; } ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (int ,scalar_t__,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int
FUNC_1(struct xdr_buf *VAR_3, unsigned int VAR_4,
 enum rpcrdma_chunktype VAR_5, struct rpcrdma_mr_seg *VAR_6, int VAR_7)
{
 int VAR_8, VAR_9 = 0, VAR_10;

 if (VAR_4 == 0 && VAR_3->head[0].iov_len) {
  VAR_6[VAR_9].mr_page = ((void*)0);
  VAR_6[VAR_9].mr_offset = VAR_3->head[0].iov_base;
  VAR_6[VAR_9].mr_len = VAR_3->head[0].iov_len;
  ++VAR_9;
 }

 if (VAR_3->page_len && (VAR_3->pages[0] != ((void*)0))) {
  if (VAR_9 == VAR_7)
   return 0;
  VAR_6[VAR_9].mr_page = VAR_3->pages[0];
  VAR_6[VAR_9].mr_offset = (void *)(unsigned long) VAR_3->page_base;
  VAR_6[VAR_9].mr_len = FUNC_0(VAR_1,
   VAR_0 - VAR_3->page_base, VAR_3->page_len);
  VAR_8 = VAR_3->page_len - VAR_6[VAR_9].mr_len;
  ++VAR_9;
  VAR_10 = 1;
  while (VAR_8 > 0) {
   if (VAR_9 == VAR_7)
    return 0;
   VAR_6[VAR_9].mr_page = VAR_3->pages[VAR_10];
   VAR_6[VAR_9].mr_offset = ((void*)0);
   VAR_6[VAR_9].mr_len = FUNC_0(VAR_1, VAR_0, VAR_8);
   VAR_8 -= VAR_6[VAR_9].mr_len;
   ++VAR_9;
   ++VAR_10;
  }
 }

 if (VAR_3->tail[0].iov_len) {


  if (VAR_3->tail[0].iov_len < 4 && VAR_2)
   return VAR_9;
  if (VAR_9 == VAR_7)
   return 0;
  VAR_6[VAR_9].mr_page = ((void*)0);
  VAR_6[VAR_9].mr_offset = VAR_3->tail[0].iov_base;
  VAR_6[VAR_9].mr_len = VAR_3->tail[0].iov_len;
  ++VAR_9;
 }

 return VAR_9;
}

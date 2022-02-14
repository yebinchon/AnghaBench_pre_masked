
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xdr_buf {size_t buflen; scalar_t__ len; scalar_t__ flags; scalar_t__ page_len; TYPE_1__* tail; TYPE_2__* head; } ;
struct TYPE_4__ {size_t iov_len; void* iov_base; } ;
struct TYPE_3__ {scalar_t__ iov_len; } ;



__attribute__((used)) static inline void
FUNC_0(struct xdr_buf *VAR_0, void *VAR_1, size_t VAR_2)
{
 VAR_0->head[0].iov_base = VAR_1;
 VAR_0->head[0].iov_len = VAR_2;
 VAR_0->tail[0].iov_len = 0;
 VAR_0->page_len = 0;
 VAR_0->flags = 0;
 VAR_0->len = 0;
 VAR_0->buflen = VAR_2;
}

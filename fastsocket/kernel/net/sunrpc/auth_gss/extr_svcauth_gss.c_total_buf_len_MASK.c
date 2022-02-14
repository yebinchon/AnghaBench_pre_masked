
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xdr_buf {int page_len; TYPE_2__* tail; TYPE_1__* head; } ;
struct TYPE_4__ {int iov_len; } ;
struct TYPE_3__ {int iov_len; } ;



__attribute__((used)) static inline int
FUNC_0(struct xdr_buf *VAR_0)
{
 return VAR_0->head[0].iov_len + VAR_0->page_len + VAR_0->tail[0].iov_len;
}

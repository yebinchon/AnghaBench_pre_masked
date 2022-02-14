
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdr_buf {scalar_t__ page_len; TYPE_1__* head; } ;
struct TYPE_2__ {int iov_len; } ;



__attribute__((used)) static void
FUNC_0(struct xdr_buf *VAR_0, int VAR_1)
{
 if (VAR_0->page_len == 0) {



  VAR_0->head[0].iov_len -= VAR_1;
 }
}

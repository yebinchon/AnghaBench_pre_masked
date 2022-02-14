
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xdr_netobj {scalar_t__ len; scalar_t__ data; } ;
struct xdr_buf {scalar_t__ buflen; scalar_t__ len; TYPE_2__* head; TYPE_1__* tail; } ;
struct TYPE_4__ {scalar_t__ iov_base; scalar_t__ iov_len; } ;
struct TYPE_3__ {scalar_t__ iov_base; scalar_t__ iov_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xdr_buf*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (struct xdr_buf*,struct xdr_buf*,unsigned int,scalar_t__) ;
 scalar_t__ FUNC_2 (struct xdr_buf*,unsigned int,scalar_t__*) ;

int FUNC_3(struct xdr_buf *VAR_2, struct xdr_netobj *VAR_3, unsigned int VAR_4)
{
 struct xdr_buf VAR_5;

 if (FUNC_2(VAR_2, VAR_4, &VAR_3->len))
  return -VAR_0;
 if (FUNC_1(VAR_2, &VAR_5, VAR_4 + 4, VAR_3->len))
  return -VAR_0;


 VAR_3->data = VAR_5.head[0].iov_base;
 if (VAR_5.head[0].iov_len == VAR_3->len)
  return 0;

 VAR_3->data = VAR_5.tail[0].iov_base;
 if (VAR_5.tail[0].iov_len == VAR_3->len)
  return 0;






 if (VAR_3->len > VAR_2->buflen - VAR_2->len)
  return -VAR_1;
 if (VAR_2->tail[0].iov_len != 0)
  VAR_3->data = VAR_2->tail[0].iov_base + VAR_2->tail[0].iov_len;
 else
  VAR_3->data = VAR_2->head[0].iov_base + VAR_2->head[0].iov_len;
 FUNC_0(&VAR_5, VAR_3->data, VAR_3->len);
 return 0;
}

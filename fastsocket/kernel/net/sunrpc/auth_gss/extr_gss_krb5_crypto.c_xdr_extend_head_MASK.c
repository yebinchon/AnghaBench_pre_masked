
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct xdr_buf {unsigned int len; TYPE_1__* head; } ;
struct TYPE_2__ {scalar_t__ iov_len; int * iov_base; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_2 (int *,int *,scalar_t__) ;

int
FUNC_3(struct xdr_buf *VAR_2, unsigned int VAR_3, unsigned int VAR_4)
{
 u8 *VAR_5;

 if (VAR_4 == 0)
  return 0;

 FUNC_1(VAR_0 > VAR_1);
 FUNC_0(VAR_4 > VAR_1);

 VAR_5 = VAR_2->head[0].iov_base + VAR_3;

 FUNC_2(VAR_5 + VAR_4, VAR_5, VAR_2->head[0].iov_len - VAR_3);

 VAR_2->head[0].iov_len += VAR_4;
 VAR_2->len += VAR_4;

 return 0;
}

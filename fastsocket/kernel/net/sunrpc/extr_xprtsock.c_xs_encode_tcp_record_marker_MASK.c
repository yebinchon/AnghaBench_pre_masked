
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct xdr_buf {int len; TYPE_1__* head; } ;
typedef int rpc_fraghdr ;
struct TYPE_2__ {int * iov_base; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static inline void FUNC_1(struct xdr_buf *VAR_1)
{
 u32 VAR_2 = VAR_1->len - sizeof(rpc_fraghdr);
 rpc_fraghdr *VAR_3 = VAR_1->head[0].iov_base;
 *VAR_3 = FUNC_0(VAR_0 | VAR_2);
}

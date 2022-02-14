
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_skb_reader {size_t count; size_t offset; } ;
struct sock_xprt {size_t tcp_reclen; size_t tcp_offset; } ;


 int FUNC_0 (char*,size_t) ;
 int FUNC_1 (struct sock_xprt*) ;

__attribute__((used)) static inline void FUNC_2(struct sock_xprt *VAR_0, struct xdr_skb_reader *VAR_1)
{
 size_t VAR_2;

 VAR_2 = VAR_0->tcp_reclen - VAR_0->tcp_offset;
 if (VAR_2 > VAR_1->count)
  VAR_2 = VAR_1->count;
 VAR_1->count -= VAR_2;
 VAR_1->offset += VAR_2;
 VAR_0->tcp_offset += VAR_2;
 FUNC_0("RPC:       discarded %Zu bytes\n", VAR_2);
 FUNC_1(VAR_0);
}

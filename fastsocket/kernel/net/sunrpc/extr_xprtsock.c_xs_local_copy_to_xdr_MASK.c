
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_skb_reader {int offset; scalar_t__ count; struct sk_buff* skb; } ;
struct xdr_buf {int dummy; } ;
struct sk_buff {int len; } ;
typedef int rpc_fraghdr ;


 scalar_t__ FUNC_0 (struct xdr_buf*,int ,struct xdr_skb_reader*,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct xdr_buf *VAR_1, struct sk_buff *VAR_2)
{
 struct xdr_skb_reader VAR_3 = {
  .skb = VAR_2,
  .offset = sizeof(rpc_fraghdr),
  .count = VAR_2->len - sizeof(rpc_fraghdr),
 };

 if (FUNC_0(VAR_1, 0, &VAR_3, VAR_0) < 0)
  return -1;
 if (VAR_3.count)
  return -1;
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_skb_reader {int dummy; } ;
struct sock_xprt {int tcp_offset; int tcp_flags; int tcp_copied; int tcp_xid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ) ;
 size_t FUNC_2 (struct xdr_skb_reader*,char*,size_t) ;
 int FUNC_3 (struct sock_xprt*) ;

__attribute__((used)) static inline void FUNC_4(struct sock_xprt *VAR_3, struct xdr_skb_reader *VAR_4)
{
 size_t VAR_5, VAR_6;
 char *VAR_7;

 VAR_5 = sizeof(VAR_3->tcp_xid) - VAR_3->tcp_offset;
 FUNC_0("RPC:       reading XID (%Zu bytes)\n", VAR_5);
 VAR_7 = ((char *) &VAR_3->tcp_xid) + VAR_3->tcp_offset;
 VAR_6 = FUNC_2(VAR_4, VAR_7, VAR_5);
 VAR_3->tcp_offset += VAR_6;
 if (VAR_6 != VAR_5)
  return;
 VAR_3->tcp_flags &= ~VAR_0;
 VAR_3->tcp_flags |= VAR_1;
 VAR_3->tcp_copied = 4;
 FUNC_0("RPC:       reading %s XID %08x\n",
   (VAR_3->tcp_flags & VAR_2) ? "reply for"
             : "request with",
   FUNC_1(VAR_3->tcp_xid));
 FUNC_3(VAR_3);
}

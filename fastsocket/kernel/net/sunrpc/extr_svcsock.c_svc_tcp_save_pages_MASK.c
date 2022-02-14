
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_sock {int sk_tcplen; int ** sk_pages; } ;
struct svc_rqst {int ** rq_pages; } ;
typedef int rpc_fraghdr ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct svc_sock *VAR_2, struct svc_rqst *VAR_3)
{
 unsigned int VAR_4, VAR_5, VAR_6;

 if (VAR_2->sk_tcplen <= sizeof(rpc_fraghdr))
  return;
 VAR_5 = VAR_2->sk_tcplen - sizeof(rpc_fraghdr);
 VAR_6 = (VAR_5 + VAR_1 - 1) >> VAR_0;
 for (VAR_4 = 0; VAR_4 < VAR_6; VAR_4++) {
  VAR_2->sk_pages[VAR_4] = VAR_3->rq_pages[VAR_4];
  VAR_3->rq_pages[VAR_4] = ((void*)0);
 }
}

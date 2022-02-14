
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_sock {int sk_tcplen; int ** sk_pages; } ;
typedef int rpc_fraghdr ;


 int FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct svc_sock *VAR_2)
{
 unsigned int VAR_3, VAR_4, VAR_5;

 if (VAR_2->sk_tcplen <= sizeof(rpc_fraghdr))
  goto out;
 VAR_4 = VAR_2->sk_tcplen - sizeof(rpc_fraghdr);
 VAR_5 = (VAR_4 + VAR_1 - 1) >> VAR_0;
 for (VAR_3 = 0; VAR_3 < VAR_5; VAR_3++) {
  FUNC_0(VAR_2->sk_pages[VAR_3] == ((void*)0));
  FUNC_1(VAR_2->sk_pages[VAR_3]);
  VAR_2->sk_pages[VAR_3] = ((void*)0);
 }
out:
 VAR_2->sk_tcplen = 0;
}

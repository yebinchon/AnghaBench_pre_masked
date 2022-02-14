
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_ctx {int tls_wait_called; int tls_magic; int tls_side; int * tls_tcp; struct proto_conn* tls_sock; } ;
struct proto_conn {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct tls_ctx* FUNC_0 (int,int) ;
 int VAR_3 ;
 int FUNC_1 (struct tls_ctx*) ;
 int FUNC_2 (char*,int,int,struct proto_conn**) ;

__attribute__((used)) static int
FUNC_3(int VAR_4, bool VAR_5, void **VAR_6)
{
 struct tls_ctx *VAR_7;
 struct proto_conn *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_0(1, sizeof(*VAR_7));
 if (VAR_7 == ((void*)0))
  return (VAR_3);

 if (FUNC_2("socketpair", VAR_5, VAR_4, &VAR_8) == -1) {
  VAR_9 = VAR_3;
  FUNC_1(VAR_7);
  return (VAR_9);
 }

 VAR_7->tls_sock = VAR_8;
 VAR_7->tls_tcp = ((void*)0);
 VAR_7->tls_wait_called = (VAR_5 ? 0 : 1);
 VAR_7->tls_side = (VAR_5 ? VAR_1 : VAR_2);
 VAR_7->tls_magic = VAR_0;
 *VAR_6 = VAR_7;

 return (0);
}

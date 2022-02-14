
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_ctx {scalar_t__ tls_magic; scalar_t__ tls_side; int * tls_tcp; int * tls_sock; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct tls_ctx*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(void *VAR_1)
{
 struct tls_ctx *VAR_2 = VAR_1;

 FUNC_0(VAR_2 != ((void*)0));
 FUNC_0(VAR_2->tls_magic == VAR_0);

 if (VAR_2->tls_sock != ((void*)0)) {
  FUNC_2(VAR_2->tls_sock);
  VAR_2->tls_sock = ((void*)0);
 }
 if (VAR_2->tls_tcp != ((void*)0)) {
  FUNC_2(VAR_2->tls_tcp);
  VAR_2->tls_tcp = ((void*)0);
 }
 VAR_2->tls_side = 0;
 VAR_2->tls_magic = 0;
 FUNC_1(VAR_2);
}

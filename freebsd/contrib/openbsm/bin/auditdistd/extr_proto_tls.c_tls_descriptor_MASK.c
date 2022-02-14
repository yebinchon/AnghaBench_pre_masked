
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_ctx {scalar_t__ tls_magic; int tls_side; int * tls_tcp; int * tls_sock; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;



 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(const void *VAR_1)
{
 const struct tls_ctx *VAR_2 = VAR_1;

 FUNC_1(VAR_2 != ((void*)0));
 FUNC_1(VAR_2->tls_magic == VAR_0);

 switch (VAR_2->tls_side) {
 case 130:
 case 128:
  FUNC_1(VAR_2->tls_sock != ((void*)0));

  return (FUNC_2(VAR_2->tls_sock));
 case 129:
  FUNC_1(VAR_2->tls_tcp != ((void*)0));

  return (FUNC_2(VAR_2->tls_tcp));
 default:
  FUNC_0("Invalid side (%d).", VAR_2->tls_side);
 }
}

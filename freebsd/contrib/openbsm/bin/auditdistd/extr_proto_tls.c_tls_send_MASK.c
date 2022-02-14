
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_ctx {scalar_t__ tls_magic; scalar_t__ tls_side; int tls_wait_called; int * tls_sock; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,unsigned char const*,size_t) ;

__attribute__((used)) static int
FUNC_2(void *VAR_4, const unsigned char *VAR_5, size_t VAR_6, int VAR_7)
{
 struct tls_ctx *VAR_8 = VAR_4;

 FUNC_0(VAR_8 != ((void*)0));
 FUNC_0(VAR_8->tls_magic == VAR_0);
 FUNC_0(VAR_8->tls_side == VAR_1 ||
     VAR_8->tls_side == VAR_2);
 FUNC_0(VAR_8->tls_sock != ((void*)0));
 FUNC_0(VAR_8->tls_wait_called);
 FUNC_0(VAR_7 == -1);

 if (FUNC_1(VAR_8->tls_sock, VAR_5, VAR_6) == -1)
  return (VAR_3);

 return (0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_ctx {scalar_t__ tls_magic; int tls_wait_called; int tls_side; char* tls_laddr; int * tls_tcp; int * tls_sock; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_0 ;



 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (int *,char*,size_t) ;
 size_t FUNC_5 (char*,char*,size_t) ;
 int FUNC_6 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_7(const void *VAR_1, char *VAR_2, size_t VAR_3)
{
 const struct tls_ctx *VAR_4 = VAR_1;

 FUNC_1(VAR_4 != ((void*)0));
 FUNC_1(VAR_4->tls_magic == VAR_0);
 FUNC_1(VAR_4->tls_wait_called);

 switch (VAR_4->tls_side) {
 case 130:
  FUNC_1(VAR_4->tls_sock != ((void*)0));

  FUNC_2(FUNC_5(VAR_2, "tls://N/A", VAR_3) < VAR_3);
  break;
 case 128:
  FUNC_1(VAR_4->tls_sock != ((void*)0));

  FUNC_2(FUNC_5(VAR_2, VAR_4->tls_laddr, VAR_3) < VAR_3);
  break;
 case 129:
  FUNC_1(VAR_4->tls_tcp != ((void*)0));

  FUNC_4(VAR_4->tls_tcp, VAR_2, VAR_3);
  FUNC_1(FUNC_6(VAR_2, "tcp://", 6) == 0);

  FUNC_3("tls://", VAR_2, 6);
  break;
 default:
  FUNC_0("Invalid side (%d).", VAR_4->tls_side);
 }
}

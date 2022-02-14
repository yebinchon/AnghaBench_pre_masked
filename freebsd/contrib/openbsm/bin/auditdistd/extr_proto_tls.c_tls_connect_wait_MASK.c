
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct tls_ctx {scalar_t__ tls_magic; scalar_t__ tls_side; int tls_wait_called; int * tls_sock; } ;
typedef int connected ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int *,int,int ) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int
FUNC_5(void *VAR_7, int VAR_8)
{
 struct tls_ctx *VAR_9 = VAR_7;
 int VAR_10, VAR_11;
 uint8_t VAR_12;

 FUNC_0(VAR_9 != ((void*)0));
 FUNC_0(VAR_9->tls_magic == VAR_4);
 FUNC_0(VAR_9->tls_side == VAR_5);
 FUNC_0(VAR_9->tls_sock != ((void*)0));
 FUNC_0(!VAR_9->tls_wait_called);
 FUNC_0(VAR_8 >= 0);

 VAR_11 = FUNC_2(VAR_9->tls_sock);
 VAR_10 = FUNC_4(VAR_11, VAR_8);
 if (VAR_10 != 0)
  return (VAR_10);

 for (;;) {
  switch (FUNC_3(VAR_11, &VAR_12, sizeof(VAR_12),
      VAR_3)) {
  case -1:
   if (VAR_6 == VAR_0 || VAR_6 == VAR_1)
    continue;
   VAR_10 = VAR_6;
   break;
  case 0:
   FUNC_1(1, "Connection terminated.");
   VAR_10 = VAR_2;
   break;
  case 1:
   VAR_9->tls_wait_called = 1;
   break;
  }
  break;
 }

 return (VAR_10);
}

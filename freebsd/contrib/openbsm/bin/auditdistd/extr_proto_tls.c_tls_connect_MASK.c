
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_ctx {int tls_wait_called; int tls_magic; int tls_side; int * tls_tcp; struct proto_conn* tls_sock; } ;
struct proto_conn {int dummy; } ;
typedef int pid_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct tls_ctx* FUNC_2 (int,int) ;
 int VAR_6 ;
 int FUNC_3 () ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct proto_conn*) ;
 int FUNC_7 (int *,char*,int,struct proto_conn**) ;
 int FUNC_8 (struct proto_conn*,int *,int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (char const*,char*,int) ;
 int FUNC_12 (struct proto_conn*,char const*,char const*,int) ;
 int FUNC_13 (struct tls_ctx*) ;
 int FUNC_14 (struct tls_ctx*,int) ;

__attribute__((used)) static int
FUNC_15(const char *VAR_7, const char *VAR_8, int VAR_9, void **VAR_10)
{
 struct tls_ctx *VAR_11;
 struct proto_conn *VAR_12;
 pid_t VAR_13;
 int VAR_14;

 FUNC_0(VAR_7 == ((void*)0) || VAR_7[0] != '\0');
 FUNC_0(VAR_8 != ((void*)0));
 FUNC_0(VAR_9 >= -1);
 FUNC_0(VAR_10 != ((void*)0));

 if (FUNC_11(VAR_8, "tls://", 6) != 0)
  return (-1);
 if (VAR_7 != ((void*)0) && FUNC_11(VAR_7, "tls://", 6) != 0)
  return (-1);

 if (FUNC_7(((void*)0), "socketpair://", -1, &VAR_12) == -1)
  return (VAR_6);
 VAR_13 = FUNC_3();

 switch (VAR_13) {
 case -1:

  VAR_14 = VAR_6;
  FUNC_6(VAR_12);
  return (VAR_14);
 case 0:

  FUNC_5("[TLS sandbox] (client) ");



  FUNC_12(VAR_12, VAR_7, VAR_8, VAR_9);

 default:

  VAR_11 = FUNC_2(1, sizeof(*VAR_11));
  if (VAR_11 == ((void*)0)) {
   VAR_14 = VAR_6;
   FUNC_6(VAR_12);
   (void)FUNC_4(VAR_13, VAR_3);
   return (VAR_14);
  }
  FUNC_8(VAR_12, ((void*)0), 0);
  VAR_11->tls_sock = VAR_12;
  VAR_11->tls_tcp = ((void*)0);
  VAR_11->tls_side = VAR_5;
  VAR_11->tls_wait_called = 0;
  VAR_11->tls_magic = VAR_4;
  if (VAR_9 >= 0) {
   VAR_14 = FUNC_14(VAR_11, VAR_9);
   if (VAR_14 != 0) {
    (void)FUNC_4(VAR_13, VAR_3);
    FUNC_13(VAR_11);
    return (VAR_14);
   }
  }
  *VAR_10 = VAR_11;
  return (0);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proto_conn {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char**,char*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int ,int ,char*,char*,int ,char*,char*,int ,int ,char*,int *) ;
 int FUNC_6 (int,int ,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int ,char*) ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (struct proto_conn*) ;
 int FUNC_11 (struct proto_conn*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (struct proto_conn*,int *,int ) ;

__attribute__((used)) static void
FUNC_14(struct proto_conn *VAR_5, struct proto_conn *VAR_6)
{
 int VAR_7, VAR_8, VAR_9, VAR_10;
 char *VAR_11, *VAR_12;

 if (FUNC_9() == VAR_4)
  VAR_7 = 3;
 else
  VAR_7 = 0;


 FUNC_13(VAR_5, ((void*)0), 0);

 VAR_8 = FUNC_11(VAR_5);
 VAR_9 = FUNC_11(VAR_6);

 VAR_10 = FUNC_0(VAR_8, VAR_9);
 VAR_10 = FUNC_0(VAR_10, VAR_7);
 VAR_10++;


 if (FUNC_4(VAR_8, VAR_10) == -1)
  FUNC_8(VAR_0, "dup2() failed");
 FUNC_10(VAR_5);
 VAR_8 = VAR_10;
 if (FUNC_4(VAR_9, VAR_10 + 1) == -1)
  FUNC_8(VAR_0, "dup2() failed");
 FUNC_10(VAR_6);
 VAR_9 = VAR_10 + 1;


 if (FUNC_4(VAR_8, VAR_7) == -1)
  FUNC_8(VAR_0, "dup2() failed");
 (void)FUNC_2(VAR_8);

 if (FUNC_4(VAR_9, VAR_7 + 1) == -1)
  FUNC_8(VAR_0, "dup2() failed");
 (void)FUNC_2(VAR_9);

 FUNC_3(VAR_7 + 2);





 if (FUNC_6(VAR_7, VAR_3, 0) == -1)
  FUNC_8(VAR_0, "fcntl() failed");
 if (FUNC_6(VAR_7 + 1, VAR_3, 0) == -1)
  FUNC_8(VAR_0, "fcntl() failed");

 if (FUNC_1(&VAR_11, "%d", VAR_7) == -1)
  FUNC_8(VAR_2, "asprintf() failed");
 if (FUNC_1(&VAR_12, "%d", FUNC_7()) == -1)
  FUNC_8(VAR_2, "asprintf() failed");

 FUNC_5(FUNC_12("execpath"), FUNC_12("execpath"), "proto", "tls",
     FUNC_12("user"), "server", VAR_11, FUNC_12("tls:keyfile"),
     FUNC_12("tls:certfile"), VAR_12, ((void*)0));
 FUNC_8(VAR_1, "execl() failed");
}

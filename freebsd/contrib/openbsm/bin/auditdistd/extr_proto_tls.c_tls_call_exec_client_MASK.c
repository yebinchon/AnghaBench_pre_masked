
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proto_conn {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char**,char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int ,int ,char*,char*,int ,char*,char*,char*,char const*,int ,int ,char*,char*,int *) ;
 int FUNC_4 (int,int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,char*) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (struct proto_conn*) ;
 int FUNC_9 (struct proto_conn*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (struct proto_conn*,int *,int ) ;

__attribute__((used)) static void
FUNC_12(struct proto_conn *VAR_6, const char *VAR_7,
    const char *VAR_8, int VAR_9)
{
 char *VAR_10, *VAR_11, *VAR_12;
 int VAR_13;


 FUNC_11(VAR_6, ((void*)0), 0);

 if (FUNC_7() == VAR_4)
  VAR_13 = 3;
 else
  VAR_13 = 0;

 if (FUNC_9(VAR_6) != VAR_13) {

  if (FUNC_2(FUNC_9(VAR_6), VAR_13) == -1)
   FUNC_6(VAR_0, "dup2() failed");
  FUNC_8(VAR_6);
 } else {




  if (FUNC_4(VAR_13, VAR_3, 0) == -1)
   FUNC_6(VAR_0, "fcntl() failed");
 }

 FUNC_1(VAR_13 + 1);

 if (FUNC_0(&VAR_11, "%d", VAR_13) == -1)
  FUNC_6(VAR_2, "asprintf() failed");
 if (VAR_9 == -1)
  VAR_9 = VAR_5;
 if (FUNC_0(&VAR_10, "%d", VAR_9) == -1)
  FUNC_6(VAR_2, "asprintf() failed");
 if (FUNC_0(&VAR_12, "%d", FUNC_5()) == -1)
  FUNC_6(VAR_2, "asprintf() failed");

 FUNC_3(FUNC_10("execpath"), FUNC_10("execpath"), "proto", "tls",
     FUNC_10("user"), "client", VAR_11,
     VAR_7 == ((void*)0) ? "" : VAR_7, VAR_8,
     FUNC_10("tls:fingerprint"), FUNC_10("tcp:port"), VAR_10,
     VAR_12, ((void*)0));
 FUNC_6(VAR_1, "execl() failed");
}

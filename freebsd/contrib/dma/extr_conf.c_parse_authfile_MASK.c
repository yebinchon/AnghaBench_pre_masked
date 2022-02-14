
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct authuser {char* password; int * host; int * login; } ;
typedef int line ;
typedef int FILE ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,struct authuser*,int ) ;
 int VAR_4 ;
 struct authuser* FUNC_1 (int,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ,char*,char const*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (char*,int,int *) ;
 int * FUNC_8 (char const*,char*) ;
 int VAR_5 ;
 char* FUNC_9 (char*) ;
 void* FUNC_10 (char**,char*) ;

void
FUNC_11(const char *VAR_6)
{
 char VAR_7[2048];
 struct authuser *VAR_8;
 FILE *VAR_9;
 char *VAR_10;
 int VAR_11 = 0;

 VAR_9 = FUNC_8(VAR_6, "r");
 if (VAR_9 == ((void*)0)) {
  FUNC_3(VAR_2, "can not open auth file `%s'", VAR_6);

 }

 while (!FUNC_6(VAR_9)) {
  if (FUNC_7(VAR_7, sizeof(VAR_7), VAR_9) == ((void*)0))
   break;
  VAR_11++;

  FUNC_2(VAR_7);


  if (*VAR_7 == '#')
   continue;

  if (*VAR_7 == 0)
   continue;

  VAR_8 = FUNC_1(1, sizeof(*VAR_8));
  if (VAR_8 == ((void*)0))
   FUNC_3(VAR_3, "calloc()");

  VAR_10 = FUNC_9(VAR_7);
  VAR_8->login = FUNC_10(&VAR_10, "|");
  VAR_8->host = FUNC_10(&VAR_10, VAR_0);
  VAR_8->password = VAR_10;

  if (VAR_8->login == ((void*)0) ||
      VAR_8->host == ((void*)0) ||
      VAR_8->password == ((void*)0)) {
   FUNC_4(VAR_1, "syntax error in authfile %s:%d", VAR_6, VAR_11);

  }

  FUNC_0(&VAR_4, VAR_8, VAR_5);
 }

 FUNC_5(VAR_9);
}

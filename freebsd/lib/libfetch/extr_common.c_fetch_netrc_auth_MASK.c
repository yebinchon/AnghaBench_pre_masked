
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct url {int netrcfd; char const* host; char* user; char* pwd; } ;
typedef int FILE ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 () ;
 char* FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,int,char*,char const*) ;
 scalar_t__ FUNC_9 (char const*,char const*) ;
 scalar_t__ FUNC_10 (char const*,char*) ;
 char const* FUNC_11 (int) ;

int
FUNC_12(struct url *VAR_1)
{
 const char *VAR_2;
 int VAR_3;
 FILE *VAR_4;

 if (VAR_1->netrcfd < 0)
  VAR_1->netrcfd = FUNC_5();
 if (VAR_1->netrcfd < 0)
  return (-1);
 if ((VAR_4 = FUNC_3(VAR_1->netrcfd, "r")) == ((void*)0)) {
  VAR_3 = VAR_0;
  FUNC_0("fdopen(netrcfd): %s", FUNC_11(VAR_0));
  FUNC_1(VAR_1->netrcfd);
  VAR_1->netrcfd = -1;
  VAR_0 = VAR_3;
  return (-1);
 }
 FUNC_7(VAR_4);
 FUNC_0("searching netrc for %s\n", VAR_1->host);
 while ((VAR_2 = FUNC_6(VAR_4)) != ((void*)0)) {
  if (FUNC_10(VAR_2, "default") == 0) {
   FUNC_0("using default netrc settings\n");
   break;
  }
  if (FUNC_10(VAR_2, "machine") == 0 &&
      (VAR_2 = FUNC_6(VAR_4)) != ((void*)0) &&
      FUNC_9(VAR_2, VAR_1->host) == 0) {
   FUNC_0("using netrc settings for %s\n", VAR_2);
   break;
  }
 }
 if (VAR_2 == ((void*)0))
  goto ferr;
 while ((VAR_2 = FUNC_6(VAR_4)) != ((void*)0)) {
  if (FUNC_10(VAR_2, "login") == 0) {
   if ((VAR_2 = FUNC_6(VAR_4)) == ((void*)0))
    goto ferr;
   if (FUNC_8(VAR_1->user, sizeof(VAR_1->user),
    "%s", VAR_2) > (int)sizeof(VAR_1->user)) {
    FUNC_4("login name in .netrc is too long");
    VAR_1->user[0] = '\0';
   }
  } else if (FUNC_10(VAR_2, "password") == 0) {
   if ((VAR_2 = FUNC_6(VAR_4)) == ((void*)0))
    goto ferr;
   if (FUNC_8(VAR_1->pwd, sizeof(VAR_1->pwd),
    "%s", VAR_2) > (int)sizeof(VAR_1->pwd)) {
    FUNC_4("password in .netrc is too long");
    VAR_1->pwd[0] = '\0';
   }
  } else if (FUNC_10(VAR_2, "account") == 0) {
   if ((VAR_2 = FUNC_6(VAR_4)) == ((void*)0))
    goto ferr;

  } else {
   break;
  }
 }
 FUNC_2(VAR_4);
 VAR_1->netrcfd = -1;
 return (0);
ferr:
 VAR_3 = VAR_0;
 FUNC_2(VAR_4);
 VAR_1->netrcfd = -1;
 VAR_0 = VAR_3;
 return (-1);
}

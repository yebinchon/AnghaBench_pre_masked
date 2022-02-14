
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int ,char**) ;
 TYPE_1__ VAR_5 ;
 int FUNC_1 (char*) ;
 int VAR_6 ;
 int FUNC_2 (int,int ,int *) ;
 int FUNC_3 (int,char*,...) ;
 int FUNC_4 (int,char*,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,char*,...) ;

__attribute__((used)) static int
FUNC_7(int VAR_7, char *VAR_8, char* VAR_9)
{
 char *VAR_10;
 int VAR_11, VAR_12 = 0;

 VAR_12 = FUNC_4(VAR_7, VAR_8, VAR_9);
 if (VAR_12 == 0) {
  return (0);
 } else if (VAR_12 == -2) {




  return (1);
 }

 if ((VAR_5.features & VAR_0) != 0 ||
     (VAR_5.features & VAR_4) != 0) {

  FUNC_3(VAR_7, "AUTH LOGIN");
  if (FUNC_2(VAR_7, 0, ((void*)0)) != 3) {
   FUNC_6(VAR_2, "remote delivery deferred:"
     " AUTH login not available: %s",
     VAR_6);
   return (1);
  }

  VAR_11 = FUNC_0(VAR_8, FUNC_5(VAR_8), &VAR_10);
  if (VAR_11 < 0) {
encerr:
   FUNC_6(VAR_1, "can not encode auth reply: %m");
   return (1);
  }

  FUNC_3(VAR_7, "%s", VAR_10);
  FUNC_1(VAR_10);
  VAR_12 = FUNC_2(VAR_7, 0, ((void*)0));
  if (VAR_12 != 3) {
   FUNC_6(VAR_2, "remote delivery %s: AUTH login failed: %s",
          VAR_12 == 5 ? "failed" : "deferred", VAR_6);
   return (VAR_12 == 5 ? -1 : 1);
  }

  VAR_11 = FUNC_0(VAR_9, FUNC_5(VAR_9), &VAR_10);
  if (VAR_11 < 0)
   goto encerr;

  FUNC_3(VAR_7, "%s", VAR_10);
  FUNC_1(VAR_10);
  VAR_12 = FUNC_2(VAR_7, 0, ((void*)0));
  if (VAR_12 != 2) {
   FUNC_6(VAR_2, "remote delivery %s: Authentication failed: %s",
     VAR_12 == 5 ? "failed" : "deferred", VAR_6);
   return (VAR_12 == 5 ? -1 : 1);
  }
 } else {
  FUNC_6(VAR_3, "non-encrypted SMTP login is disabled in config, so skipping it. ");
  return (1);
 }

 return (0);
}

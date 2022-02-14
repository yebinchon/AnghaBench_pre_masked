
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int FUNC_0 (char*) ;
 char* VAR_1 ;
 char* VAR_2 ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 int FUNC_2 (char*,char*,char*) ;
 int VAR_4 ;
 char* VAR_5 ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4 (char *VAR_6, int VAR_7)
{

  char VAR_8[200];

  int VAR_9 = VAR_4;
  VAR_4 = VAR_3;

  FUNC_2 (VAR_8, "ftp %s\r", VAR_1);
  FUNC_1 (VAR_8);
  FUNC_0 (" Username : ");
  FUNC_2 (VAR_8, "%s\r", VAR_5);
  FUNC_1 (VAR_8);
  FUNC_0 (" Password : ");
  FUNC_3 (VAR_2);
  FUNC_3 ("\r");
  FUNC_0 ("success\r");
  FUNC_0 ("FTP>");
  FUNC_2 (VAR_8, "cd %s\r", VAR_0);
  FUNC_1 (VAR_8);
  FUNC_0 ("FTP>");
  FUNC_2 (VAR_8, "ll 0;s:%s\r", VAR_6);
  FUNC_1 (VAR_8);
  FUNC_0 ("FTP>");
  FUNC_1 ("bye\r");
  FUNC_0 (":");
  VAR_4 = VAR_9;
}

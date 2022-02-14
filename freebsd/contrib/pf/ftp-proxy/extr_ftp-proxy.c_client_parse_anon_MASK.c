
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct session {int client_bufev; int id; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,char*,int ,char*) ;
 int FUNC_2 (char*,int,char*) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (char*) ;

int
FUNC_5(struct session *VAR_3)
{
 if (FUNC_3("USER ftp\r\n", VAR_1) != 0 &&
     FUNC_3("USER anonymous\r\n", VAR_1) != 0) {
  FUNC_2(VAR_1, sizeof VAR_1,
      "500 Only anonymous FTP allowed\r\n");
  FUNC_1(VAR_0, "#%d proxy: %s", VAR_3->id, VAR_1);


  VAR_2 = FUNC_4(VAR_1);
  FUNC_0(VAR_3->client_bufev, VAR_1, VAR_2);


  VAR_1[0] = '\0';
  VAR_2 = 0;
 }

 return (1);
}

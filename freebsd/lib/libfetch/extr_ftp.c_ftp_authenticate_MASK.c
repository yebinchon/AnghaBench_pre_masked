
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct url {char* user; char* pwd; int port; int host; int scheme; } ;
typedef int pbuf ;
typedef int conn_t ;


 int FUNC_0 (char*,char const*) ;
 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct url*) ;
 int FUNC_3 (int *,char*,char const*,...) ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (char*,int) ;
 char* FUNC_6 () ;
 int FUNC_7 (char*,int,char*,char const*) ;

__attribute__((used)) static int
FUNC_8(conn_t *VAR_4, struct url *VAR_5, struct url *VAR_6)
{
 const char *VAR_7, *VAR_8, *VAR_9;
 char VAR_10[VAR_2 + VAR_3 + 1];
 int VAR_11, VAR_12;




 if (VAR_5->user[0] == '\0')
  FUNC_2(VAR_5);
 VAR_7 = VAR_5->user;
 if (*VAR_7 == '\0')
  if ((VAR_7 = FUNC_4("FTP_LOGIN")) != ((void*)0))
   FUNC_0("FTP_LOGIN=%s\n", VAR_7);
 if (VAR_7 == ((void*)0) || *VAR_7 == '\0')
  VAR_7 = VAR_0;
 if (VAR_6 && VAR_5->port == FUNC_1(VAR_5->scheme))
  VAR_11 = FUNC_3(VAR_4, "USER %s@%s", VAR_7, VAR_5->host);
 else if (VAR_6)
  VAR_11 = FUNC_3(VAR_4, "USER %s@%s@%d", VAR_7, VAR_5->host, VAR_5->port);
 else
  VAR_11 = FUNC_3(VAR_4, "USER %s", VAR_7);


 if (VAR_11 == VAR_1) {
  VAR_8 = VAR_5->pwd;
  if (*VAR_8 == '\0')
   if ((VAR_8 = FUNC_4("FTP_PASSWORD")) != ((void*)0))
    FUNC_0("FTP_PASSWORD=%s\n", VAR_8);
  if (VAR_8 == ((void*)0) || *VAR_8 == '\0') {
   if ((VAR_9 = FUNC_6()) == ((void*)0))
    VAR_9 = VAR_0;
   if ((VAR_12 = FUNC_7(VAR_10, VAR_3 + 1, "%s@", VAR_9)) < 0)
    VAR_12 = 0;
   else if (VAR_12 > VAR_3)
    VAR_12 = VAR_3;
   FUNC_5(VAR_10 + VAR_12, sizeof(VAR_10) - VAR_12);
   VAR_8 = VAR_10;
  }
  VAR_11 = FUNC_3(VAR_4, "PASS %s", VAR_8);
 }

 return (VAR_11);
}

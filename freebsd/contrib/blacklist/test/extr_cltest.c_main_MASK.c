
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef int socklen_t ;
typedef int in_port_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,void const*,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char const*,int,struct sockaddr_storage*,int *) ;
 int FUNC_4 (int,char**,char*) ;
 char* VAR_4 ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,int,char*,void const*) ;
 int FUNC_7 (int ,int,int ) ;
 int FUNC_8 (char const*) ;
 int FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int,char const*,size_t) ;

int
FUNC_11(int VAR_5, char *VAR_6[])
{
 int VAR_7;
 int VAR_8;
 struct sockaddr_storage VAR_9;
 const char *VAR_10 = "hello";
 const char *VAR_11 = "127.0.0.1";
 int VAR_12 = VAR_3;
 in_port_t VAR_13 = 6161;
 socklen_t VAR_14;
 char VAR_15[128];

 while ((VAR_8 = FUNC_4(VAR_5, VAR_6, "a:m:p:u")) != -1) {
  switch (VAR_8) {
  case 'a':
   VAR_11 = VAR_4;
   break;
  case 'm':
   VAR_10 = VAR_4;
   break;
  case 'p':
   VAR_13 = (in_port_t)FUNC_0(VAR_4);
   break;
  case 'u':
   VAR_12 = VAR_2;
   break;
  default:
   FUNC_9(VAR_8);
  }
 }

 FUNC_3(VAR_11, VAR_13, &VAR_9, &VAR_14);

 if ((VAR_7 = FUNC_7(VAR_0, VAR_12, 0)) == -1)
  FUNC_2(VAR_1, "socket");

 FUNC_6(VAR_15, sizeof(VAR_15), "%a:%p", (const void *)&VAR_9);
 FUNC_5("connecting to: %s\n", VAR_15);
 if (FUNC_1(VAR_7, (const void *)&VAR_9, VAR_14) == -1)
  FUNC_2(VAR_1, "connect");

 size_t VAR_16 = FUNC_8(VAR_10) + 1;
 if (FUNC_10(VAR_7, VAR_10, VAR_16) != (ssize_t)VAR_16)
  FUNC_2(VAR_1, "write");
 return 0;
}

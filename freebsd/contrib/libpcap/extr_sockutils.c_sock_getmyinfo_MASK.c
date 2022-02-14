
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int SOCKET ;


 int FUNC_0 (int ,struct sockaddr*,int*) ;
 int FUNC_1 (struct sockaddr_storage*,char*,int,char*,int,int,char*,int) ;
 int FUNC_2 (char*,char*,int) ;

int FUNC_3(SOCKET VAR_0, char *VAR_1, int VAR_2, char *VAR_3, int VAR_4, int VAR_5, char *VAR_6, int VAR_7)
{
 struct sockaddr_storage VAR_8;
 socklen_t VAR_9;


 VAR_9 = sizeof(struct sockaddr_storage);

 if (FUNC_0(VAR_0, (struct sockaddr *) &VAR_8, &VAR_9) == -1)
 {
  FUNC_2("getsockname(): ", VAR_6, VAR_7);
  return 0;
 }


 return FUNC_1(&VAR_8, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
}

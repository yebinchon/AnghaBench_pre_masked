
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_un {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef size_t ssize_t ;
typedef int socklen_t ;
typedef int resp ;
typedef int from ;
typedef int buf ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;
 size_t FUNC_4 (int,char*,int,int ,struct sockaddr*,int*) ;
 scalar_t__ FUNC_5 (int,char*,int ,int ,struct sockaddr*,int) ;

__attribute__((used)) static int FUNC_6(int VAR_0)
{
 char VAR_1[1000], VAR_2[1000];
 struct sockaddr_un VAR_3;
 socklen_t VAR_4;
 ssize_t VAR_5;

 VAR_4 = sizeof(VAR_3);
 VAR_5 = FUNC_4(VAR_0, VAR_1, sizeof(VAR_1), 0, (struct sockaddr *) &VAR_3,
         &VAR_4);
 if (VAR_5 < 0) {
  FUNC_1("recvfrom");
  return -1;
 }

 if (VAR_5 == 0)
  return 0;

 if ((size_t) VAR_5 >= sizeof(VAR_1))
  VAR_5 = sizeof(VAR_1) - 1;
 VAR_1[VAR_5] = '\0';

 FUNC_2("Received: %s\n", VAR_1);

 if (FUNC_3(VAR_1, VAR_2, sizeof(VAR_2)) < 0) {
  FUNC_2("Failed to process request\n");
  return -1;
 }

 if (VAR_2[0] == '\0') {
  FUNC_2("No response\n");
  return 0;
 }

 FUNC_2("Send: %s\n", VAR_2);

 if (FUNC_5(VAR_0, VAR_2, FUNC_0(VAR_2), 0, (struct sockaddr *) &VAR_3,
     VAR_4) < 0)
  FUNC_1("send");

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sockaddr_ng {int sg_data; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int frombuf ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int,int *,size_t,int ,struct sockaddr*,int*) ;
 int FUNC_4 (char*,int ,int) ;

int
FUNC_5(int VAR_4, u_char * VAR_5, size_t VAR_6, char *VAR_7)
{
 u_char VAR_8[VAR_1 + VAR_0];
 struct sockaddr_ng *const VAR_9 = (struct sockaddr_ng *) VAR_8;
 socklen_t VAR_10 = sizeof(VAR_8);
 int VAR_11, VAR_12;


 VAR_11 = FUNC_3(VAR_4, VAR_5, VAR_6, 0, (struct sockaddr *) VAR_9, &VAR_10);
 if (VAR_11 < 0) {
  VAR_12 = VAR_3;
  if (VAR_2 >= 1)
   FUNC_0("recvfrom");
  VAR_3 = VAR_12;
  return (-1);
 }


 if (VAR_7 != ((void*)0))
  FUNC_4(VAR_7, VAR_9->sg_data, VAR_1);


 if (VAR_2 >= 2) {
  FUNC_1("READ %s from hook \"%s\" (%d bytes)",
         VAR_11 ? "PACKET" : "EOF", VAR_9->sg_data, VAR_11);
  if (VAR_2 >= 3)
   FUNC_2(VAR_5, VAR_11);
 }


 return (VAR_11);
}

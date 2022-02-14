
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int rbuf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,int*) ;
 int FUNC_1 (int,char*,int,int ,struct sockaddr*,int*) ;

int
FUNC_2(int VAR_2)
{
 int VAR_3, VAR_4 = 0;
 char VAR_5[VAR_1];
 struct sockaddr_storage VAR_6;
 socklen_t VAR_7;

 while (1) {
  (void) FUNC_0(VAR_2, VAR_0, &VAR_3);
  if (VAR_3) {
   VAR_4++;
   VAR_7 = sizeof VAR_6;
   (void) FUNC_1(VAR_2, VAR_5, sizeof (VAR_5), 0,
    (struct sockaddr *)&VAR_6, &VAR_7);
  } else {
   return(VAR_4);
  }
 }
}

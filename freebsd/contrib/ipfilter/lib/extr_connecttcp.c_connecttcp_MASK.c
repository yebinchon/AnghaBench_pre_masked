
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in {int sin_addr; int sin_port; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct hostent {int * h_addr_list; } ;
typedef int sin ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,struct sockaddr*,int) ;
 struct hostent* FUNC_3 (char*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,int *) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (struct sockaddr_in*,int ,int) ;
 int FUNC_8 (int ,int ,int ) ;

int
FUNC_9(char *VAR_2, int VAR_3)
{
 struct sockaddr_in VAR_4;
 struct hostent *VAR_5;
 int VAR_6;

 FUNC_7(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.sin_family = VAR_0;
 VAR_4.sin_port = FUNC_4(VAR_3 & 65535);

 if (FUNC_0(*VAR_2)) {
  if (FUNC_5(VAR_2, &VAR_4.sin_addr) == -1) {
   return -1;
  }
 } else {
  VAR_5 = FUNC_3(VAR_2);
  if (VAR_5 == ((void*)0))
   return -1;
  FUNC_6(&VAR_4.sin_addr, VAR_5->h_addr_list[0],
         sizeof(VAR_4.sin_addr));
 }

 VAR_6 = FUNC_8(VAR_0, VAR_1, 0);
 if (VAR_6 == -1)
  return -1;

 if (FUNC_2(VAR_6, (struct sockaddr *)&VAR_4, sizeof(VAR_4)) == -1) {
  FUNC_1(VAR_6);
  return -1;
 }

 return VAR_6;
}

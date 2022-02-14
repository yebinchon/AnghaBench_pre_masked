
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
typedef int ss ;
typedef int socklen_t ;


 int VAR_0 ;
 int FUNC_0 (int,void*,int*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void
FUNC_6(int VAR_1, int VAR_2)
{
 struct sockaddr_storage VAR_3;
 socklen_t VAR_4 = sizeof(VAR_3);
 int VAR_5;

 if (VAR_1 != VAR_0) {
  if ((VAR_5 = FUNC_0(VAR_2, (void *)&VAR_3, &VAR_4)) == -1)
   FUNC_2(1, "accept");
 } else
  VAR_5 = VAR_2;


 switch (FUNC_3()) {
 case -1:
  FUNC_2(1, "fork");
 case 0:
  if (VAR_1 == VAR_0)
   FUNC_5(VAR_5);
  else
   FUNC_4(VAR_5);
  break;
 default:
  FUNC_1(VAR_5);
  break;
 }
}

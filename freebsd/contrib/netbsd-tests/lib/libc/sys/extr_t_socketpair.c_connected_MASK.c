
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_un {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int addr ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,struct sockaddr*,int *) ;

__attribute__((used)) static void
FUNC_2(int VAR_0)
{
 struct sockaddr_un VAR_1;
 socklen_t VAR_2 = (socklen_t)sizeof(VAR_1);
 FUNC_0(FUNC_1(VAR_0, (struct sockaddr*)(void *)&VAR_1,
     &VAR_2) == 0);
}

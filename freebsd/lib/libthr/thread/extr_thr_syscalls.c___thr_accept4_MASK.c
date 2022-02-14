
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct pthread {int dummy; } ;
typedef int socklen_t ;


 int FUNC_0 (int,struct sockaddr*,int *,int) ;
 struct pthread* FUNC_1 () ;
 int FUNC_2 (struct pthread*) ;
 int FUNC_3 (struct pthread*,int) ;

__attribute__((used)) static int
FUNC_4(int VAR_0, struct sockaddr *VAR_1, socklen_t *VAR_2, int VAR_3)
{
 struct pthread *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_1();
 FUNC_2(VAR_4);
 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_3(VAR_4, VAR_5 == -1);

  return (VAR_5);
}

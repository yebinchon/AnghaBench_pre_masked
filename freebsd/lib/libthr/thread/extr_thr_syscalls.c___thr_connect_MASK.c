
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct pthread {int dummy; } ;
typedef int socklen_t ;


 int FUNC_0 (int,struct sockaddr const*,int ) ;
 struct pthread* FUNC_1 () ;
 int FUNC_2 (struct pthread*) ;
 int FUNC_3 (struct pthread*,int) ;

__attribute__((used)) static int
FUNC_4(int VAR_0, const struct sockaddr *VAR_1, socklen_t VAR_2)
{
 struct pthread *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_1();
 FUNC_2(VAR_3);
 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_3(VAR_3, VAR_4 == -1);

  return (VAR_4);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;
struct pthread {int dummy; } ;
typedef int fd_set ;


 int FUNC_0 (int,int *,int *,int *,struct timeval*) ;
 struct pthread* FUNC_1 () ;
 int FUNC_2 (struct pthread*) ;
 int FUNC_3 (struct pthread*,int) ;

__attribute__((used)) static int
FUNC_4(int VAR_0, fd_set *VAR_1, fd_set *VAR_2, fd_set *VAR_3,
 struct timeval *VAR_4)
{
 struct pthread *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1();
 FUNC_2(VAR_5);
 VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 FUNC_3(VAR_5, VAR_6 == -1);
 return (VAR_6);
}

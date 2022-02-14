
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
struct pthread {int dummy; } ;
typedef int sigset_t ;
typedef int fd_set ;


 int FUNC_0 (int,int *,int *,int *,struct timespec const*,int const*) ;
 struct pthread* FUNC_1 () ;
 int FUNC_2 (struct pthread*) ;
 int FUNC_3 (struct pthread*,int) ;

__attribute__((used)) static int
FUNC_4(int VAR_0, fd_set *VAR_1, fd_set *VAR_2, fd_set *VAR_3,
 const struct timespec *VAR_4, const sigset_t *VAR_5)
{
 struct pthread *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_1();
 FUNC_2(VAR_6);
 VAR_7 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 FUNC_3(VAR_6, VAR_7 == -1);

 return (VAR_7);
}

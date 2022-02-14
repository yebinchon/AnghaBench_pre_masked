
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
struct pthread {int dummy; } ;
struct pollfd {int dummy; } ;
typedef int sigset_t ;
typedef int nfds_t ;


 int FUNC_0 (struct pollfd*,int ,struct timespec const*,int const*) ;
 struct pthread* FUNC_1 () ;
 int FUNC_2 (struct pthread*) ;
 int FUNC_3 (struct pthread*,int) ;

__attribute__((used)) static int
FUNC_4(struct pollfd VAR_0[], nfds_t VAR_1, const struct timespec *
    VAR_2, const sigset_t *VAR_3)
{
 struct pthread *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_1();
 FUNC_2(VAR_4);
 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_3(VAR_4, VAR_5 == -1);

 return (VAR_5);
}

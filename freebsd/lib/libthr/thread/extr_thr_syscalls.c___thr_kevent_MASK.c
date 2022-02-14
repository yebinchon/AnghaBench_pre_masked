
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
struct pthread {int dummy; } ;
struct kevent {int dummy; } ;


 int FUNC_0 (int,struct kevent const*,int,struct kevent*,int,struct timespec const*) ;
 struct pthread* FUNC_1 () ;
 int FUNC_2 (struct pthread*) ;
 int FUNC_3 (struct pthread*,int) ;

__attribute__((used)) static int
FUNC_4(int VAR_0, const struct kevent *VAR_1, int VAR_2,
    struct kevent *VAR_3, int VAR_4, const struct timespec *VAR_5)
{
 struct pthread *VAR_6;
 int VAR_7;

 if (VAR_4 == 0) {



  return (FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3,
      VAR_4, VAR_5));
 }
 VAR_6 = FUNC_1();
 FUNC_2(VAR_6);
 VAR_7 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4,
     VAR_5);
 FUNC_3(VAR_6, VAR_7 == -1 && VAR_2 == 0);

 return (VAR_7);
}

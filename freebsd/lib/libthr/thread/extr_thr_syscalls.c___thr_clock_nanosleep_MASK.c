
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
struct pthread {int dummy; } ;
typedef int clockid_t ;


 int FUNC_0 (int ,int,struct timespec const*,struct timespec*) ;
 struct pthread* FUNC_1 () ;
 int FUNC_2 (struct pthread*) ;
 int FUNC_3 (struct pthread*,int) ;

__attribute__((used)) static int
FUNC_4(clockid_t VAR_0, int VAR_1,
    const struct timespec *VAR_2, struct timespec *VAR_3)
{
 struct pthread *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_1();
 FUNC_2(VAR_4);
 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2,
     VAR_3);
 FUNC_3(VAR_4, 1);

 return (VAR_5);
}

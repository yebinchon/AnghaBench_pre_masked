
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
struct pthread {int dummy; } ;


 int FUNC_0 (struct timespec const*,struct timespec*) ;
 struct pthread* FUNC_1 () ;
 int FUNC_2 (struct pthread*) ;
 int FUNC_3 (struct pthread*,int) ;

__attribute__((used)) static int
FUNC_4(const struct timespec *VAR_0,
    struct timespec *VAR_1)
{
 struct pthread *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_1();
 FUNC_2(VAR_2);
 VAR_3 = FUNC_0(VAR_0, VAR_1);
 FUNC_3(VAR_2, 1);

 return (VAR_3);
}

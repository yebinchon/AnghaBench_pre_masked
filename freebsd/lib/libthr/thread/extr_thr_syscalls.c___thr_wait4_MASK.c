
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rusage {int dummy; } ;
struct pthread {int dummy; } ;
typedef scalar_t__ pid_t ;


 scalar_t__ FUNC_0 (scalar_t__,int*,int,struct rusage*) ;
 struct pthread* FUNC_1 () ;
 int FUNC_2 (struct pthread*) ;
 int FUNC_3 (struct pthread*,int) ;

__attribute__((used)) static pid_t
FUNC_4(pid_t VAR_0, int *VAR_1, int VAR_2, struct rusage *VAR_3)
{
 struct pthread *VAR_4;
 pid_t VAR_5;

 VAR_4 = FUNC_1();
 FUNC_2(VAR_4);
 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_3(VAR_4, VAR_5 <= 0);
 return (VAR_5);
}

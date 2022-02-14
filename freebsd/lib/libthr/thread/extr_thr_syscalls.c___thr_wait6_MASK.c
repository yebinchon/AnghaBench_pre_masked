
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pthread {int dummy; } ;
struct __wrusage {int dummy; } ;
typedef int siginfo_t ;
typedef scalar_t__ pid_t ;
typedef int idtype_t ;
typedef int id_t ;


 scalar_t__ FUNC_0 (int ,int ,int*,int,struct __wrusage*,int *) ;
 struct pthread* FUNC_1 () ;
 int FUNC_2 (struct pthread*) ;
 int FUNC_3 (struct pthread*,int) ;

__attribute__((used)) static pid_t
FUNC_4(idtype_t VAR_0, id_t VAR_1, int *VAR_2, int VAR_3,
    struct __wrusage *VAR_4, siginfo_t *VAR_5)
{
 struct pthread *VAR_6;
 pid_t VAR_7;

 VAR_6 = FUNC_1();
 FUNC_2(VAR_6);
 VAR_7 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 FUNC_3(VAR_6, VAR_7 <= 0);
 return (VAR_7);
}

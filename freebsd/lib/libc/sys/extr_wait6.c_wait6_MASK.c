
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __wrusage {int dummy; } ;
typedef int siginfo_t ;
typedef int pid_t ;
typedef int idtype_t ;
typedef int id_t ;


 size_t VAR_0 ;
 scalar_t__* VAR_1 ;
 int FUNC_0 (int ,int ,int*,int,struct __wrusage*,int *) ;

pid_t
FUNC_1(idtype_t VAR_2, id_t VAR_3, int *VAR_4, int VAR_5, struct __wrusage *VAR_6,
    siginfo_t *VAR_7)
{

 return (((pid_t (*)(idtype_t, id_t, int *, int, struct __wrusage *,
     siginfo_t *))VAR_1[VAR_0])(VAR_2, VAR_3,
     VAR_4, VAR_5, VAR_6, VAR_7));
}

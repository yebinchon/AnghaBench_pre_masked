
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int siginfo_t ;
typedef int pid_t ;
typedef int idtype_t ;
typedef int id_t ;


 size_t VAR_0 ;
 scalar_t__* VAR_1 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int ,int ,int*,int,struct __wrusage*,int *) ;

int
FUNC_2(idtype_t VAR_2, id_t VAR_3, siginfo_t *VAR_4, int VAR_5)
{
 int VAR_6;
 pid_t VAR_7;

 VAR_7 = ((pid_t (*)(idtype_t, id_t, int *, int, struct __wrusage *,
     siginfo_t *))VAR_1[VAR_0])(VAR_2, VAR_3,
     &VAR_6, VAR_5, ((void*)0), VAR_4);
 if (VAR_7 == 0 && VAR_4 != ((void*)0))
  FUNC_0(VAR_4, 0, sizeof(*VAR_4));
 else if (VAR_7 > 0)
  VAR_7 = 0;
 return (VAR_7);
}

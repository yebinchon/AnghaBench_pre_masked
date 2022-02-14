
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int) ;
 scalar_t__ FUNC_1 (char*,char**,int) ;

__attribute__((used)) static pid_t
FUNC_2(int VAR_2, int *VAR_3)
{
 int VAR_4;
 char VAR_5[32];
 pid_t VAR_6;

 VAR_4 = FUNC_0 (VAR_2, VAR_5, sizeof (VAR_5) - 1);
 if (VAR_4 > 0) {
  VAR_5[VAR_4] = '\0';
  VAR_6 = (pid_t)FUNC_1 (VAR_5, (char **) ((void*)0), 10);
 } else {
  VAR_6 = -1;
  *VAR_3 = VAR_4 ? VAR_1 : VAR_0;
 }
 return VAR_6;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
typedef int pid_t ;
typedef int gid_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char**,char*,long,unsigned int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;

char *FUNC_3(pid_t VAR_2, uid_t VAR_3, gid_t VAR_4)
{
    unsigned VAR_5;
    char *VAR_6;

    FUNC_0(&VAR_0);
    VAR_5 = ++VAR_1;
    FUNC_1(&VAR_0);

    FUNC_2(&VAR_6, "%ld:%u", (long)VAR_3, VAR_5);

    return VAR_6;
}

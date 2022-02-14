
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uid_t ;
typedef void* pid_t ;
typedef TYPE_1__* heim_icred ;
typedef int gid_t ;
struct TYPE_4__ {void* session; void* pid; int gid; int uid; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int,int) ;

int
FUNC_1(uid_t VAR_1, gid_t VAR_2, pid_t VAR_3, pid_t VAR_4, heim_icred *VAR_5)
{
    *VAR_5 = FUNC_0(1, sizeof(**VAR_5));
    if (*VAR_5 == ((void*)0))
 return VAR_0;
    (*VAR_5)->uid = VAR_1;
    (*VAR_5)->gid = VAR_2;
    (*VAR_5)->pid = VAR_3;
    (*VAR_5)->session = VAR_4;
    return 0;
}

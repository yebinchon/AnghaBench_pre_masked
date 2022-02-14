
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ pid_t ;
struct TYPE_4__ {scalar_t__ pid; scalar_t__ used; } ;
typedef TYPE_1__ Session ;


 int FUNC_0 (char*,long) ;
 int FUNC_1 (char*,long) ;
 int FUNC_2 () ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static Session *
FUNC_3(pid_t VAR_2)
{
 int VAR_3;
 FUNC_0("session_by_pid: pid %ld", (long)VAR_2);
 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  Session *VAR_4 = &VAR_0[VAR_3];
  if (VAR_4->used && VAR_4->pid == VAR_2)
   return VAR_4;
 }
 FUNC_1("session_by_pid: unknown pid %ld", (long)VAR_2);
 FUNC_2();
 return ((void*)0);
}

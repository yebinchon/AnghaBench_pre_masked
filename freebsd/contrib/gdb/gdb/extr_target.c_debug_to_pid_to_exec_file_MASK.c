
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* (* to_pid_to_exec_file ) (int) ;} ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ,char*,int,char*) ;
 int VAR_1 ;
 char* FUNC_1 (int) ;

__attribute__((used)) static char *
FUNC_2 (int VAR_2)
{
  char *VAR_3;

  VAR_3 = VAR_0.to_pid_to_exec_file (VAR_2);

  FUNC_0 (VAR_1, "target_pid_to_exec_file (%d) = %s\n",
        VAR_2, VAR_3);

  return VAR_3;
}

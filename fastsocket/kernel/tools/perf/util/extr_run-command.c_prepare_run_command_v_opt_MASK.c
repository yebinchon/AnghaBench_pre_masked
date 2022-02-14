
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct child_process {char const** argv; int no_stdin; int perf_cmd; int stdout_to_stderr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct child_process*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct child_process *VAR_3,
          const char **VAR_4,
          int VAR_5)
{
 FUNC_0(VAR_3, 0, sizeof(*VAR_3));
 VAR_3->argv = VAR_4;
 VAR_3->no_stdin = VAR_5 & VAR_0 ? 1 : 0;
 VAR_3->perf_cmd = VAR_5 & VAR_2 ? 1 : 0;
 VAR_3->stdout_to_stderr = VAR_5 & VAR_1 ? 1 : 0;
}

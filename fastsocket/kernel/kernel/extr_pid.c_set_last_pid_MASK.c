
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pid_namespace {int last_pid; } ;


 int FUNC_0 (int *,int,int) ;
 scalar_t__ FUNC_1 (int,int,int) ;

__attribute__((used)) static void FUNC_2(struct pid_namespace *VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3;
 int VAR_4 = VAR_1;
 do {
  VAR_3 = VAR_4;
  VAR_4 = FUNC_0(&VAR_0->last_pid, VAR_3, VAR_2);
 } while ((VAR_3 != VAR_4) && (FUNC_1(VAR_1, VAR_4, VAR_2)));
}

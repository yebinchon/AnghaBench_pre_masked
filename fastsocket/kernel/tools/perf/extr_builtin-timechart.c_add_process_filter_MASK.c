
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct process_filter {int pid; struct process_filter* next; int name; } ;


 struct process_filter* FUNC_0 (int) ;
 struct process_filter* VAR_0 ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*,int *,int) ;

__attribute__((used)) static void FUNC_3(const char *VAR_1)
{
 int VAR_2 = FUNC_2(VAR_1, ((void*)0), 10);
 struct process_filter *VAR_3 = FUNC_0(sizeof(*VAR_3));

 if (!VAR_3)
  return;

 VAR_3->name = FUNC_1(VAR_1);
 VAR_3->pid = VAR_2;
 VAR_3->next = VAR_0;

 VAR_0 = VAR_3;
}

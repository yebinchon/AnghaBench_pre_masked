
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct machine {int pid; } ;


 scalar_t__ FUNC_0 (struct machine*) ;
 scalar_t__ FUNC_1 (struct machine*) ;
 int FUNC_2 (char*,size_t,char*,char*,...) ;

char *FUNC_3(struct machine *VAR_0, char *VAR_1, size_t VAR_2)
{
 if (FUNC_1(VAR_0))
  FUNC_2(VAR_1, VAR_2, "[%s]", "kernel.kallsyms");
 else if (FUNC_0(VAR_0))
  FUNC_2(VAR_1, VAR_2, "[%s]", "guest.kernel.kallsyms");
 else {
  FUNC_2(VAR_1, VAR_2, "[%s.%d]", "guest.kernel.kallsyms",
    VAR_0->pid);
 }

 return VAR_1;
}

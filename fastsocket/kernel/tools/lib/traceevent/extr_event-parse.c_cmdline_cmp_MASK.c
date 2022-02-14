
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmdline {scalar_t__ pid; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const struct cmdline *VAR_2 = VAR_0;
 const struct cmdline *VAR_3 = VAR_1;

 if (VAR_2->pid < VAR_3->pid)
  return -1;
 if (VAR_2->pid > VAR_3->pid)
  return 1;

 return 0;
}

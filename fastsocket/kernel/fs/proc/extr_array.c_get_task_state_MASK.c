
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {unsigned int state; unsigned int exit_state; } ;


 unsigned int VAR_0 ;
 char** VAR_1 ;

__attribute__((used)) static inline const char *FUNC_0(struct task_struct *VAR_2)
{
 unsigned int VAR_3 = (VAR_2->state & VAR_0) | VAR_2->exit_state;
 const char **VAR_4 = &VAR_1[0];

 while (VAR_3) {
  VAR_4++;
  VAR_3 >>= 1;
 }
 return *VAR_4;
}

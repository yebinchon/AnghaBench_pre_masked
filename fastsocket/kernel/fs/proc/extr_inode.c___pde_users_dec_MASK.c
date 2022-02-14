
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_dir_entry {scalar_t__ pde_users; scalar_t__ pde_unload_completion; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct proc_dir_entry *VAR_0)
{
 VAR_0->pde_users--;
 if (VAR_0->pde_unload_completion && VAR_0->pde_users == 0)
  FUNC_0(VAR_0->pde_unload_completion);
}

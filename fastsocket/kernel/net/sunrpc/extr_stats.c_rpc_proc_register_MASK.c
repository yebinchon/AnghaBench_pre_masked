
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_stat {TYPE_1__* program; } ;
struct proc_dir_entry {int dummy; } ;
struct TYPE_2__ {int name; } ;


 struct proc_dir_entry* FUNC_0 (int ,struct rpc_stat*,int *) ;
 int VAR_0 ;

struct proc_dir_entry *
FUNC_1(struct rpc_stat *VAR_1)
{
 return FUNC_0(VAR_1->program->name, VAR_1, &VAR_0);
}

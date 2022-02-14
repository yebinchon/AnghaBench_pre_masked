
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct svc_stat {TYPE_1__* program; } ;
struct proc_dir_entry {int dummy; } ;
struct file_operations {int dummy; } ;
struct TYPE_2__ {int pg_name; } ;


 struct proc_dir_entry* FUNC_0 (int ,struct svc_stat*,struct file_operations const*) ;

struct proc_dir_entry *
FUNC_1(struct svc_stat *VAR_0, const struct file_operations *VAR_1)
{
 return FUNC_0(VAR_0->program->pg_name, VAR_0, VAR_1);
}

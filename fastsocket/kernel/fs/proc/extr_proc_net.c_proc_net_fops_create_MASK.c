
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_dir_entry {int dummy; } ;
struct net {int proc_net; } ;
struct file_operations {int dummy; } ;
typedef int mode_t ;


 struct proc_dir_entry* FUNC_0 (char const*,int ,int ,struct file_operations const*) ;

struct proc_dir_entry *FUNC_1(struct net *VAR_0,
 const char *VAR_1, mode_t VAR_2, const struct file_operations *VAR_3)
{
 return FUNC_0(VAR_1, VAR_2, VAR_0->proc_net, VAR_3);
}

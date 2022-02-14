
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_dir_entry {int dummy; } ;
struct file_operations {int dummy; } ;


 int FUNC_0 (char*,char const*) ;
 struct proc_dir_entry* FUNC_1 (char const*,int ,int ,struct file_operations const*,void*) ;
 int VAR_0 ;
 int FUNC_2 () ;

__attribute__((used)) static inline struct proc_dir_entry *
FUNC_3(const char *VAR_1, void *VAR_2, const struct file_operations *VAR_3)
{
 FUNC_2();
 FUNC_0("RPC:       registering /proc/net/rpc/%s\n", VAR_1);

 return FUNC_1(VAR_1, 0, VAR_0, VAR_3, VAR_2);
}

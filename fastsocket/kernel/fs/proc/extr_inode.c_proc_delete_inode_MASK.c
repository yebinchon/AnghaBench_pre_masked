
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct proc_ns_operations {int (* put ) (void*) ;} ;
struct proc_dir_entry {int dummy; } ;
struct inode {int i_data; } ;
struct TYPE_2__ {void* ns; struct proc_ns_operations* ns_ops; scalar_t__ sysctl; struct proc_dir_entry* pde; int pid; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct proc_dir_entry*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static void FUNC_7(struct inode *VAR_0)
{
 struct proc_dir_entry *VAR_1;
 const struct proc_ns_operations *VAR_2;
 void *VAR_3;

 FUNC_6(&VAR_0->i_data, 0);


 FUNC_3(FUNC_0(VAR_0)->pid);


 VAR_1 = FUNC_0(VAR_0)->pde;
 if (VAR_1)
  FUNC_2(VAR_1);
 if (FUNC_0(VAR_0)->sysctl)
  FUNC_5(FUNC_0(VAR_0)->sysctl);
 FUNC_1(VAR_0);

 VAR_2 = FUNC_0(VAR_0)->ns_ops;
 VAR_3 = FUNC_0(VAR_0)->ns;
 if (VAR_2 && VAR_3)
  VAR_2->put(VAR_3);
}

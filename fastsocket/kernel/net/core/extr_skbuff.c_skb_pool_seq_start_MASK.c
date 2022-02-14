
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
typedef int loff_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct seq_file*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*) ;
 void* FUNC_1 (int *) ;

__attribute__((used)) static void *FUNC_2(struct seq_file *VAR_1, loff_t *VAR_2)
{
 FUNC_0(VAR_1, "%s\t%-15s%-15s%-15s%-15s%-15s%-15s%-15s%-15s\n",
  "CPU", "Free", "Recycle",
  "Pool_hit", "Slab_hit",
  "C_free", "C_recycle",
  "C_pool_hit", "C_slab_hit");

 VAR_0 = 0;

 return FUNC_1(VAR_2);
}

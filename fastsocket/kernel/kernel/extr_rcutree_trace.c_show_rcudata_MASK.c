
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;


 int FUNC_0 (int ,int ,struct seq_file*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_4, void *VAR_5)
{




 FUNC_1(VAR_4, "rcu_sched:\n");
 FUNC_0(VAR_3, VAR_0, VAR_4);
 FUNC_1(VAR_4, "rcu_bh:\n");
 FUNC_0(VAR_1, VAR_0, VAR_4);
 return 0;
}

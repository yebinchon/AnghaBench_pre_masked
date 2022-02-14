
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;


 int FUNC_0 (struct seq_file*,char*,void*) ;
 unsigned long* VAR_0 ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_1, long VAR_2)
{
 unsigned long VAR_3 = VAR_0[VAR_2];

 return FUNC_0(VAR_1, "%pF\n", (void *)VAR_3);
}

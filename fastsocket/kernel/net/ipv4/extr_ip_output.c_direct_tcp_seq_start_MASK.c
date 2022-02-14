
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
typedef int loff_t ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (int *) ;
 int FUNC_1 (struct seq_file*,char*,char*,char*,char*) ;

__attribute__((used)) static void *FUNC_2(struct seq_file *VAR_1, loff_t *VAR_2)
{
 FUNC_1(VAR_1, "%s\t%-15s%-15s\n",
  "CPU", "Fast_route", "Slow_route");

 VAR_0 = 0;

 return FUNC_0(VAR_2);
}

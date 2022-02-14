
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct seq_file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct seq_file*,char*,int,char const*) ;

__attribute__((used)) static void FUNC_1(struct seq_file *VAR_3, u32 VAR_4)
{
 static const char VAR_5[] = "                "
  "    "
  "                 ";
 int VAR_6 = 0;

 if (VAR_4 & VAR_0)
  VAR_6 += 16;
 if (VAR_4 & VAR_1)
  VAR_6 += 4;
 if (VAR_4 & VAR_2)
  VAR_6 += 17;

 FUNC_0(VAR_3, "#%.*s  _-----=> irqs-off        \n", VAR_6, VAR_5);
 FUNC_0(VAR_3, "#%.*s / _----=> need-resched    \n", VAR_6, VAR_5);
 FUNC_0(VAR_3, "#%.*s| / _---=> hardirq/softirq \n", VAR_6, VAR_5);
 FUNC_0(VAR_3, "#%.*s|| / _--=> preempt-depth   \n", VAR_6, VAR_5);
 FUNC_0(VAR_3, "#%.*s||| / _-=> lock-depth      \n", VAR_6, VAR_5);
 FUNC_0(VAR_3, "#%.*s|||| /                     \n", VAR_6, VAR_5);
}

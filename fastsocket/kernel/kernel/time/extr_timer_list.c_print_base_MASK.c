
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct seq_file {int dummy; } ;
struct hrtimer_clock_base {int offset; int get_time; int resolution; int index; } ;


 int FUNC_0 (struct seq_file*,char*,...) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct seq_file*,struct hrtimer_clock_base*,int ) ;
 int FUNC_3 (struct seq_file*,int ) ;

__attribute__((used)) static void
FUNC_4(struct seq_file *VAR_0, struct hrtimer_clock_base *VAR_1, u64 VAR_2)
{
 FUNC_0(VAR_0, "  .base:       %pK\n", VAR_1);
 FUNC_0(VAR_0, "  .index:      %d\n",
   VAR_1->index);
 FUNC_0(VAR_0, "  .resolution: %Lu nsecs\n",
   (unsigned long long)FUNC_1(VAR_1->resolution));
 FUNC_0(VAR_0, "  .get_time:   ");
 FUNC_3(VAR_0, VAR_1->get_time);
 FUNC_0(VAR_0, "\n");




 FUNC_0(VAR_0, "active timers:\n");
 FUNC_2(VAR_0, VAR_1, VAR_2);
}

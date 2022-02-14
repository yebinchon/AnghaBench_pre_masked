
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct seq_file {int dummy; } ;
struct hrtimer {int start_pid; int start_comm; struct hrtimer* start_site; int state; struct hrtimer* function; } ;


 int FUNC_0 (struct seq_file*,char*,...) ;
 int VAR_0 ;
 int FUNC_1 (struct hrtimer*) ;
 int FUNC_2 (struct hrtimer*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (struct seq_file*,struct hrtimer*) ;

__attribute__((used)) static void
FUNC_6(struct seq_file *VAR_1, struct hrtimer *VAR_2, struct hrtimer *VAR_3,
     int VAR_4, u64 VAR_5)
{



 FUNC_0(VAR_1, " #%d: ", VAR_4);
 FUNC_5(VAR_1, VAR_2);
 FUNC_0(VAR_1, ", ");
 FUNC_5(VAR_1, VAR_3->function);
 FUNC_0(VAR_1, ", S:%02lx", VAR_3->state);







 FUNC_0(VAR_1, "\n");
 FUNC_0(VAR_1, " # expires at %Lu-%Lu nsecs [in %Ld to %Ld nsecs]\n",
  (unsigned long long)FUNC_3(FUNC_2(VAR_3)),
  (unsigned long long)FUNC_3(FUNC_1(VAR_3)),
  (long long)(FUNC_3(FUNC_2(VAR_3)) - VAR_5),
  (long long)(FUNC_3(FUNC_1(VAR_3)) - VAR_5));
}

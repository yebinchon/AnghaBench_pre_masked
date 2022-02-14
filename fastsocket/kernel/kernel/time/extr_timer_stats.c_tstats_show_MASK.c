
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int tv_nsec; int tv_sec; } ;
struct seq_file {int dummy; } ;
struct entry {int timer_flag; scalar_t__ count; scalar_t__ expire_func; scalar_t__ start_func; int comm; int pid; } ;
typedef int ktime_t ;


 int VAR_0 ;
 long FUNC_0 (int *) ;
 struct entry* VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 struct timespec FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (struct seq_file*,unsigned long) ;
 int FUNC_7 (struct seq_file*,char*,long,...) ;
 int FUNC_8 (struct seq_file*,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static int FUNC_9(struct seq_file *VAR_8, void *VAR_9)
{
 struct timespec VAR_10;
 struct entry *VAR_11;
 unsigned long VAR_12;
 long VAR_13 = 0;
 ktime_t VAR_14;
 int VAR_15;

 FUNC_4(&VAR_4);



 if (VAR_7)
  VAR_6 = FUNC_1();

 VAR_14 = FUNC_2(VAR_6, VAR_5);

 VAR_10 = FUNC_3(VAR_14);
 VAR_12 = VAR_10.tv_nsec / 1000000;

 FUNC_8(VAR_8, "Timer Stats Version: v0.2\n");
 FUNC_7(VAR_8, "Sample period: %ld.%03ld s\n", VAR_10.tv_sec, VAR_12);
 if (FUNC_0(&VAR_3))
  FUNC_7(VAR_8, "Overflow: %d entries\n",
   FUNC_0(&VAR_3));

 for (VAR_15 = 0; VAR_15 < VAR_2; VAR_15++) {
  VAR_11 = VAR_1 + VAR_15;
   if (VAR_11->timer_flag & VAR_0) {
   FUNC_7(VAR_8, "%4luD, %5d %-16s ",
    VAR_11->count, VAR_11->pid, VAR_11->comm);
  } else {
   FUNC_7(VAR_8, " %4lu, %5d %-16s ",
    VAR_11->count, VAR_11->pid, VAR_11->comm);
  }

  FUNC_6(VAR_8, (unsigned long)VAR_11->start_func);
  FUNC_8(VAR_8, " (");
  FUNC_6(VAR_8, (unsigned long)VAR_11->expire_func);
  FUNC_8(VAR_8, ")\n");

  VAR_13 += VAR_11->count;
 }

 VAR_12 += VAR_10.tv_sec * 1000;
 if (!VAR_12)
  VAR_12 = 1;

 if (VAR_13 && VAR_10.tv_sec)
  FUNC_7(VAR_8, "%ld total events, %ld.%03ld events/sec\n",
      VAR_13, VAR_13 * 1000 / VAR_12,
      (VAR_13 * 1000000 / VAR_12) % 1000);
 else
  FUNC_7(VAR_8, "%ld total events\n", VAR_13);

 FUNC_5(&VAR_4);

 return 0;
}

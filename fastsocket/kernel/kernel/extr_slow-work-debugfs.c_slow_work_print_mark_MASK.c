
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int tv_sec; int tv_nsec; } ;
struct slow_work {int mark; } ;
struct seq_file {int dummy; } ;


 struct timespec VAR_0 ;
 int FUNC_0 (struct seq_file*,char*,int) ;
 int FUNC_1 (struct seq_file*,char*) ;
 struct timespec FUNC_2 (struct timespec,int ) ;

__attribute__((used)) static void FUNC_3(struct seq_file *VAR_1, struct slow_work *VAR_2)
{
 struct timespec VAR_3, VAR_4;

 VAR_3 = VAR_0;
 VAR_4 = FUNC_2(VAR_3, VAR_2->mark);

 if (VAR_4.tv_sec < 0)
  FUNC_1(VAR_1, "  -ve ");
 else if (VAR_4.tv_sec == 0 && VAR_4.tv_nsec < 1000)
  FUNC_0(VAR_1, "%3luns ", VAR_4.tv_nsec);
 else if (VAR_4.tv_sec == 0 && VAR_4.tv_nsec < 1000000)
  FUNC_0(VAR_1, "%3luus ", VAR_4.tv_nsec / 1000);
 else if (VAR_4.tv_sec == 0 && VAR_4.tv_nsec < 1000000000)
  FUNC_0(VAR_1, "%3lums ", VAR_4.tv_nsec / 1000000);
 else if (VAR_4.tv_sec <= 1)
  FUNC_1(VAR_1, "   1s ");
 else if (VAR_4.tv_sec < 60)
  FUNC_0(VAR_1, "%4lus ", VAR_4.tv_sec);
 else if (VAR_4.tv_sec < 60 * 60)
  FUNC_0(VAR_1, "%4lum ", VAR_4.tv_sec / 60);
 else if (VAR_4.tv_sec < 60 * 60 * 24)
  FUNC_0(VAR_1, "%4luh ", VAR_4.tv_sec / 3600);
 else
  FUNC_1(VAR_1, "exces ");
}

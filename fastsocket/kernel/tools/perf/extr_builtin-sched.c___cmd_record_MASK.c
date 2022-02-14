
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (char const* const*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 char** FUNC_2 (unsigned int,int) ;
 int FUNC_3 (unsigned int,char const**,int *) ;
 char* FUNC_4 (char const* const) ;

__attribute__((used)) static int FUNC_5(int VAR_1, const char **VAR_2)
{
 unsigned int VAR_3, VAR_4, VAR_5;
 const char **VAR_6;
 const char * const VAR_7[] = {
  "record",
  "-a",
  "-R",
  "-f",
  "-m", "1024",
  "-c", "1",
  "-e", "sched:sched_switch",
  "-e", "sched:sched_stat_wait",
  "-e", "sched:sched_stat_sleep",
  "-e", "sched:sched_stat_iowait",
  "-e", "sched:sched_stat_runtime",
  "-e", "sched:sched_process_exit",
  "-e", "sched:sched_process_fork",
  "-e", "sched:sched_wakeup",
  "-e", "sched:sched_migrate_task",
 };

 VAR_3 = FUNC_0(VAR_7) + VAR_1 - 1;
 VAR_6 = FUNC_2(VAR_3 + 1, sizeof(char *));

 if (VAR_6 == ((void*)0))
  return -VAR_0;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_7); VAR_4++)
  VAR_6[VAR_4] = FUNC_4(VAR_7[VAR_4]);

 for (VAR_5 = 1; VAR_5 < (unsigned int)VAR_1; VAR_5++, VAR_4++)
  VAR_6[VAR_4] = VAR_2[VAR_5];

 FUNC_1(VAR_4 != VAR_3);

 return FUNC_3(VAR_4, VAR_6, ((void*)0));
}

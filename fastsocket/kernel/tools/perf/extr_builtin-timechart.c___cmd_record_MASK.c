
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (char const* const*) ;
 int VAR_0 ;
 char** FUNC_1 (unsigned int,int) ;
 int FUNC_2 (unsigned int,char const**,int *) ;
 scalar_t__ FUNC_3 (char*) ;
 char* FUNC_4 (char const* const) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_5(int VAR_2, const char **VAR_3)
{
 const char * const VAR_4[] = {
  "record", "-a", "-R", "-f", "-c", "1",
  "-e", "power:cpu_frequency",
  "-e", "power:cpu_idle",
  "-e", "sched:sched_wakeup",
  "-e", "sched:sched_switch",
 };
 unsigned int VAR_5, VAR_6, VAR_7;
 const char **VAR_8;
 const char * const *VAR_9 = VAR_4;
 unsigned int VAR_10 = FUNC_0(VAR_4);
 VAR_5 = VAR_10 + VAR_2 - 1;
 VAR_8 = FUNC_1(VAR_5 + 1, sizeof(char *));

 if (VAR_8 == ((void*)0))
  return -VAR_0;

 for (VAR_6 = 0; VAR_6 < VAR_10; VAR_6++)
  VAR_8[VAR_6] = FUNC_4(VAR_9[VAR_6]);

 for (VAR_7 = 1; VAR_7 < (unsigned int)VAR_2; VAR_7++, VAR_6++)
  VAR_8[VAR_6] = VAR_3[VAR_7];

 return FUNC_2(VAR_6, VAR_8, ((void*)0));
}

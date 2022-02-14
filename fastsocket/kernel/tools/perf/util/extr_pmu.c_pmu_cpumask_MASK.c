
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
struct cpu_map {int dummy; } ;
typedef int FILE ;


 int VAR_0 ;
 struct cpu_map* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,int,char*,char const*,char*) ;
 scalar_t__ FUNC_4 (char*,struct stat*) ;
 char* FUNC_5 () ;

__attribute__((used)) static struct cpu_map *FUNC_6(char *VAR_1)
{
 struct stat VAR_2;
 char VAR_3[VAR_0];
 const char *VAR_4;
 FILE *VAR_5;
 struct cpu_map *VAR_6;

 VAR_4 = FUNC_5();
 if (!VAR_4)
  return ((void*)0);

 FUNC_3(VAR_3, VAR_0,
   "%s/bus/event_source/devices/%s/cpumask", VAR_4, VAR_1);

 if (FUNC_4(VAR_3, &VAR_2) < 0)
  return ((void*)0);

 VAR_5 = FUNC_2(VAR_3, "r");
 if (!VAR_5)
  return ((void*)0);

 VAR_6 = FUNC_0(VAR_5);
 FUNC_1(VAR_5);
 return VAR_6;
}

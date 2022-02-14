
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpu_map {int dummy; } ;
typedef int FILE ;


 struct cpu_map* FUNC_0 () ;
 struct cpu_map* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,char*) ;

__attribute__((used)) static struct cpu_map *FUNC_4(void)
{
 struct cpu_map *VAR_0 = ((void*)0);
 FILE *VAR_1;

 VAR_1 = FUNC_3("/sys/devices/system/cpu/online", "r");
 if (!VAR_1)
  return FUNC_0();

 VAR_0 = FUNC_1(VAR_1);
 FUNC_2(VAR_1);
 return VAR_0;
}

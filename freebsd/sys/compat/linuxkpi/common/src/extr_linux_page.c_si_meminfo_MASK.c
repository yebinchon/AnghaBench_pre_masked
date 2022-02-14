
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysinfo {int mem_unit; scalar_t__ totalhigh; int totalram; } ;


 int VAR_0 ;
 int VAR_1 ;

void
FUNC_0(struct sysinfo *VAR_2)
{
 VAR_2->totalram = VAR_1;
 VAR_2->totalhigh = 0;
 VAR_2->mem_unit = VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysinfo {int mem_unit; int freehigh; int totalhigh; int bufferram; int freeram; scalar_t__ sharedram; int totalram; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_3(struct sysinfo *VAR_4)
{
 VAR_4->totalram = VAR_3;
 VAR_4->sharedram = 0;
 VAR_4->freeram = FUNC_0(VAR_0);
 VAR_4->bufferram = FUNC_1();
 VAR_4->totalhigh = VAR_2;
 VAR_4->freehigh = FUNC_2();
 VAR_4->mem_unit = VAR_1;
}

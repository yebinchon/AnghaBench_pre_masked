
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcpu {size_t pc_cpuid; } ;


 int FUNC_0 (int *,struct pcpu*,struct pcpu*,int ) ;
 int VAR_0 ;
 int ** VAR_1 ;
 scalar_t__* VAR_2 ;
 int VAR_3 ;

void
FUNC_1(struct pcpu *VAR_4)
{

 FUNC_0(&VAR_0, VAR_4, VAR_4, VAR_3);
 VAR_1[VAR_4->pc_cpuid] = ((void*)0);
 VAR_2[VAR_4->pc_cpuid] = 0;
}

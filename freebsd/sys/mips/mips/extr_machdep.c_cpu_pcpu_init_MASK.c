
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
struct pcpu {int pc_next_asid; int pc_asid_generation; struct pcpu* pc_self; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct pcpu*) ;
 scalar_t__ VAR_2 ;

void
FUNC_1(struct pcpu *VAR_3, int VAR_4, size_t VAR_5)
{

 VAR_3->pc_next_asid = 1;
 VAR_3->pc_asid_generation = 1;
 VAR_3->pc_self = VAR_3;






}

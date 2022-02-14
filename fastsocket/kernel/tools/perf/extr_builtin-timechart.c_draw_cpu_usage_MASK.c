
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct per_pidcomm {struct per_pidcomm* next; int comm; struct cpu_sample* samples; } ;
struct per_pid {struct per_pid* next; struct per_pidcomm* all; } ;
struct cpu_sample {scalar_t__ type; struct cpu_sample* next; int end_time; int start_time; int cpu; } ;


 scalar_t__ VAR_0 ;
 struct per_pid* VAR_1 ;
 int FUNC_0 (int ,int ,int ,char*,int ) ;

__attribute__((used)) static void FUNC_1(void)
{
 struct per_pid *VAR_2;
 struct per_pidcomm *VAR_3;
 struct cpu_sample *VAR_4;
 VAR_2 = VAR_1;
 while (VAR_2) {
  VAR_3 = VAR_2->all;
  while (VAR_3) {
   VAR_4 = VAR_3->samples;
   while (VAR_4) {
    if (VAR_4->type == VAR_0)
     FUNC_0(VAR_4->cpu, VAR_4->start_time, VAR_4->end_time, "sample", VAR_3->comm);

    VAR_4 = VAR_4->next;
   }
   VAR_3 = VAR_3->next;
  }
  VAR_2 = VAR_2->next;
 }
}

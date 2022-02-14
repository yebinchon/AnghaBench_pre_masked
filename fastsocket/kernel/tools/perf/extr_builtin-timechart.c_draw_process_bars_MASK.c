
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct per_pidcomm {int Y; char* comm; int total_time; struct per_pidcomm* next; int start_time; struct cpu_sample* samples; int end_time; int display; } ;
struct per_pid {int pid; struct per_pid* next; struct per_pidcomm* all; } ;
struct cpu_sample {scalar_t__ type; struct cpu_sample* next; int end_time; int start_time; int cpu; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct per_pid* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,char*,char*,int,double) ;
 int FUNC_1 (int,int ,int ,char*) ;
 int FUNC_2 (int,int ,int ,int ) ;
 int FUNC_3 (int,int ,char*) ;
 int FUNC_4 (int,int ,int ) ;

__attribute__((used)) static void FUNC_5(void)
{
 struct per_pid *VAR_5;
 struct per_pidcomm *VAR_6;
 struct cpu_sample *VAR_7;
 int VAR_8 = 0;

 VAR_8 = 2 * VAR_4 + 2;

 VAR_5 = VAR_3;
 while (VAR_5) {
  VAR_6 = VAR_5->all;
  while (VAR_6) {
   if (!VAR_6->display) {
    VAR_6->Y = 0;
    VAR_6 = VAR_6->next;
    continue;
   }

   FUNC_1(VAR_8, VAR_6->start_time, VAR_6->end_time, "process");
   VAR_7 = VAR_6->samples;
   while (VAR_7) {
    if (VAR_7->type == VAR_1)
     FUNC_2(VAR_8, VAR_7->cpu, VAR_7->start_time, VAR_7->end_time);
    if (VAR_7->type == VAR_0)
     FUNC_1(VAR_8, VAR_7->start_time, VAR_7->end_time, "blocked");
    if (VAR_7->type == VAR_2)
     FUNC_4(VAR_8, VAR_7->start_time, VAR_7->end_time);
    VAR_7 = VAR_7->next;
   }

   if (VAR_6->comm) {
    char VAR_9[256];
    if (VAR_6->total_time > 5000000000)
     FUNC_0(VAR_9, "%s:%i (%2.2fs)", VAR_6->comm, VAR_5->pid, VAR_6->total_time / 1000000000.0);
    else
     FUNC_0(VAR_9, "%s:%i (%3.1fms)", VAR_6->comm, VAR_5->pid, VAR_6->total_time / 1000000.0);

    FUNC_3(VAR_8, VAR_6->start_time, VAR_9);
   }
   VAR_6->Y = VAR_8;
   VAR_8++;
   VAR_6 = VAR_6->next;
  }
  VAR_5 = VAR_5->next;
 }
}

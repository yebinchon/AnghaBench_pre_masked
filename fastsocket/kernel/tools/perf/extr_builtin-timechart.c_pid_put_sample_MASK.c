
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct per_pidcomm {scalar_t__ start_time; int total_time; struct cpu_sample* samples; struct per_pidcomm* next; } ;
struct per_pid {scalar_t__ start_time; int total_time; struct per_pidcomm* all; struct per_pidcomm* current; } ;
struct cpu_sample {int type; unsigned int cpu; struct cpu_sample* next; scalar_t__ end_time; scalar_t__ start_time; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct per_pid* FUNC_1 (int) ;
 void* FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(int VAR_1, int VAR_2, unsigned int VAR_3, u64 VAR_4, u64 VAR_5)
{
 struct per_pid *VAR_6;
 struct per_pidcomm *VAR_7;
 struct cpu_sample *VAR_8;

 VAR_6 = FUNC_1(VAR_1);
 VAR_7 = VAR_6->current;
 if (!VAR_7) {
  VAR_7 = FUNC_2(sizeof(*VAR_7));
  FUNC_0(VAR_7 != ((void*)0));
  VAR_6->current = VAR_7;
  VAR_7->next = VAR_6->all;
  VAR_6->all = VAR_7;
 }

 VAR_8 = FUNC_2(sizeof(*VAR_8));
 FUNC_0(VAR_8 != ((void*)0));
 VAR_8->start_time = VAR_4;
 VAR_8->end_time = VAR_5;
 VAR_8->type = VAR_2;
 VAR_8->next = VAR_7->samples;
 VAR_8->cpu = VAR_3;
 VAR_7->samples = VAR_8;

 if (VAR_8->type == VAR_0 && VAR_5 > VAR_4 && VAR_4 > 0) {
  VAR_7->total_time += (VAR_5-VAR_4);
  VAR_6->total_time += (VAR_5-VAR_4);
 }

 if (VAR_7->start_time == 0 || VAR_7->start_time > VAR_4)
  VAR_7->start_time = VAR_4;
 if (VAR_6->start_time == 0 || VAR_6->start_time > VAR_4)
  VAR_6->start_time = VAR_4;
}

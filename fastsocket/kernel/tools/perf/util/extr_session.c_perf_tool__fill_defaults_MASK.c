
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_tool {int * finished_round; scalar_t__ ordered_samples; int * build_id; int * tracing_data; int * event_type; int * attr; int * unthrottle; int * throttle; int * read; int * lost; int * exit; int * fork; int * comm; int * mmap; int * sample; } ;


 int * VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 void* VAR_7 ;

__attribute__((used)) static void FUNC_0(struct perf_tool *VAR_8)
{
 if (VAR_8->sample == ((void*)0))
  VAR_8->sample = VAR_1;
 if (VAR_8->mmap == ((void*)0))
  VAR_8->mmap = VAR_2;
 if (VAR_8->comm == ((void*)0))
  VAR_8->comm = VAR_2;
 if (VAR_8->fork == ((void*)0))
  VAR_8->fork = VAR_2;
 if (VAR_8->exit == ((void*)0))
  VAR_8->exit = VAR_2;
 if (VAR_8->lost == ((void*)0))
  VAR_8->lost = VAR_0;
 if (VAR_8->read == ((void*)0))
  VAR_8->read = VAR_1;
 if (VAR_8->throttle == ((void*)0))
  VAR_8->throttle = VAR_2;
 if (VAR_8->unthrottle == ((void*)0))
  VAR_8->unthrottle = VAR_2;
 if (VAR_8->attr == ((void*)0))
  VAR_8->attr = VAR_3;
 if (VAR_8->event_type == ((void*)0))
  VAR_8->event_type = VAR_5;
 if (VAR_8->tracing_data == ((void*)0))
  VAR_8->tracing_data = VAR_4;
 if (VAR_8->build_id == ((void*)0))
  VAR_8->build_id = VAR_7;
 if (VAR_8->finished_round == ((void*)0)) {
  if (VAR_8->ordered_samples)
   VAR_8->finished_round = VAR_6;
  else
   VAR_8->finished_round = VAR_7;
 }
}

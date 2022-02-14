
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct per_pidcomm {int display; int start_time; scalar_t__ total_time; scalar_t__ end_time; struct per_pidcomm* next; } ;
struct per_pid {int display; int start_time; scalar_t__ end_time; scalar_t__ total_time; struct per_pid* next; struct per_pidcomm* all; } ;


 struct per_pid* VAR_0 ;
 int FUNC_0 () ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_1(u64 VAR_5)
{
 struct per_pid *VAR_6;
 struct per_pidcomm *VAR_7;
 int VAR_8 = 0;

 if (VAR_4)
  return FUNC_0();

 VAR_6 = VAR_0;
 while (VAR_6) {
  VAR_6->display = 0;
  if (VAR_6->start_time == 1)
   VAR_6->start_time = VAR_1;


  if (VAR_6->end_time == 0)
   VAR_6->end_time = VAR_2;
  if (VAR_6->total_time >= VAR_5 && !VAR_3)
   VAR_6->display = 1;

  VAR_7 = VAR_6->all;

  while (VAR_7) {
   VAR_7->display = 0;

   if (VAR_7->start_time == 1)
    VAR_7->start_time = VAR_1;

   if (VAR_7->total_time >= VAR_5 && !VAR_3) {
    VAR_7->display = 1;
    VAR_8++;
   }

   if (VAR_7->end_time == 0)
    VAR_7->end_time = VAR_2;

   VAR_7 = VAR_7->next;
  }
  VAR_6 = VAR_6->next;
 }
 return VAR_8;
}

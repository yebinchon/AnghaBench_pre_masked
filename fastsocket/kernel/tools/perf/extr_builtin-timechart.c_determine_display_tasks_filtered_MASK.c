
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct per_pidcomm {int display; int start_time; scalar_t__ end_time; struct per_pidcomm* next; } ;
struct per_pid {int display; int start_time; scalar_t__ end_time; struct per_pid* next; struct per_pidcomm* all; } ;


 struct per_pid* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 scalar_t__ FUNC_0 (struct per_pid*,struct per_pidcomm*) ;

__attribute__((used)) static int FUNC_1(void)
{
 struct per_pid *VAR_3;
 struct per_pidcomm *VAR_4;
 int VAR_5 = 0;

 VAR_3 = VAR_0;
 while (VAR_3) {
  VAR_3->display = 0;
  if (VAR_3->start_time == 1)
   VAR_3->start_time = VAR_1;


  if (VAR_3->end_time == 0)
   VAR_3->end_time = VAR_2;

  VAR_4 = VAR_3->all;

  while (VAR_4) {
   VAR_4->display = 0;

   if (VAR_4->start_time == 1)
    VAR_4->start_time = VAR_1;

   if (FUNC_0(VAR_3, VAR_4)) {
    VAR_4->display = 1;
    VAR_3->display = 1;
    VAR_5++;
   }

   if (VAR_4->end_time == 0)
    VAR_4->end_time = VAR_2;

   VAR_4 = VAR_4->next;
  }
  VAR_3 = VAR_3->next;
 }
 return VAR_5;
}

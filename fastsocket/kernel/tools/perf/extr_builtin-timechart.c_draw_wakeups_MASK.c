
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wake_event {int waker; int wakee; scalar_t__ time; struct wake_event* next; } ;
struct per_pidcomm {int Y; scalar_t__ start_time; scalar_t__ end_time; struct per_pidcomm* next; int comm; } ;
struct per_pid {int pid; struct per_pid* next; struct per_pidcomm* all; } ;


 int FUNC_0 (int) ;
 struct per_pid* VAR_0 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*,char*,int) ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__,int) ;
 int FUNC_6 (scalar_t__,int,char*,int,char*) ;
 int FUNC_7 (scalar_t__,int,int) ;
 struct wake_event* VAR_1 ;

__attribute__((used)) static void FUNC_8(void)
{
 struct wake_event *VAR_2;
 struct per_pid *VAR_3;
 struct per_pidcomm *VAR_4;

 VAR_2 = VAR_1;
 while (VAR_2) {
  int VAR_5 = 0, VAR_6 = 0;
  char *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);


  VAR_3 = VAR_0;
  while (VAR_3) {
   if (VAR_3->pid == VAR_2->waker || VAR_3->pid == VAR_2->wakee) {
    VAR_4 = VAR_3->all;
    while (VAR_4) {
     if (VAR_4->Y && VAR_4->start_time <= VAR_2->time && VAR_4->end_time >= VAR_2->time) {
      if (VAR_3->pid == VAR_2->waker && !VAR_5) {
       VAR_5 = VAR_4->Y;
       VAR_7 = FUNC_4(VAR_4->comm);
      }
      if (VAR_3->pid == VAR_2->wakee && !VAR_6) {
       VAR_6 = VAR_4->Y;
       VAR_8 = FUNC_4(VAR_4->comm);
      }
     }
     VAR_4 = VAR_4->next;
    }
    VAR_4 = VAR_3->all;
    while (VAR_4) {
     if (VAR_3->pid == VAR_2->waker && !VAR_5) {
      VAR_5 = VAR_4->Y;
      VAR_7 = FUNC_4(VAR_4->comm);
     }
     if (VAR_3->pid == VAR_2->wakee && !VAR_6) {
      VAR_6 = VAR_4->Y;
      VAR_8 = FUNC_4(VAR_4->comm);
     }
     VAR_4 = VAR_4->next;
    }
   }
   VAR_3 = VAR_3->next;
  }

  if (!VAR_7) {
   VAR_7 = FUNC_2(40);
   FUNC_3(VAR_7, "[%i]", VAR_2->waker);
  }
  if (!VAR_8) {
   VAR_8 = FUNC_2(40);
   FUNC_3(VAR_8, "[%i]", VAR_2->wakee);
  }

  if (VAR_2->waker == -1)
   FUNC_5(VAR_2->time, VAR_6);
  else if (VAR_5 && VAR_6 && FUNC_0(VAR_5 - VAR_6) == 1)
   FUNC_7(VAR_2->time, VAR_5, VAR_6);
  else
   FUNC_6(VAR_2->time, VAR_5, VAR_7, VAR_6, VAR_8);
  VAR_2 = VAR_2->next;

  FUNC_1(VAR_7);
  FUNC_1(VAR_8);
 }
}

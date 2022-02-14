
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pid {int pid; struct pid* next; int * fp; } ;
typedef int pid_t ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct pid*) ;
 struct pid* VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int*,int ) ;

int
FUNC_5(FILE *VAR_5)
{
 struct pid *VAR_6, *VAR_7;
 int VAR_8;
 pid_t VAR_9;






 for (VAR_7 = ((void*)0), VAR_6 = VAR_3; VAR_6; VAR_7 = VAR_6, VAR_6 = VAR_6->next)
  if (VAR_6->fp == VAR_5)
   break;
 if (VAR_6 == ((void*)0)) {



  VAR_2 = VAR_1;
  return -1;
 }

 (void)FUNC_0(VAR_5);


 if (VAR_7 == ((void*)0))
  VAR_3 = VAR_6->next;
 else
  VAR_7->next = VAR_6->next;





 do {
  VAR_9 = FUNC_4(VAR_6->pid, &VAR_8, 0);
 } while (VAR_9 == -1 && VAR_2 == VAR_0);

 FUNC_1(VAR_6);

 return VAR_9 == -1 ? -1 : VAR_8;
}

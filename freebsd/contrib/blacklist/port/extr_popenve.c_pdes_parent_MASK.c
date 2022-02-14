
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pid {int fd; struct pid* next; int pid; int * fp; } ;
typedef int pid_t ;
typedef int FILE ;


 int FUNC_0 (int) ;
 int * FUNC_1 (int,char const*) ;
 struct pid* VAR_0 ;

__attribute__((used)) static void
FUNC_2(int *VAR_1, struct pid *VAR_2, pid_t VAR_3, const char *VAR_4)
{
 FILE *VAR_5;


 if (*VAR_4 == 'r') {
  VAR_5 = FUNC_1(VAR_1[0], VAR_4);



  (void)FUNC_0(VAR_1[1]);
 } else {
  VAR_5 = FUNC_1(VAR_1[1], VAR_4);



  (void)FUNC_0(VAR_1[0]);
 }


 VAR_2->fp = VAR_5;
 VAR_2->pid = VAR_3;
 VAR_2->next = VAR_0;
 VAR_0 = VAR_2;
}

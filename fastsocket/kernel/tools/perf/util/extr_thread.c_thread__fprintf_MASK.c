
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int pid; char* comm; int mg; } ;
typedef int FILE ;


 size_t FUNC_0 (int *,char*,int,char*) ;
 size_t FUNC_1 (int *,int ,int *) ;
 int VAR_0 ;

__attribute__((used)) static size_t FUNC_2(struct thread *VAR_1, FILE *VAR_2)
{
 return FUNC_0(VAR_2, "Thread %d %s\n", VAR_1->pid, VAR_1->comm) +
        FUNC_1(&VAR_1->mg, VAR_0, VAR_2);
}

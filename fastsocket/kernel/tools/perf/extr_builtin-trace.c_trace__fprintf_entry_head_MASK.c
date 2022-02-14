
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct trace {scalar_t__ multiple_threads; } ;
struct thread {int pid; } ;
typedef int FILE ;


 scalar_t__ FUNC_0 (int *,char*,int) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 size_t FUNC_2 (struct trace*,int ,int *) ;

__attribute__((used)) static size_t FUNC_3(struct trace *VAR_0, struct thread *VAR_1,
     u64 VAR_2, u64 VAR_3, FILE *VAR_4)
{
 size_t VAR_5 = FUNC_2(VAR_0, VAR_3, VAR_4);
 VAR_5 += FUNC_1(VAR_2, VAR_4);

 if (VAR_0->multiple_threads)
  VAR_5 += FUNC_0(VAR_4, "%d ", VAR_1->pid);

 return VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {size_t pid; int comm; } ;


 unsigned int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 unsigned int* VAR_5 ;
 unsigned int* VAR_6 ;
 int FUNC_2 (int *,int ,int ) ;
 int * VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct task_struct *VAR_9)
{
 unsigned VAR_10, VAR_11;

 if (!VAR_9->pid || FUNC_3(VAR_9->pid > VAR_1))
  return;







 if (!FUNC_0(&VAR_8))
  return;

 VAR_11 = VAR_6[VAR_9->pid];
 if (VAR_11 == VAR_0) {
  VAR_11 = (VAR_4 + 1) % VAR_2;







  VAR_10 = VAR_5[VAR_11];
  if (VAR_10 != VAR_0)
   VAR_6[VAR_10] = VAR_0;

  VAR_5[VAR_11] = VAR_9->pid;
  VAR_6[VAR_9->pid] = VAR_11;

  VAR_4 = VAR_11;
 }

 FUNC_2(&VAR_7[VAR_11], VAR_9->comm, VAR_3);

 FUNC_1(&VAR_8);
}

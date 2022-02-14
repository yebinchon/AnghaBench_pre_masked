
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_proc; } ;
struct sem_undo {int un_proc; scalar_t__ un_cnt; } ;


 struct sem_undo* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct sem_undo*,int ) ;
 int FUNC_2 (struct sem_undo*,int ) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static struct sem_undo *
FUNC_4(struct thread *VAR_4)
{
 struct sem_undo *VAR_5;

 FUNC_3(VAR_0);
 if ((VAR_5 = FUNC_0(&VAR_1)) == ((void*)0))
  return (((void*)0));
 FUNC_2(VAR_5, VAR_3);
 FUNC_1(&VAR_2, VAR_5, VAR_3);
 VAR_5->un_cnt = 0;
 VAR_5->un_proc = VAR_4->td_proc;
 return (VAR_5);
}

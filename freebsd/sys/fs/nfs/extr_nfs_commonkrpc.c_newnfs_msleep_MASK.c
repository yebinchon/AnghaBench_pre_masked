
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct mtx {int dummy; } ;
typedef int sigset_t ;


 int VAR_0 ;
 struct thread* VAR_1 ;
 int FUNC_0 (void*,struct mtx*,int,char*,int) ;
 int FUNC_1 (struct thread*,int *) ;
 int FUNC_2 (struct thread*,int *) ;

int
FUNC_3(struct thread *VAR_2, void *VAR_3, struct mtx *VAR_4, int VAR_5, char *VAR_6, int VAR_7)
{
 sigset_t VAR_8;
 int VAR_9;

 if ((VAR_5 & VAR_0) == 0)
  return FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
 if (VAR_2 == ((void*)0))
  VAR_2 = VAR_1;
 FUNC_2(VAR_2, &VAR_8);
 VAR_9 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
 FUNC_1(VAR_2, &VAR_8);
 return (VAR_9);
}

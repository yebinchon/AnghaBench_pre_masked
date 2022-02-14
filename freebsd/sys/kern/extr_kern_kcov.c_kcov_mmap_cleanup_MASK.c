
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct kcov_info {struct thread* thread; int state; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (struct kcov_info*) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(void *VAR_2)
{
 struct kcov_info *VAR_3 = VAR_2;
 struct thread *VAR_4;

 FUNC_3(&VAR_1);
 FUNC_0(&VAR_3->state, VAR_0);
 FUNC_1();
 VAR_4 = VAR_3->thread;
 FUNC_4(&VAR_1);

 if (VAR_4 != ((void*)0))
  return;
 FUNC_2(VAR_3);
}
